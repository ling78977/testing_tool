/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: include/data_type/dirty_data_type.h
  Source: /home/ling/projects/dds_sub/idl/dirty_data_type.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef MYPROJ_INCLUDE_DATA_TYPE_DIRTY_DATA_TYPE_H_D0DC312EDA10415BAD2F8A0F28DEE3D3
#define MYPROJ_INCLUDE_DATA_TYPE_DIRTY_DATA_TYPE_H_D0DC312EDA10415BAD2F8A0F28DEE3D3

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ERR_CODE_INFO_MAX_LEN 128
typedef struct dirty_detect_result_t
{
  double timestamp;
  int32_t status;
} dirty_detect_result_t;

extern const dds_topic_descriptor_t dirty_detect_result_t_desc;

#define dirty_detect_result_t__alloc() \
((dirty_detect_result_t*) dds_alloc (sizeof (dirty_detect_result_t)));

#define dirty_detect_result_t_free(d,o) \
dds_sample_free ((d), &dirty_detect_result_t_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* MYPROJ_INCLUDE_DATA_TYPE_DIRTY_DATA_TYPE_H_D0DC312EDA10415BAD2F8A0F28DEE3D3 */
