/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: include/data_type/err_info_type.c
  Source: /home/ling/projects/dds_sub/idl/err_info_type.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#include "err_info_type.h"

static const uint32_t error_info_mcu_proxy_t_ops [] =
{
  /* mcu_proxy_t */
  DDS_OP_ADR | DDS_OP_TYPE_ENU | (2 << DDS_OP_FLAG_SZ_SHIFT), offsetof (error_info_mcu_proxy_t, type), 1u,
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL c3db63a05c5923dc55e2f4a65df2] (#deps: 1)
   - [MINIMAL 95447b916bb88b65d55d96254e2a]
  [COMPLETE 937ac1642cd703c13e1fbcebb323] (#deps: 1)
   - [COMPLETE f9ac3a01cd3a0779a7c3ad6755fb]
*/
#define TYPE_INFO_CDR_error_info_mcu_proxy_t (const unsigned char []){ \
  0x90, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0xc3, 0xdb, 0x63, 0xa0, 0x5c, 0x59, 0x23, 0xdc, 0x55, 0xe2, 0xf4, \
  0xa6, 0x5d, 0xf2, 0x00, 0x35, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xf1, 0x95, 0x44, 0x7b, 0x91, 0x6b, 0xb8, 0x8b, \
  0x65, 0xd5, 0x5d, 0x96, 0x25, 0x4e, 0x2a, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, \
  0x40, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xf2, 0x93, 0x7a, 0xc1, \
  0x64, 0x2c, 0xd7, 0x03, 0xc1, 0x3e, 0x1f, 0xbc, 0xeb, 0xb3, 0x23, 0x00, 0x5b, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, \
  0xf2, 0xf9, 0xac, 0x3a, 0x01, 0xcd, 0x3a, 0x07, 0x79, 0xa7, 0xc3, 0xad, 0x67, 0x55, 0xfb, 0x00, \
  0x92, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_error_info_mcu_proxy_t 148u
#define TYPE_MAP_CDR_error_info_mcu_proxy_t (const unsigned char []){ \
  0x96, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xf1, 0xc3, 0xdb, 0x63, 0xa0, 0x5c, 0x59, 0x23, \
  0xdc, 0x55, 0xe2, 0xf4, 0xa6, 0x5d, 0xf2, 0x00, 0x31, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf1, 0x95, 0x44, 0x7b, 0x91, 0x6b, \
  0xb8, 0x8b, 0x65, 0xd5, 0x5d, 0x96, 0x25, 0x4e, 0x2a, 0x59, 0x9d, 0xcc, 0xe2, 0xf1, 0x95, 0x44, \
  0x7b, 0x91, 0x6b, 0xb8, 0x8b, 0x65, 0xd5, 0x5d, 0x96, 0x25, 0x4e, 0x2a, 0x3a, 0x00, 0x00, 0x00, \
  0xf1, 0x40, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, \
  0x02, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x40, 0x00, 0x08, 0x34, 0x82, 0xb1, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0x8c, 0x4d, 0x68, 0x00, 0x00, 0x12, 0x01, 0x00, 0x00, \
  0x02, 0x00, 0x00, 0x00, 0xf2, 0x93, 0x7a, 0xc1, 0x64, 0x2c, 0xd7, 0x03, 0xc1, 0x3e, 0x1f, 0xbc, \
  0xeb, 0xb3, 0x23, 0x00, 0x57, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x5f, 0x69, 0x6e, \
  0x66, 0x6f, 0x3a, 0x3a, 0x6d, 0x63, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x78, 0x79, 0x5f, 0x74, 0x00, \
  0x2b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0xf2, 0xf9, 0xac, 0x3a, 0x01, 0xcd, 0x3a, 0x07, 0x79, 0xa7, 0xc3, 0xad, 0x67, 0x55, \
  0xfb, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x74, 0x79, 0x70, 0x65, 0x00, 0x00, 0x00, 0xf2, \
  0xf9, 0xac, 0x3a, 0x01, 0xcd, 0x3a, 0x07, 0x79, 0xa7, 0xc3, 0xad, 0x67, 0x55, 0xfb, 0x00, 0x00, \
  0x8e, 0x00, 0x00, 0x00, 0xf2, 0x40, 0x02, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, \
  0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x64, 0x77, 0x61, 0x72, 0x65, 0x5f, 0x65, 0x72, 0x72, 0x5f, \
  0x74, 0x79, 0x70, 0x65, 0x5f, 0x65, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x31, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, \
  0x1f, 0x00, 0x00, 0x00, 0x4d, 0x49, 0x44, 0x57, 0x41, 0x52, 0x45, 0x5f, 0x45, 0x52, 0x52, 0x5f, \
  0x50, 0x45, 0x52, 0x43, 0x45, 0x50, 0x54, 0x49, 0x4f, 0x4e, 0x5f, 0x54, 0x49, 0x4d, 0x45, 0x4f, \
  0x55, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x4d, 0x49, 0x44, 0x57, \
  0x41, 0x52, 0x45, 0x5f, 0x45, 0x52, 0x52, 0x5f, 0x49, 0x4e, 0x56, 0x41, 0x4c, 0x49, 0x44, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xf2, 0x93, 0x7a, 0xc1, \
  0x64, 0x2c, 0xd7, 0x03, 0xc1, 0x3e, 0x1f, 0xbc, 0xeb, 0xb3, 0x23, 0xf1, 0xc3, 0xdb, 0x63, 0xa0, \
  0x5c, 0x59, 0x23, 0xdc, 0x55, 0xe2, 0xf4, 0xa6, 0x5d, 0xf2, 0xf2, 0xf9, 0xac, 0x3a, 0x01, 0xcd, \
  0x3a, 0x07, 0x79, 0xa7, 0xc3, 0xad, 0x67, 0x55, 0xfb, 0xf1, 0x95, 0x44, 0x7b, 0x91, 0x6b, 0xb8, \
  0x8b, 0x65, 0xd5, 0x5d, 0x96, 0x25, 0x4e, 0x2a\
}
#define TYPE_MAP_CDR_SZ_error_info_mcu_proxy_t 504u
const dds_topic_descriptor_t error_info_mcu_proxy_t_desc =
{
  .m_size = sizeof (error_info_mcu_proxy_t),
  .m_align = dds_alignof (error_info_mcu_proxy_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "error_info::mcu_proxy_t",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = error_info_mcu_proxy_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_error_info_mcu_proxy_t, .sz = TYPE_INFO_CDR_SZ_error_info_mcu_proxy_t },
  .type_mapping = { .data = TYPE_MAP_CDR_error_info_mcu_proxy_t, .sz = TYPE_MAP_CDR_SZ_error_info_mcu_proxy_t }
};

static const uint32_t system_error_code_t_ops [] =
{
  /* system_error_code_t */
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (system_error_code_t, code),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 5b6775713034df5323665ff97340] (#deps: 0)
  [COMPLETE 506497a539a0e640b3db1a028a90] (#deps: 0)
*/
#define TYPE_INFO_CDR_system_error_code_t (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x5b, 0x67, 0x75, 0x71, 0x30, 0x34, 0xdf, 0x53, 0x23, 0x66, 0x5f, \
  0xf9, 0x73, 0x40, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0x50, 0x64, 0x97, 0xa5, 0x39, 0xa0, 0xe6, 0x40, 0xb3, 0xdb, 0x1a, \
  0x02, 0x8a, 0x90, 0x00, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_system_error_code_t 100u
#define TYPE_MAP_CDR_system_error_code_t (const unsigned char []){ \
  0x3b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x5b, 0x67, 0x75, 0x71, 0x30, 0x34, 0xdf, \
  0x53, 0x23, 0x66, 0x5f, 0xf9, 0x73, 0x40, 0x00, 0x23, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0xc1, 0x33, 0x67, 0x94, 0x00, \
  0x5b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x50, 0x64, 0x97, 0xa5, 0x39, 0xa0, 0xe6, \
  0x40, 0xb3, 0xdb, 0x1a, 0x02, 0x8a, 0x90, 0x00, 0x43, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x73, 0x79, 0x73, 0x74, \
  0x65, 0x6d, 0x5f, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x5f, 0x63, 0x6f, 0x64, 0x65, 0x5f, 0x74, 0x00, \
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x04, 0x00, 0x05, 0x00, 0x00, 0x00, 0x63, 0x6f, 0x64, 0x65, 0x00, 0x00, 0x00, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x50, 0x64, 0x97, 0xa5, 0x39, 0xa0, 0xe6, \
  0x40, 0xb3, 0xdb, 0x1a, 0x02, 0x8a, 0x90, 0xf1, 0x5b, 0x67, 0x75, 0x71, 0x30, 0x34, 0xdf, 0x53, \
  0x23, 0x66, 0x5f, 0xf9, 0x73, 0x40\
}
#define TYPE_MAP_CDR_SZ_system_error_code_t 198u
const dds_topic_descriptor_t system_error_code_t_desc =
{
  .m_size = sizeof (system_error_code_t),
  .m_align = dds_alignof (system_error_code_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "system_error_code_t",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = system_error_code_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_system_error_code_t, .sz = TYPE_INFO_CDR_SZ_system_error_code_t },
  .type_mapping = { .data = TYPE_MAP_CDR_system_error_code_t, .sz = TYPE_MAP_CDR_SZ_system_error_code_t }
};

static const uint32_t system_power_off_inform_t_ops [] =
{
  /* system_power_off_inform_t */
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (system_power_off_inform_t, reserve),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 56035316a7d318db22c740ba1042] (#deps: 0)
  [COMPLETE 866a071d810069d477ad91047566] (#deps: 0)
*/
#define TYPE_INFO_CDR_system_power_off_inform_t (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x56, 0x03, 0x53, 0x16, 0xa7, 0xd3, 0x18, 0xdb, 0x22, 0xc7, 0x40, \
  0xba, 0x10, 0x42, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0x86, 0x6a, 0x07, 0x1d, 0x81, 0x00, 0x69, 0xd4, 0x77, 0xad, 0x91, \
  0x04, 0x75, 0x66, 0x00, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_system_power_off_inform_t 100u
#define TYPE_MAP_CDR_system_power_off_inform_t (const unsigned char []){ \
  0x3b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x56, 0x03, 0x53, 0x16, 0xa7, 0xd3, 0x18, \
  0xdb, 0x22, 0xc7, 0x40, 0xba, 0x10, 0x42, 0x00, 0x23, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x9c, 0x3b, 0x62, 0x94, 0x00, \
  0x66, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x86, 0x6a, 0x07, 0x1d, 0x81, 0x00, 0x69, \
  0xd4, 0x77, 0xad, 0x91, 0x04, 0x75, 0x66, 0x00, 0x4e, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x73, 0x79, 0x73, 0x74, \
  0x65, 0x6d, 0x5f, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x5f, 0x69, 0x6e, 0x66, \
  0x6f, 0x72, 0x6d, 0x5f, 0x74, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, \
  0x72, 0x65, 0x73, 0x65, 0x72, 0x76, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0xf2, 0x86, 0x6a, 0x07, 0x1d, 0x81, 0x00, 0x69, 0xd4, 0x77, 0xad, 0x91, \
  0x04, 0x75, 0x66, 0xf1, 0x56, 0x03, 0x53, 0x16, 0xa7, 0xd3, 0x18, 0xdb, 0x22, 0xc7, 0x40, 0xba, \
  0x10, 0x42\
}
#define TYPE_MAP_CDR_SZ_system_power_off_inform_t 210u
const dds_topic_descriptor_t system_power_off_inform_t_desc =
{
  .m_size = sizeof (system_power_off_inform_t),
  .m_align = dds_alignof (system_power_off_inform_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "system_power_off_inform_t",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = system_power_off_inform_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_system_power_off_inform_t, .sz = TYPE_INFO_CDR_SZ_system_power_off_inform_t },
  .type_mapping = { .data = TYPE_MAP_CDR_system_power_off_inform_t, .sz = TYPE_MAP_CDR_SZ_system_power_off_inform_t }
};

static const uint32_t perception_error_code_t_ops [] =
{
  /* perception_error_code_t */
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (perception_error_code_t, timestamp),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (perception_error_code_t, status),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL bacacffa374b1219227a9b70d404] (#deps: 0)
  [COMPLETE b8222304708fbd7e3b780a7a4a31] (#deps: 0)
*/
#define TYPE_INFO_CDR_perception_error_code_t (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0xba, 0xca, 0xcf, 0xfa, 0x37, 0x4b, 0x12, 0x19, 0x22, 0x7a, 0x9b, \
  0x70, 0xd4, 0x04, 0x00, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xb8, 0x22, 0x23, 0x04, 0x70, 0x8f, 0xbd, 0x7e, 0x3b, 0x78, 0x0a, \
  0x7a, 0x4a, 0x31, 0x00, 0x69, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_perception_error_code_t 100u
#define TYPE_MAP_CDR_perception_error_code_t (const unsigned char []){ \
  0x4b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0xba, 0xca, 0xcf, 0xfa, 0x37, 0x4b, 0x12, \
  0x19, 0x22, 0x7a, 0x9b, 0x70, 0xd4, 0x04, 0x00, 0x33, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0xd7, 0xe6, 0xd5, 0x5b, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x9a, 0xcb, 0x44, 0x54, 0x00, \
  0x7d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xb8, 0x22, 0x23, 0x04, 0x70, 0x8f, 0xbd, \
  0x7e, 0x3b, 0x78, 0x0a, 0x7a, 0x4a, 0x31, 0x00, 0x65, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x70, 0x65, 0x72, 0x63, \
  0x65, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x5f, 0x63, 0x6f, 0x64, \
  0x65, 0x5f, 0x74, 0x00, 0x39, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x74, 0x69, 0x6d, 0x65, \
  0x73, 0x74, 0x61, 0x6d, 0x70, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xb8, 0x22, 0x23, \
  0x04, 0x70, 0x8f, 0xbd, 0x7e, 0x3b, 0x78, 0x0a, 0x7a, 0x4a, 0x31, 0xf1, 0xba, 0xca, 0xcf, 0xfa, \
  0x37, 0x4b, 0x12, 0x19, 0x22, 0x7a, 0x9b, 0x70, 0xd4, 0x04\
}
#define TYPE_MAP_CDR_SZ_perception_error_code_t 250u
const dds_topic_descriptor_t perception_error_code_t_desc =
{
  .m_size = sizeof (perception_error_code_t),
  .m_align = dds_alignof (perception_error_code_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "perception_error_code_t",
  .m_keys = NULL,
  .m_nops = 3,
  .m_ops = perception_error_code_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_perception_error_code_t, .sz = TYPE_INFO_CDR_SZ_perception_error_code_t },
  .type_mapping = { .data = TYPE_MAP_CDR_perception_error_code_t, .sz = TYPE_MAP_CDR_SZ_perception_error_code_t }
};

static const uint32_t iot_ctrl_t_ops [] =
{
  /* iot_ctrl_t */
  DDS_OP_ADR | DDS_OP_TYPE_1BY, offsetof (iot_ctrl_t, recvDeviceId),
  DDS_OP_ADR | DDS_OP_TYPE_1BY, offsetof (iot_ctrl_t, sendDeviceId),
  DDS_OP_ADR | DDS_OP_TYPE_2BY, offsetof (iot_ctrl_t, seqs),
  DDS_OP_ADR | DDS_OP_TYPE_2BY, offsetof (iot_ctrl_t, datalen),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (iot_ctrl_t, errcode),
  DDS_OP_ADR | DDS_OP_TYPE_ARR | DDS_OP_SUBTYPE_1BY | DDS_OP_FLAG_SGN, offsetof (iot_ctrl_t, data), 10240u,
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL b0a8f34def37210b5710ad873f30] (#deps: 0)
  [COMPLETE e4f575db2d8de5ab57833ee99386] (#deps: 0)
*/
#define TYPE_INFO_CDR_iot_ctrl_t (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0xb0, 0xa8, 0xf3, 0x4d, 0xef, 0x37, 0x21, 0x0b, 0x57, 0x10, 0xad, \
  0x87, 0x3f, 0x30, 0x00, 0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xe4, 0xf5, 0x75, 0xdb, 0x2d, 0x8d, 0xe5, 0xab, 0x57, 0x83, 0x3e, \
  0xe9, 0x93, 0x86, 0x00, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_iot_ctrl_t 100u
#define TYPE_MAP_CDR_iot_ctrl_t (const unsigned char []){ \
  0x99, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0xb0, 0xa8, 0xf3, 0x4d, 0xef, 0x37, 0x21, \
  0x0b, 0x57, 0x10, 0xad, 0x87, 0x3f, 0x30, 0x00, 0x81, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0d, 0x95, 0x86, 0x56, 0xfa, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0d, 0x2c, 0xdd, 0x54, 0x51, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x06, 0x1d, 0x2e, 0xe0, 0xf7, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x06, 0x10, 0x65, 0x53, 0xe2, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x4c, 0xa5, 0xa6, 0x08, 0x00, \
  0x19, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x10, 0x8d, 0x77, 0x7f, 0x38, 0x00, 0x00, 0x00, \
  0xf3, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xe4, 0xf5, 0x75, 0xdb, 0x2d, 0x8d, 0xe5, \
  0xab, 0x57, 0x83, 0x3e, 0xe9, 0x93, 0x86, 0x00, 0xdb, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x69, 0x6f, 0x74, 0x5f, \
  0x63, 0x74, 0x72, 0x6c, 0x5f, 0x74, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, \
  0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0d, 0x00, 0x0d, 0x00, 0x00, 0x00, \
  0x72, 0x65, 0x63, 0x76, 0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x49, 0x64, 0x00, 0x00, 0x00, 0x00, \
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0d, 0x00, 0x0d, 0x00, 0x00, 0x00, \
  0x73, 0x65, 0x6e, 0x64, 0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x49, 0x64, 0x00, 0x00, 0x00, 0x00, \
  0x13, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x06, 0x00, 0x05, 0x00, 0x00, 0x00, \
  0x73, 0x65, 0x71, 0x73, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0x64, 0x61, 0x74, 0x61, 0x6c, 0x65, 0x6e, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x00, \
  0x08, 0x00, 0x00, 0x00, 0x65, 0x72, 0x72, 0x63, 0x6f, 0x64, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x23, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, \
  0x64, 0x61, 0x74, 0x61, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0xf2, 0xe4, 0xf5, 0x75, 0xdb, 0x2d, 0x8d, 0xe5, 0xab, 0x57, 0x83, 0x3e, 0xe9, 0x93, 0x86, 0xf1, \
  0xb0, 0xa8, 0xf3, 0x4d, 0xef, 0x37, 0x21, 0x0b, 0x57, 0x10, 0xad, 0x87, 0x3f, 0x30\
}
#define TYPE_MAP_CDR_SZ_iot_ctrl_t 446u
const dds_topic_descriptor_t iot_ctrl_t_desc =
{
  .m_size = sizeof (iot_ctrl_t),
  .m_align = dds_alignof (iot_ctrl_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "iot_ctrl_t",
  .m_keys = NULL,
  .m_nops = 7,
  .m_ops = iot_ctrl_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_iot_ctrl_t, .sz = TYPE_INFO_CDR_SZ_iot_ctrl_t },
  .type_mapping = { .data = TYPE_MAP_CDR_iot_ctrl_t, .sz = TYPE_MAP_CDR_SZ_iot_ctrl_t }
};

static const uint32_t system_event_code_t_ops [] =
{
  /* system_event_code_t */
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (system_event_code_t, code),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 5b6775713034df5323665ff97340] (#deps: 0)
  [COMPLETE 543216c905ac9f54e5819875a1fd] (#deps: 0)
*/
#define TYPE_INFO_CDR_system_event_code_t (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x5b, 0x67, 0x75, 0x71, 0x30, 0x34, 0xdf, 0x53, 0x23, 0x66, 0x5f, \
  0xf9, 0x73, 0x40, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0x54, 0x32, 0x16, 0xc9, 0x05, 0xac, 0x9f, 0x54, 0xe5, 0x81, 0x98, \
  0x75, 0xa1, 0xfd, 0x00, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_system_event_code_t 100u
#define TYPE_MAP_CDR_system_event_code_t (const unsigned char []){ \
  0x3b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x5b, 0x67, 0x75, 0x71, 0x30, 0x34, 0xdf, \
  0x53, 0x23, 0x66, 0x5f, 0xf9, 0x73, 0x40, 0x00, 0x23, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0xc1, 0x33, 0x67, 0x94, 0x00, \
  0x5b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x54, 0x32, 0x16, 0xc9, 0x05, 0xac, 0x9f, \
  0x54, 0xe5, 0x81, 0x98, 0x75, 0xa1, 0xfd, 0x00, 0x43, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x73, 0x79, 0x73, 0x74, \
  0x65, 0x6d, 0x5f, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x5f, 0x63, 0x6f, 0x64, 0x65, 0x5f, 0x74, 0x00, \
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x04, 0x00, 0x05, 0x00, 0x00, 0x00, 0x63, 0x6f, 0x64, 0x65, 0x00, 0x00, 0x00, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x54, 0x32, 0x16, 0xc9, 0x05, 0xac, 0x9f, \
  0x54, 0xe5, 0x81, 0x98, 0x75, 0xa1, 0xfd, 0xf1, 0x5b, 0x67, 0x75, 0x71, 0x30, 0x34, 0xdf, 0x53, \
  0x23, 0x66, 0x5f, 0xf9, 0x73, 0x40\
}
#define TYPE_MAP_CDR_SZ_system_event_code_t 198u
const dds_topic_descriptor_t system_event_code_t_desc =
{
  .m_size = sizeof (system_event_code_t),
  .m_align = dds_alignof (system_event_code_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "system_event_code_t",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = system_event_code_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_system_event_code_t, .sz = TYPE_INFO_CDR_SZ_system_event_code_t },
  .type_mapping = { .data = TYPE_MAP_CDR_system_event_code_t, .sz = TYPE_MAP_CDR_SZ_system_event_code_t }
};

