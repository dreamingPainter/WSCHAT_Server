#ifndef _MSP_SERVER_
#define _MSP_SERVER_
#define MSG_SEND_VERS       'B' /* 版本号 */
#define MSG_SEND_PORT       18  /* 消息发送协议默认端口*/
#define MSG_BUF_SIZE       512  /* 缓冲区的大小        */
/* 函数返回值 */
#define MSG_SUCCESS         0
#define MSG_VERSION_ERR    -1
#define MSG_FIELD_ERR      -2
/* 定义消息字段的枚举值 */
// 解析从客户端接收到的消息时
//把协议各个字段的信息保存到枚举值对应的数组元素中
enum msp_field
{
    MSP_VERSION,
    MSP_RECIP,
    MSP_RECIP_TERM,
    MSP_MESSAGE,
    MSP_SENDER,
    MSP_SEND_TERM,
    MSP_COOKIE,
    MSP_SIGNAT,
    MSP_TOTAL
};

struct field_name
{
    enum msp_field field;
    char* name;
};
#endif /* _MSP_SERVER_ */
