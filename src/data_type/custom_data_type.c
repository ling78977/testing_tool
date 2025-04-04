/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: include/data_type/custom_data_type.c
  Source: /home/ling/projects/dds_sub/idl/custom_data_type.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#include "custom_data_type.h"

static const uint32_t custom_data_256_t_ops [] =
{
  /* data_256_t */
  DDS_OP_ADR | DDS_OP_TYPE_ARR | DDS_OP_SUBTYPE_1BY | DDS_OP_FLAG_SGN, offsetof (custom_data_256_t, value), 256u,
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 06e9af79d0de50bc1a358f034888] (#deps: 0)
  [COMPLETE 94d9dabdb959cf0e668502e27ecc] (#deps: 0)
*/
#define TYPE_INFO_CDR_custom_data_256_t (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x06, 0xe9, 0xaf, 0x79, 0xd0, 0xde, 0x50, 0xbc, 0x1a, 0x35, 0x8f, \
  0x03, 0x48, 0x88, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0x94, 0xd9, 0xda, 0xbd, 0xb9, 0x59, 0xcf, 0x0e, 0x66, 0x85, 0x02, \
  0xe2, 0x7e, 0xcc, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_custom_data_256_t 100u
#define TYPE_MAP_CDR_custom_data_256_t (const unsigned char []){ \
  0x49, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x06, 0xe9, 0xaf, 0x79, 0xd0, 0xde, 0x50, \
  0xbc, 0x1a, 0x35, 0x8f, 0x03, 0x48, 0x88, 0x00, 0x31, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x10, 0x20, 0x63, 0xc1, 0x60, 0x00, 0x00, 0x00, \
  0x6c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x94, 0xd9, 0xda, 0xbd, 0xb9, 0x59, 0xcf, \
  0x0e, 0x66, 0x85, 0x02, 0xe2, 0x7e, 0xcc, 0x00, 0x54, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x63, 0x75, 0x73, 0x74, \
  0x6f, 0x6d, 0x3a, 0x3a, 0x64, 0x61, 0x74, 0x61, 0x5f, 0x32, 0x35, 0x36, 0x5f, 0x74, 0x00, 0x00, \
  0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, \
  0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x94, 0xd9, 0xda, 0xbd, 0xb9, 0x59, 0xcf, \
  0x0e, 0x66, 0x85, 0x02, 0xe2, 0x7e, 0xcc, 0xf1, 0x06, 0xe9, 0xaf, 0x79, 0xd0, 0xde, 0x50, 0xbc, \
  0x1a, 0x35, 0x8f, 0x03, 0x48, 0x88\
}
#define TYPE_MAP_CDR_SZ_custom_data_256_t 230u
const dds_topic_descriptor_t custom_data_256_t_desc =
{
  .m_size = sizeof (custom_data_256_t),
  .m_align = dds_alignof (custom_data_256_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "custom::data_256_t",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = custom_data_256_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_custom_data_256_t, .sz = TYPE_INFO_CDR_SZ_custom_data_256_t },
  .type_mapping = { .data = TYPE_MAP_CDR_custom_data_256_t, .sz = TYPE_MAP_CDR_SZ_custom_data_256_t }
};

static const uint32_t custom_data_512_t_ops [] =
{
  /* data_512_t */
  DDS_OP_ADR | DDS_OP_TYPE_ARR | DDS_OP_SUBTYPE_1BY | DDS_OP_FLAG_SGN, offsetof (custom_data_512_t, value), 512u,
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 3641140be7ecf977471744ad3e92] (#deps: 0)
  [COMPLETE c30164f11ca18e9a4a52de7c5eea] (#deps: 0)
*/
#define TYPE_INFO_CDR_custom_data_512_t (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x36, 0x41, 0x14, 0x0b, 0xe7, 0xec, 0xf9, 0x77, 0x47, 0x17, 0x44, \
  0xad, 0x3e, 0x92, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xc3, 0x01, 0x64, 0xf1, 0x1c, 0xa1, 0x8e, 0x9a, 0x4a, 0x52, 0xde, \
  0x7c, 0x5e, 0xea, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_custom_data_512_t 100u
#define TYPE_MAP_CDR_custom_data_512_t (const unsigned char []){ \
  0x49, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x36, 0x41, 0x14, 0x0b, 0xe7, 0xec, 0xf9, \
  0x77, 0x47, 0x17, 0x44, 0xad, 0x3e, 0x92, 0x00, 0x31, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x20, 0x63, 0xc1, 0x60, 0x00, 0x00, 0x00, \
  0x6c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xc3, 0x01, 0x64, 0xf1, 0x1c, 0xa1, 0x8e, \
  0x9a, 0x4a, 0x52, 0xde, 0x7c, 0x5e, 0xea, 0x00, 0x54, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x63, 0x75, 0x73, 0x74, \
  0x6f, 0x6d, 0x3a, 0x3a, 0x64, 0x61, 0x74, 0x61, 0x5f, 0x35, 0x31, 0x32, 0x5f, 0x74, 0x00, 0x00, \
  0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, \
  0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xc3, 0x01, 0x64, 0xf1, 0x1c, 0xa1, 0x8e, \
  0x9a, 0x4a, 0x52, 0xde, 0x7c, 0x5e, 0xea, 0xf1, 0x36, 0x41, 0x14, 0x0b, 0xe7, 0xec, 0xf9, 0x77, \
  0x47, 0x17, 0x44, 0xad, 0x3e, 0x92\
}
#define TYPE_MAP_CDR_SZ_custom_data_512_t 230u
const dds_topic_descriptor_t custom_data_512_t_desc =
{
  .m_size = sizeof (custom_data_512_t),
  .m_align = dds_alignof (custom_data_512_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "custom::data_512_t",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = custom_data_512_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_custom_data_512_t, .sz = TYPE_INFO_CDR_SZ_custom_data_512_t },
  .type_mapping = { .data = TYPE_MAP_CDR_custom_data_512_t, .sz = TYPE_MAP_CDR_SZ_custom_data_512_t }
};

static const uint32_t custom_data_1024_t_ops [] =
{
  /* data_1024_t */
  DDS_OP_ADR | DDS_OP_TYPE_ARR | DDS_OP_SUBTYPE_1BY | DDS_OP_FLAG_SGN, offsetof (custom_data_1024_t, value), 1024u,
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 41ce6b5720e78ca8a93ea0de6586] (#deps: 0)
  [COMPLETE b5600e19d1342fbc586e419fbefb] (#deps: 0)
*/
#define TYPE_INFO_CDR_custom_data_1024_t (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x41, 0xce, 0x6b, 0x57, 0x20, 0xe7, 0x8c, 0xa8, 0xa9, 0x3e, 0xa0, \
  0xde, 0x65, 0x86, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xb5, 0x60, 0x0e, 0x19, 0xd1, 0x34, 0x2f, 0xbc, 0x58, 0x6e, 0x41, \
  0x9f, 0xbe, 0xfb, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_custom_data_1024_t 100u
#define TYPE_MAP_CDR_custom_data_1024_t (const unsigned char []){ \
  0x49, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x41, 0xce, 0x6b, 0x57, 0x20, 0xe7, 0x8c, \
  0xa8, 0xa9, 0x3e, 0xa0, 0xde, 0x65, 0x86, 0x00, 0x31, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x10, 0x20, 0x63, 0xc1, 0x60, 0x00, 0x00, 0x00, \
  0x6c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xb5, 0x60, 0x0e, 0x19, 0xd1, 0x34, 0x2f, \
  0xbc, 0x58, 0x6e, 0x41, 0x9f, 0xbe, 0xfb, 0x00, 0x54, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x63, 0x75, 0x73, 0x74, \
  0x6f, 0x6d, 0x3a, 0x3a, 0x64, 0x61, 0x74, 0x61, 0x5f, 0x31, 0x30, 0x32, 0x34, 0x5f, 0x74, 0x00, \
  0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, \
  0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xb5, 0x60, 0x0e, 0x19, 0xd1, 0x34, 0x2f, \
  0xbc, 0x58, 0x6e, 0x41, 0x9f, 0xbe, 0xfb, 0xf1, 0x41, 0xce, 0x6b, 0x57, 0x20, 0xe7, 0x8c, 0xa8, \
  0xa9, 0x3e, 0xa0, 0xde, 0x65, 0x86\
}
#define TYPE_MAP_CDR_SZ_custom_data_1024_t 230u
const dds_topic_descriptor_t custom_data_1024_t_desc =
{
  .m_size = sizeof (custom_data_1024_t),
  .m_align = dds_alignof (custom_data_1024_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "custom::data_1024_t",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = custom_data_1024_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_custom_data_1024_t, .sz = TYPE_INFO_CDR_SZ_custom_data_1024_t },
  .type_mapping = { .data = TYPE_MAP_CDR_custom_data_1024_t, .sz = TYPE_MAP_CDR_SZ_custom_data_1024_t }
};

static const uint32_t custom_data_10K_t_ops [] =
{
  /* data_10K_t */
  DDS_OP_ADR | DDS_OP_TYPE_ARR | DDS_OP_SUBTYPE_1BY | DDS_OP_FLAG_SGN, offsetof (custom_data_10K_t, value), 10240u,
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL d9efa137a324f5cbcf9f684b7a02] (#deps: 0)
  [COMPLETE e1fea5c514b8fb96189bb0a9de3c] (#deps: 0)
*/
#define TYPE_INFO_CDR_custom_data_10K_t (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0xd9, 0xef, 0xa1, 0x37, 0xa3, 0x24, 0xf5, 0xcb, 0xcf, 0x9f, 0x68, \
  0x4b, 0x7a, 0x02, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xe1, 0xfe, 0xa5, 0xc5, 0x14, 0xb8, 0xfb, 0x96, 0x18, 0x9b, 0xb0, \
  0xa9, 0xde, 0x3c, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_custom_data_10K_t 100u
#define TYPE_MAP_CDR_custom_data_10K_t (const unsigned char []){ \
  0x49, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0xd9, 0xef, 0xa1, 0x37, 0xa3, 0x24, 0xf5, \
  0xcb, 0xcf, 0x9f, 0x68, 0x4b, 0x7a, 0x02, 0x00, 0x31, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x10, 0x20, 0x63, 0xc1, 0x60, 0x00, 0x00, 0x00, \
  0x6c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xe1, 0xfe, 0xa5, 0xc5, 0x14, 0xb8, 0xfb, \
  0x96, 0x18, 0x9b, 0xb0, 0xa9, 0xde, 0x3c, 0x00, 0x54, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x63, 0x75, 0x73, 0x74, \
  0x6f, 0x6d, 0x3a, 0x3a, 0x64, 0x61, 0x74, 0x61, 0x5f, 0x31, 0x30, 0x4b, 0x5f, 0x74, 0x00, 0x00, \
  0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, \
  0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xe1, 0xfe, 0xa5, 0xc5, 0x14, 0xb8, 0xfb, \
  0x96, 0x18, 0x9b, 0xb0, 0xa9, 0xde, 0x3c, 0xf1, 0xd9, 0xef, 0xa1, 0x37, 0xa3, 0x24, 0xf5, 0xcb, \
  0xcf, 0x9f, 0x68, 0x4b, 0x7a, 0x02\
}
#define TYPE_MAP_CDR_SZ_custom_data_10K_t 230u
const dds_topic_descriptor_t custom_data_10K_t_desc =
{
  .m_size = sizeof (custom_data_10K_t),
  .m_align = dds_alignof (custom_data_10K_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "custom::data_10K_t",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = custom_data_10K_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_custom_data_10K_t, .sz = TYPE_INFO_CDR_SZ_custom_data_10K_t },
  .type_mapping = { .data = TYPE_MAP_CDR_custom_data_10K_t, .sz = TYPE_MAP_CDR_SZ_custom_data_10K_t }
};

static const uint32_t custom_data_1M_t_ops [] =
{
  /* data_1M_t */
  DDS_OP_ADR | DDS_OP_TYPE_ARR | DDS_OP_SUBTYPE_1BY | DDS_OP_FLAG_SGN, offsetof (custom_data_1M_t, value), 1048576u,
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 6b4c43210d2a0f2a373d6838e199] (#deps: 0)
  [COMPLETE c2d0242b904d8bbe9f4f3f878d68] (#deps: 0)
*/
#define TYPE_INFO_CDR_custom_data_1M_t (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x6b, 0x4c, 0x43, 0x21, 0x0d, 0x2a, 0x0f, 0x2a, 0x37, 0x3d, 0x68, \
  0x38, 0xe1, 0x99, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xc2, 0xd0, 0x24, 0x2b, 0x90, 0x4d, 0x8b, 0xbe, 0x9f, 0x4f, 0x3f, \
  0x87, 0x8d, 0x68, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_custom_data_1M_t 100u
#define TYPE_MAP_CDR_custom_data_1M_t (const unsigned char []){ \
  0x49, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x6b, 0x4c, 0x43, 0x21, 0x0d, 0x2a, 0x0f, \
  0x2a, 0x37, 0x3d, 0x68, 0x38, 0xe1, 0x99, 0x00, 0x31, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x20, 0x63, 0xc1, 0x60, 0x00, 0x00, 0x00, \
  0x6c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xc2, 0xd0, 0x24, 0x2b, 0x90, 0x4d, 0x8b, \
  0xbe, 0x9f, 0x4f, 0x3f, 0x87, 0x8d, 0x68, 0x00, 0x54, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x63, 0x75, 0x73, 0x74, \
  0x6f, 0x6d, 0x3a, 0x3a, 0x64, 0x61, 0x74, 0x61, 0x5f, 0x31, 0x4d, 0x5f, 0x74, 0x00, 0x00, 0x00, \
  0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x91, 0xf3, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, \
  0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xc2, 0xd0, 0x24, 0x2b, 0x90, 0x4d, 0x8b, \
  0xbe, 0x9f, 0x4f, 0x3f, 0x87, 0x8d, 0x68, 0xf1, 0x6b, 0x4c, 0x43, 0x21, 0x0d, 0x2a, 0x0f, 0x2a, \
  0x37, 0x3d, 0x68, 0x38, 0xe1, 0x99\
}
#define TYPE_MAP_CDR_SZ_custom_data_1M_t 230u
const dds_topic_descriptor_t custom_data_1M_t_desc =
{
  .m_size = sizeof (custom_data_1M_t),
  .m_align = dds_alignof (custom_data_1M_t),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "custom::data_1M_t",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = custom_data_1M_t_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_custom_data_1M_t, .sz = TYPE_INFO_CDR_SZ_custom_data_1M_t },
  .type_mapping = { .data = TYPE_MAP_CDR_custom_data_1M_t, .sz = TYPE_MAP_CDR_SZ_custom_data_1M_t }
};

