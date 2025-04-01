#include "dds/dds.h"
#include "sensor_imu_type.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <chassis_data_type.h>

#define SAMPLE_COUNT 9999  // 最大样本数
#define PUBLISH_INTERVAL 0.01 // 发布间隔（秒）

int main(int argc, char **argv) {
  dds_entity_t participant;
  dds_entity_t topic;
  dds_entity_t topic2;
  dds_entity_t writer;
  dds_entity_t writer2;
  dds_return_t rc;
  dds_qos_t *qos;
  imu_data_t *sample;
  wheel_pos_data_t *sample2;
  (void)argc;
  (void)argv;

  /* 创建DomainParticipant */
  participant = dds_create_participant(DDS_DOMAIN_DEFAULT, NULL, NULL);
  if (participant < 0)
    DDS_FATAL("dds_create_participant: %s\n", dds_strretcode(-participant));

  /* 创建Topic */
  topic = dds_create_topic(participant, &imu_data_t_desc, "dds_imu", NULL, NULL);
  topic2 = dds_create_topic(participant, &wheel_pos_data_t_desc, "odom_topic", NULL, NULL);
  if (topic < 0)
    DDS_FATAL("dds_create_topic: %s\n", dds_strretcode(-topic));

  /* 配置可靠QoS策略 */
  qos = dds_create_qos();
  dds_qset_reliability(qos, DDS_RELIABILITY_RELIABLE, DDS_SECS(10));
  
  /* 创建DataWriter */
  writer = dds_create_writer(participant, topic, qos, NULL);
  writer2 = dds_create_writer(participant, topic2, qos, NULL);
  if (writer < 0)
    DDS_FATAL("dds_create_writer: %s\n", dds_strretcode(-writer));
  dds_delete_qos(qos);

  /* 分配样本内存 */
  sample = imu_data_t__alloc();
  sample2=wheel_pos_data_t__alloc();
  if (!sample)
    DDS_FATAL("Failed to allocate sample\n");

  printf("=== [Publisher] 准备发送数据... ===\n");
  srand(time(NULL)); // 初始化随机种子

  uint32_t count = 0;
  while (++count <= SAMPLE_COUNT) {
    /* 填充样本数据 */
    sample->id = count;
    sample->temp = 25.0 + ((float)rand() / RAND_MAX) * 5.0; // 25-30℃
    sample->ax = (float)rand() / RAND_MAX * 2.0 - 1.0;      // -1g ~ +1g
    sample->ay = (float)rand() / RAND_MAX * 2.0 - 1.0;
    sample->az = (float)rand() / RAND_MAX * 2.0 - 1.0;
    sample->gx = (float)rand() / RAND_MAX * 100.0 - 50.0;   // -50 ~ +50 deg/s
    sample->gy = (float)rand() / RAND_MAX * 100.0 - 50.0;
    sample->gz = (float)rand() / RAND_MAX * 100.0 - 50.0;
    sample->stamp = dds_time() / 1e9; // 获取纳秒时间戳并转换为秒

    sample2->wl_sl=2;
    sample2->wl_sm=(float)rand() / RAND_MAX * 2.0 - 1.0;
    sample2->wl_sr=(float)rand() / RAND_MAX * 2.0 - 1.0;
    sample2->wr_sl=(float)rand() / RAND_MAX * 2.0 - 1.0;

    // sample2->wr_sm=(float)rand() / RAND_MAX * 2.0 - 1.0;
    // sample2->wr_sr=(float)rand() / RAND_MAX * 2.0 - 1.0;
    


    /* 发布数据 */
    rc = dds_write(writer, sample);
    rc=dds_write(writer2,sample2);
    if (rc != DDS_RETCODE_OK)
      DDS_FATAL("dds_write: %s\n", dds_strretcode(-rc));

    printf("=== [Publisher] 已发送数据包ID: %u ===\n", count);
    fflush(stdout);

    dds_sleepfor(DDS_SECS(PUBLISH_INTERVAL)); // 控制发布频率
  }

  /* 清理资源 */
  imu_data_t_free(sample, DDS_FREE_ALL);
  rc = dds_delete(participant);
  if (rc != DDS_RETCODE_OK)
    DDS_FATAL("dds_delete: %s\n", dds_strretcode(-rc));

  return EXIT_SUCCESS;
}
