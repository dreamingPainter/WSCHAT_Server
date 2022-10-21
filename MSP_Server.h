#ifndef _MSP_SERVER_
#define _MSP_SERVER_
#define MSG_SEND_VERS       'B' /* �汾�� */
#define MSG_SEND_PORT       18  /* ��Ϣ����Э��Ĭ�϶˿�*/
#define MSG_BUF_SIZE       512  /* �������Ĵ�С        */
/* ��������ֵ */
#define MSG_SUCCESS         0
#define MSG_VERSION_ERR    -1
#define MSG_FIELD_ERR      -2
/* ������Ϣ�ֶε�ö��ֵ */
// �����ӿͻ��˽��յ�����Ϣʱ
//��Э������ֶε���Ϣ���浽ö��ֵ��Ӧ������Ԫ����
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
