/*! 
*  @file ss_error.h
*  @brief     SS��������������,32λ,����ͳһ�������ʽ�����һ�ֽ���ģ���ʶ��
*  @details   ����SS��LM��H5��IPC��NetAgent��SSprotect�ȴ���ֵ��������ߵ�һ�ֽ��Ǵ���ģ���ʶ��������ģ���Զ���
*             
*  @version   2.1.0
*  @date      2013-2015
*  @pre       ��ǰ�������д���ֵ
*/
#ifndef __SS_ERROR_H__
#define __SS_ERROR_H__


//============================================================
//                  ģ���
//============================================================

#define MODE_H5_RUNTIME             0x01    //  H5 API�������
#define MODE_IPC                    0x02    //  IPC ģ�����
#define MODE_SYSTEM                 0x04    //  ϵͳ����
#define MODE_SS                     0x05    //  SS ģ��
#define MODE_NETAGENT               0x11    //  NetAgentģ��
#define MODE_SSPROTECT              0x12    //  SSPROTECT ģ�����
#define MODE_LM_API                 0x13    //  LM ģ��(runtime, develop, control)
#define MODE_LM_FIRM                0x22    //  LM �̼�ģ��
#define MODE_LM_SES                 0x23    //  LM SES�����
#define MODE_LM_SERVICE             0x24    //  LM SERVICEģ��
#define MODE_LIC_TRANS              0x28    //  ���ת��ģ��
#define MODE_AUTH_SERVER            0x29    //  Auth Serverģ��
#define MODE_CLOUD                  0x30    //  ����ģ��
#define MODE_SO                     0x51    //  ����ģ��
#define MODE_UM						0x60	//	�û�����ģ��

//============================================================
//              һ�������
//============================================================

#define SS_OK                                       0x00000000  //  �ɹ�
#define SS_ERROR                                    0x00000001  //  ����ԭ��δ֪ */ // TODO(zhaock) : Ӧ��ȥ
#define SS_ERROR_INVALID_PARAM                      0x00000002  //  ���Ϸ��Ĳ���
#define SS_ERROR_MEMORY_FAIELD                      0x00000003  //  �ڴ����
#define SS_ERROR_INSUFFICIENT_BUFFER                0x00000004  //  ��������С����
#define SS_ERROR_NOT_FOUND                          0x00000005  //  û�ҵ�Ŀ��
#define SS_ERROR_EXISTED                            0x00000006  //  Ŀ���Ѵ���
#define SS_ERROR_DATA_BROKEN                        0x00000007  //  ������
#define SS_ERROR_INVALID_HANDLE                     0x00000008  //  ��Ч�ľ��
#define SS_ERROR_TIMEOUT                            0x00000009  //  ������ʱ
#define SS_ERROR_TARGET_NOT_IN_USE                  0x0000000A  //  Ŀ��δ��ʹ��״̬����Ŀ��ģ��δ�������ѹر�
#define SS_ERROR_DATA_CONFLICT                      0X0000000B  //  �����ݵ�����ͬʱ����
#define SS_ERROR_INVALID_TYPE                       0x0000000C  //  ��Ч����
#define SS_ERROR_INVALID_LENGTH                     0x0000000D  //  ��Ч����
#define SS_ERROR_USER_MOD_CRASH                     0x0000000E  //  �û�ģ���ͻ
#define SS_ERROR_SERVER_IS_LOCAL                    0x0000000F  //  ���ҵ�SS�Ǳ���
#define SS_ERROR_UNSUPPORT                          0x00000010  //  ��֧�ֵĲ���
#define SS_ERROR_PORT_IN_USE                        0x00000011  //  �˿�ռ��
#define SS_ERROR_NO_KEY                             0x00000013  //  û����Կ
#define SS_ERROR_SERVICE_TYPE_NOT_SUPPORT           0x00000014  //  �������Ͳ�֧�ֲ���
#define SS_ERROR_MULTICAST_ADDR_IN_USE              0x00000015  //  �ಥ��ַռ��
#define SS_ERROR_MULTICAST_PORT_IN_USE              0x00000016  //  �ಥ�˿�ռ��
#define SS_ERROR_MOD_FAIL_LIBSTRING                 0x00000020  //  libstring����
#define SS_ERROR_NET_ERROR                          0x00000040  //  �������
#define SS_ERROR_IPC_ERROR                          0x00000041  //  IPC ����
#define SS_ERROR_INVALID_SESSION                    0x00000042  //  �ỰʧЧ
#define SS_ERROR_GTR_MAX_SERVER_COUNT               0x00000043  //  ����֧�ַ���������
#define SS_ERROR_MASTER_UNSUPPORT_PIN               0x00000044  //  ��������֧��PIN�빦�ܣ�����������˼��������¿�����
#define SS_ERROR_MASTER_PIN_NOT_ACTIVE              0x00000045  //  ������PIN��û�м�����޸ĳ�ʼPIN��
#define SS_ERROR_MASTER_NO_SUCH_PIN                 0x00000046  //  PIN�벻���ڣ�����PIN�������Ƿ����
#define SS_ERROR_MASTER_OUTDATED_VERSION            0x00000047  //  �������汾̫�ͣ��������������
#define SS_ERROR_MASTER_PIN_WRONG                   0x00000048  //  ������PIN�����
#define SS_ERROR_MASTER_PIN_BLOCKED                 0x00000049  //  ������PIN�뱻����
#define SS_ERROR_NET_TIMEOUT                        0x0000004A  //  �������


//============================================================
//              SS ģ�� (0x05)
//============================================================

#define SS_ERROR_MOD_INIT_FAIL                      0x05000000  //  ģ���ʼ��ʧ��
#define SS_ERROR_BOUND_EXCEEDED                     0x05000001  //  ����Խ��
#define SS_ERROR_REACH_LIMIT                        0x05000002  //  �ﵽ��Ϊ����
#define SS_ERROR_IGNORE                             0x05000003  //  ��������
#define SS_ERROR_SERVER_NOT_FOUND                   0x05000004  //  �Ҳ���������
#define SS_ERROR_NO_LOCK                            0x05000005  //  �Ҳ�����
#define SS_ERROR_SLM_HANDLE_IS_FULL                 0x05000006  //  LM ����Ѵﵽ����
#define SS_ERROR_REG_NOT_FOUND                      0x05000007  //  ע�����δ�ҵ�
#define SS_ERROR_REG_ACCESS_DENIED                  0x05000008  //  ע����޷���Ȩ��
#define SS_ERROR_REG_INVALID_VALUE                  0x05000009  //  ע�����Чֵ
#define SS_ERROR_FORMAT_NOT_SUPPORTED               0x0500000A  //  ��֧�ֵĸ�ʽ
#define SS_ERROR_CONFIG_FILE_NOT_FOUND              0x0500000B  //  δ�ҵ������ļ�
#define SS_ERROR_CONFIG_PARSE_ERROR                 0x0500000C  //  �����ļ���������
#define SS_ERROR_SYSTEM_ERROR                       0x0500000D  //  ϵͳ����ʧ��
#define SS_ERROR_CREATE_THREAD_ERROR                0x0500000E  //  �����߳�ʧ��
#define SS_ERROR_SSRP_DATA_BROKEN                   0x0500000F  //  SS��Ϣ������
#define SS_ERROR_SSRP_WRONG_VERSION                 0x05000010  //  SS��Ϣ�汾��֧��
#define SS_ERROR_SSRP_INVALID_TYPE                  0x05000012  //  SS��Ϣ�������Ͳ�֧��
#define SS_ERROR_WHITELISTED                        0x05000013  //  ����������
#define SS_ERROR_BLACKLISTED                        0x05000014  //  ����������
#define SS_ERROR_FILE_ACCESS_DENIED                 0x05000015  //  �޷������ļ�
#define SS_ERROR_DEVICE_NOT_FOUND                   0x05000016  //  û�з����豸
#define SS_ERROR_DEVICE_FAIL_TO_OPEN                0x05000017  //  ���豸ʧ��
#define SS_ERROR_MSG_BAD_PACKAGE                    0x05000018  //  SS��Ϣ������
#define SS_ERROR_MSG_INVALID_TYPE                   0x05000019  //  SS��Ϣ��������Ч
//#define SS_ERROR_SERVICE_INSTALL_ERROR              0x0500001A  //  ����װ����
//#define SS_ERROR_SERVICE_UNINSTALL_ERROR            0x0500001B  //  ����ж�ش���
//#define SS_ERROR_SERVICE_START_ERROR                0x0500001C  //  ������������
//#define SS_ERROR_SERVICE_STOP_ERROR                 0x0500001D  //  ����ֹͣ����
//#define SS_ERROR_SERVICE_QUERY_ERROR                0x0500001E  //  �����ѯ����
#define SS_ERROR_LOCK_NOT_FOUND                     0x0500001F  //  ��û���ҵ�
#define SS_ERROR_NO_SESSION_KEY_ERROR               0x05000020  //  û�лỰ��Կ
#define SS_ERROR_ENCRYPT_ERROR                      0x05000021  //  ���ܴ���
#define SS_ERROR_DECRYPT_ERROR                      0x05000022  //  ���ܴ���
#define SS_ERROR_DEVELOPER_NOT_FOUND                0x05000023  //  δ�ҵ�������
#define SS_ERROR_NET_PORT_BIND_ERROR                0X05000030  //  �˿ڱ�ռ��
#define SS_ERROR_BROADCAST_INIT_ERROR               0X05000031  //  �㲥ģ���ʼ������
#define SS_ERROR_BROADCAST_JOB_ERROR                0X05000030  //  �㲥ģ�����ʧ��
#define SS_ERROR_TASK_PENDING                       0x05000041  //  ��������ִ��
#define SS_ERROR_TASK_FAIL                          0x05000042  //  ����ִ��ʧ��
#define SS_ERROR_TASK_CANCELLING                    0x05000043  //  ��������ȡ��
#define SS_ERROR_TASK_CANCELLED                     0x05000044  //  ������ȡ��
#define SS_ERROR_CLOUD_AUTH                         0x05000045  //  ��֤����ʧ��
#define SS_ERROR_HTTP_RESPONSE                      0x05000046  //  Http��Ӧ����

//============================================================
//          LM ģ��(0x20): (runtime, control, develop)
//============================================================

#define SS_ERROR_D2C_NO_PACKAGE                     0x13000000  //  D2C������ǩ������
#define SS_ERROR_DEVELOPER_CERT_ALREADY_EXIST       0x13000001  //  ������֤���Ѵ���
#define SS_ERROR_PARSE_CERT                         0x13000003  //  ����֤�����
#define SS_ERROR_D2C_PACKAGE_TOO_LARGE              0x13000004  //  D2C������
#define SS_ERROR_RESPONSE                           0x13000005  //  �����������Ӧ
#define SS_ERROR_SEND_LM_REMOTE_REQUEST             0x13000006  //  ����LMԶ������ʧ��
#define SS_ERROR_RUNTIME_NOT_INITIALIZE             0x13000007  //  δ����Runtime��ʼ������
#define SS_ERROR_BAD_CONNECT                        0x13000008  //  ��ȡ����ʧ��
#define SS_ERROR_RUNTIME_VERSION                    0x13000009  //  Runtime�� �汾��ƥ��
#define SS_ERROR_LIC_NOT_FOUND                      0x13000020  //  ���δ�ҵ�
#define SS_ERROR_AUTH_ACCEPT_FAILED                 0x13000021  //  ��֤����
#define SS_ERROR_AUTH_HANDLE_FAILED                 0x13000022  //  ��֤ʧ��
#define SS_ERROR_DECODE_BUFFER                      0x13000023  //  ���ܴ���
#define SS_ERROR_USER_DATA_TOO_SMALL                0x13000024  //  �û�������̫С
#define SS_ERROR_INVALID_LM_REQUEST                 0x13000025  //  ��Ч��LM����
#define SS_ERROR_INVALID_SHORTCODE                  0x13000026  //  ��Ч�Ķ���
#define SS_ERROR_INVALID_D2C_PACKAGE                0x13000027  //  �����D2C������
#define SS_ERROR_CLOUD_RESPONSE                     0x13000028  //  �������ص����ݴ���
#define SS_ERROR_USER_DATA_TOO_LARGE                0x13000029  //  ��д�����ݹ���
#define SS_ERROR_INVALID_MEMORY_ID                  0x1300002A  //  ��Ч���ڴ�ID
#define SS_ERROR_INVALID_MEMORY_OFFSET              0x1300002B  //  ��Ч���ڴ�ƫ��
#define SS_ERROR_INVALID_CLOUD_SERVER               0x1300002C  //  ��Ч������������
#define SS_ERROR_UNCALIBRATED_TIMESTAMP             0x1300002D  //  ʱ���δУ׼
#define SS_ERROR_GENERATE_GUID                      0x1300002F  //  ����GUID����
#define SS_ERROR_NO_LOGGED_USER                     0x13000030  //  û�е�¼���û�
#define SS_ERROR_USER_AUTH_SERVER_NOT_RUNNING       0x13000031  //  �û���֤����δ����
#define SS_ERROR_UNSUPPORTED_SNIPPET_CODE           0x13000033  //  ��֧�ֵĴ���Ƭ
#define SS_ERROR_INVALID_SNIPPET_CODE               0x13000034  //  ��Ч�Ĵ���
#define SS_ERROR_EXECUTE_SNIPPET_CODE               0x13000035  //  ִ����Ƭ����ʧ��
#define SS_ERROR_SNIPPET_EXECUTE_LOGIN              0x13000036  //  ��Ƭִ�е�¼ʧ��
#define SS_ERROR_LICENSE_MODULE_NOT_EXISTS          0x13000037  //  ���ģ�鲻����
#define SS_ERROR_DEVELOPER_PASSWORD                 0x13000038  //  ����Ŀ���������
#define SS_ERROR_CALLBACK_VERSION                   0x13000039  //  ����ĳ�ʼ���ص��汾��
#define SS_ERROR_INFO_RELOGIN                       0x1300003A  //  �û������µ�¼
#define SS_ERROR_LICENSE_VERIFY                     0x1300003B  //  ���������ǩʧ��
#define SS_ERROR_REFRESH_TOKEN_TIMEOUT              0x1300003C  //  ����ˢ��token��ʱ
#define SS_ERROR_TOKEN_VERIFY_FAIL                  0x1300003D  //  token��֤ʧ��
#define SS_ERROR_GET_TOKEN_FAIL                     0x1300003E  //  token��ȡʧ��
#define SS_ERROR_NEED_WAIT                          0x13000044  //  �ڲ�����
#define SS_ERROR_LICENSE_NEED_TO_ACTIVATE           0x13000051  //  ���������Ҫ��������
#define SS_ERROR_DATA_NOT_END                       0x13000052  //  �ڲ���������δ�������

//============================================================
//              IPC ģ�� (0x02)
//============================================================

#define SS_ERROR_BAD_ADDR                           0x02000000  //  ����ĵ�ַ
#define SS_ERROR_BAD_NAME                           0x02000001  //  ���������
#define SS_ERROR_IPC_FAILED                         0x02000002  //  IPC �շ�����
#define SS_ERROR_IPC_CONNECT_FAILED                 0x02000003  //  ����ʧ�ܣ������� Virbox ��ɷ���δ����
#define SS_ERROR_IPC_AUTH_INITIALIZE                0x02000004  //  Authʧ��
#define SS_ERROR_IPC_QUERY_STATE                    0x02000005  //  ��ѯVirbox��ɷ���״̬ʧ��
#define SS_ERROR_SERVICE_NOT_RUNNING                0x02000006  //  Virbox��ɷ���δ����
#define SS_ERROR_IPC_DISCONNECT_FAILED              0x02000007  //  �Ͽ�����ʧ��
#define SS_ERROR_IPC_BUILD_SESSION_KEY              0x02000008  //  �Ự��ԿЭ��ʧ��
#define SS_ERROR_REQUEST_OUTPUT_BUFFER_TOO_LARGE    0x02000009  //  �������󻺳�������
#define SS_ERROR_IPC_AUTH_ENCODE                    0x0200000A  //  Auth encode����
#define SS_ERROR_IPC_AUTH_DECODE                    0x0200000B  //  Auth decode����
#define SS_ERROR_IPC_INIT_FAILED                    0x0200000C  //  IPC ��ʼ��ʧ��
#define SS_ERROR_IPC_EXCHANGE_CERT                  0x0200000D  //  ����֤��ʧ�ܣ�һ����Ϊ֤�����������Դ���

//============================================================
//              Net Agent ģ�� (0x11)
//============================================================




//============================================================
//              ��ȫģ�� (0x12)
//============================================================

#define SS_ERROR_INIT_ANTIDEBUG                     0x12000005
#define SS_ERROR_DEBUG_FOUNDED                      0x12000006



//============================================================
//              LM Service (0x24)
//============================================================

#define ERROR_LM_SVC_UNINTIALIZED                   0x24000001  //  δ��ʼ�� service�еı���
#define ERROR_LM_SVC_INITIALIZING                   0x24000002  //  ���ڳ�ʼ��service��
#define ERROR_LM_SVC_INVALID_SESSION_INFO_SIZE      0x24000003  //  ����session ��С����ȷ
#define ERROR_LM_SVC_KEEP_ALIVE_FAILED              0x24000004  //  δ֪��keep alive ����ʧ��ԭ�� 
#define ERROR_LM_SVC_LICENSE_NOT_FOUND              0x24000005  //  ������û���ҵ���Ӧ���
#define ERROR_LM_SVC_SESSION_ALREADY_LOGOUT         0x24000006  //  session�Ѿ��˳� 
#define ERROR_LM_SVC_SESSION_ID_NOT_FOUND           0x24000007  //  �����ڸ�session id
#define ERROR_LM_SVC_DEBUGGED                       0x24000008  //  �������������
#define ERROR_LM_SVC_INVALID_DESCRIPTION            0x24000009  //  ��Ч�����������Ϣ
#define ERROR_LM_SVC_HANDLE_NOT_FOUND               0x2400000A  //  �Ҳ���ָ�����
#define ERROR_LM_SVC_CACHE_OVERFLOW                 0x2400000B  //  cache ��������
#define ERROR_LM_SVC_SESSION_OVERFLOW               0x2400000C  //  session ��������
#define ERROR_LM_SVC_INVALID_SESSION                0x2400000D  //  ��Ч��session
#define ERROR_LM_SVC_SESSION_ALREADY_DELETED        0x2400000E  //  session �Ѿ���ɾ��
#define ERROR_LM_SVC_LICENCE_EXPIRED                0x2400000F  //  ����Ѿ�����
#define ERROR_LM_SVC_SESSION_TIME_OUT               0x24000010  //  session��ʱ
#define ERROR_LM_SVC_NOT_ENOUGH_BUFF                0x24000011  //  ��������С����
#define ERROR_LM_SVC_DESC_NOT_FOUND                 0x24000012  //  û�ҵ����豸����
#define ERROR_LM_INVALID_PARAMETER                  0x24000013  //  LM service��������
#define ERROR_LM_INVALID_LOCK_TYPE                  0x24000014  //	�����Ͳ�֧��
#define ERROR_LM_REMOTE_LOGIN_DENIED                0x24000015  //  ��ɲ�����Զ�̵�¼
#define ERROR_LM_SVC_SESSION_INVALID_AUTHCODE       0x24000016  //  session��֤ʧ��
#define ERROR_LM_SVC_ACCOUNT_NOT_BOUND              0x24000017  //  �˻�δ��
#define ERROR_LM_USER_NOT_EXISTS                    0x24000018  //  �û�������


//============================================================
//              LM Native (0x21)
//============================================================

#define SS_ERROR_UNSUPPORTED_ALGORITHM              0x21000000  //  ��֧�ֵ��㷨����
#define SS_ERROR_INVAILD_HLC_HANDLE                 0x21000001  //  ��Ч��HLC���
#define SS_ERROR_HLC_CHECK                          0x21000002  //  HLC���ʧ��
#define SS_ERROR_LM_CHECK_READ                      0x21000003  //  ����־λ���ʧ��
#define SS_ERROR_LM_CHECK_LICENSE                   0x21000004  //  ������������ID��ƥ��
#define SS_ERROR_LM_CHECKSUM                        0x21000005  //  ���������У��ʧ��
#define SS_ERROR_HLC_BUFFER_LEN                     0x21000006  //  HLC���ݼ��ܴ������Ļ�����
#define SS_ERROR_L2CWF_LEN                          0x21000007  //  ��Ч�ļ��ܳ���
#define SS_ERROR_INVAILD_MAX_ENCRYPT_LENGTH         0x21000008  //  ��Ч�ļ��ܳ���
#define SS_ERROR_INVAILD_ENUM_CRYPT_TYPE            0x21000009  //  ��֧�ֵļ�������
#define SS_ERROR_NATIVE_INSUFFICIENT_BUFFER         0x2100000A  //  ����������
#define SS_ERROR_NATIVE_LIST_FILE_FAILED            0x2100000B  //  ö�������ļ�����
#define SS_ERROR_INVALID_C2H_REQUEST                0x2100000C  //  ��Ч��������Ӳ��������

//============================================================
//              LM Firmware (0x22)
//============================================================

#define SS_ERROR_FIRM_INVALID_FILE_NAME             0x22000001  // �ļ�������Ч
#define SS_ERROR_FIRM_CHECK_BUFF_FAILED             0x22000002  // ����У��ʧ��
#define SS_ERROR_FIRM_INVALID_BUFF_LEN              0x22000003  // �������ݳ��ȴ���
#define SS_ERROR_FIRM_INVALID_PARAM                 0x22000004  // ��������
#define SS_ERROR_FIRM_INVALID_SESSION_INFO          0x22000005  // session ��Ϣ����
#define SS_ERROR_FIRM_INVALID_FILE_SIZE             0x22000006  // �����ļ����ȳ���
#define SS_ERROR_FIRM_WRITE_FILE_FAILED             0x22000007  // д���ļ����ݳ���
#define SS_ERROR_FIRM_INVALID_LICENCE_HEADER        0x22000008  // �����Ϣͷ������
#define SS_ERROR_FIRM_INVALID_LICENCE_SIZE          0x22000009  // �����Ϣ���ݴ���
#define SS_ERROR_FIRM_INVALID_LICENCE_INDEX         0x2200000A  // ����֧�����������
#define SS_ERROR_FIRM_LIC_NOT_FOUND                 0x2200000B  // û���ҵ���Ӧ�����
#define SS_ERROR_FIRM_MEM_STATUS_INVALID            0x2200000C  // �ڴ�״̬����δ��ʼ��
#define SS_ERROR_FIRM_INVALID_LIC_ID                0x2200000D  // �����õ���ɺ�
#define SS_ERROR_FIRM_LICENCE_ALL_DISABLED          0x2200000E  // ������ɱ�����
#define SS_ERROR_FIRM_CUR_LICENCE_DISABLED          0x2200000F  // ��ǰ��ɱ�����
#define SS_ERROR_FIRM_LICENCE_INVALID               0x22000010  // ��ǰ��ɲ�����
#define SS_ERROR_FIRM_LIC_STILL_UNAVALIABLE         0x22000011  // ����в�����
#define SS_ERROR_FIRM_LIC_TERMINATED                0x22000012  // ����Ѿ�����
#define SS_ERROR_FIRM_LIC_RUNTIME_TIME_OUT          0x22000013  // ����ʱ���þ�
#define SS_ERROR_FIRM_LIC_COUNTER_IS_ZERO           0x22000014  // �����þ�
#define SS_ERROR_FIRM_LIC_MAX_CONNECTION            0x22000015  // �Ѵﵽ��󲢷���Ȩ
#define SS_ERROR_FIRM_INVALID_LOGIN_COUNTER         0x22000016  // ����ȷ�ĵ�¼����
#define SS_ERROR_FIRM_REACHED_MAX_SESSION           0x22000017  // �����Ѿ��������Ự����
#define SS_ERROR_FIRM_INVALID_TIME_INFO             0x22000018  // ͨѶʱ����Ϣ����
#define SS_ERROR_FIRM_SESSION_SIZE_DISMATCH         0x22000019  // session ��Ϣ��С��ƥ��
#define SS_ERROR_FIRM_NOT_ENOUGH_SHAREMEMORY        0x2200001A  // û���㹻�Ĺ����ڴ�
#define SS_ERROR_FIRM_INVALID_OPCODE                0x2200001B  // �����õĲ�����
#define SS_ERROR_FIRM_INVALID_DATA_LEN              0x2200001C  // ����������ļ�����    
#define SS_ERROR_FIRM_DATA_FILE_NOT_FOUND           0x2200001E  // �Ҳ�����Ӧ����������ļ�
#define SS_ERROR_FIRM_INVALID_PKG_TYPE              0x2200001F  // Զ�����������ʹ���
#define SS_ERROR_FIRM_INVALID_TIME_STAMP            0x22000020  // ʱ��������Զ��������
#define SS_ERROR_FIRM_INVALID_UPD_LIC_ID            0x22000021  // �����Զ������������
#define SS_ERROR_FIRM_LIC_ALREADY_EXIST             0x22000022  // ��ӵ�����Ѿ�����
#define SS_ERROR_FIRM_LICENCE_SIZE_LIMITTED         0x22000023  // �����������
#define SS_ERROR_FIRM_INVALID_DATA_FILE_OFFSET      0x22000024  // ��Ч����������ļ�ƫ��
#define SS_ERROR_FIRM_ZERO_INDEX_LIC_DESTROY        0x22000025  // ��������
#define SS_ERROR_FIRM_LIC_ALREADY_DISABLED          0x22000026  // ���ԭ�Ѿ�����ֹ
#define SS_ERROR_FIRM_INVALID_UPD_OPCODE            0x22000027  // ��Ч��Զ������������
#define SS_ERROR_FIRM_LIC_ALREADY_ENABLED           0x22000028  // ����Ѿ���Ч
#define SS_ERROR_FIRM_INVALID_PKG_SIZE              0x22000029  // Զ�����������Ȳ���ȷ
#define SS_ERROR_FIRM_LIC_COUNT_RETURN              0x2200002A  // �����˴������ɼ���
#define SS_ERROR_FIRM_INVALID_OPERATION             0x2200002B  // ִ���˲���ȷ�Ĳ���
#define SS_ERROR_FIRM_SESSION_ALREADY_LOGOUT        0x2200002C  // session�Ѿ��˳���¼
#define SS_ERROR_FIRM_EXCHANGE_KEY_TIMEOUT          0x2200002D  // ������Կ��ʱ
#define SS_ERROR_FIRM_INVALID_EXCHANGE_KEY_MAGIC    0x2200002E  // ����Ľ�����Կħ��
#define SS_ERROR_FIRM_INVALID_AUTH_CODE             0x2200002F  // ��֤���ݴ���
#define SS_ERROR_FIRM_CONVERT_INDEX_TO_FILE         0x22000030  // ת��lic��ŵ��ļ�����ʧ��
#define SS_ERROR_FIRM_INVALID_USER_DATA_TYPE        0x22000031  // �û��Զ����ֶ����ʹ���
#define SS_ERROR_FIRM_INVALID_DATA_FILE_SIZE        0x22000032  // �û��Զ����������
#define SS_ERROR_FIRM_INVALID_CCRNT_OPR_TYPE        0x22000033  // ����Ĳ���������������
#define SS_ERROR_FIRM_ALL_LIC_TERMINATED            0x22000034  // �������ʱ�䵽�ڲ�����
#define SS_ERROR_FIRM_INVALID_CCRNT_VALUE           0x22000035  // ����Ĳ�������
#define SS_ERROR_FIRM_INVALID_UPD_FILE              0x22000036  // �����õ�ɾ����ʷ��¼�ļ�
#define SS_ERROR_FIRM_UPD_RECORD_FULL               0x22000037  // ���¼�¼�ﵽ���ֵ
#define SS_ERROR_FIRM_UPDATE_FAILED                 0x22000038  // Զ������ʧ��
#define SS_ERROR_FIRM_LICENSE_BEING_WRITTING        0x22000039  // ��������ڱ�д��
#define SS_ERROR_FIRM_INVALID_PKG_FIELD_TYPE        0x2200003A  // �����������ʹ���
#define SS_ERROR_FIRM_LOAT_FSM_SALT                 0x2200003B  // ������ֵ�ļ�����
#define SS_ERROR_FIRM_DATA_LENGTH_ALIGNMENT         0x2200003C  // �ӽ������ݳ��Ȳ�����
#define SS_ERROR_FIRM_DATA_CRYPTION                 0x2200003D  // �ӽ������ݴ���
#define SS_ERROR_FIRM_SHORTCODE_UPDATE_NOT_SUPPORTED    0x2200003E  // ��֧�ֶ�������
#define SS_ERROR_FIRM_INVALID_SHORTCODE             0x2200003F  // �����õĶ���
#define SS_ERROR_FIRM_LIC_USR_DATA_NOT_EXIST        0x22000040  // �û��Զ������ݲ�����
#define SS_ERROR_FIRM_RCD_FILE_NOT_INITIALIZED      0x22000041  // ɾ����¼�ļ�δ��ʼ��
#define SS_ERROR_FIRM_AUTH_FILE_NOT_FOUND           0x22000042  // ��֤�ļ��Ҳ���
#define SS_ERROR_FIRM_SESSION_OVERFLOW              0x22000043  // session�Ự��������ڲ����Ʋ���ʱ���³�����������
#define SS_ERROR_FIRM_TIME_OVERFLOW                 0x22000044  // ʱ����Ϣ�����������������pcʱ�䱻�����޸�����
#define SS_ERROR_FIRM_REACH_FILE_LIS_END            0x22000045  // ö�ٵ������һ���ļ�
#define SS_ERROR_FIRM_ANTI_MECHANISM_ACTIVED        0x22000046  // �ͷ�������������lm
#define SS_ERROR_FIRM_NO_BLOCK                      0x22000047  // ��ȡblock����
#define SS_ERROR_FIRM_NOT_ENDED                     0x22000048  // ����δ�������   (���������)
#define SS_ERROR_FIRM_LIC_ALREADY_ACTIVE            0x22000049  // ����Ѿ�����
#define SS_ERROR_FIRM_FILE_NOT_FOUND                0x22000050  // �Ҳ����ļ�
#define SS_ERROR_FIRM_UNKNOW_USER_DATA_TYPE         0x22000051  // δ֪���û���������
#define SS_ERROR_FIRM_INVALID_TF_CODE               0x22000052  // �����ת�Ʋ�����
#define SS_ERROR_FIRM_UNMATCH_GUID                  0x22000053  // ��ƥ���GUID 
#define SS_ERROR_FIRM_UNABLE_TRANSFER               0x22000054  // ��ɲ��ɽ���ת��
#define SS_ERROR_FIRM_INVALID_TRANSCODE             0x22000055  // ����ʶ��������
#define SS_ERROR_FIRM_ACCOUNT_NAME_NOT_FOUND        0x22000056  // �û���δ�ҵ�
#define SS_ERROR_FIRM_ACCOUNT_ID_NOT_FOUND          0x22000057  // �˻�idδ�ҵ�
#define SS_ERROR_FIRM_INVALID_XKEY_STEP             0x22000058  // �������Կ��������
#define SS_ERROR_FIRM_INVLAID_DEVELOPER_ID          0x22000059  // ��Ч�Ŀ�����ID
#define SS_ERROR_FIRM_CA_TYPE                       0x2200005A  // CA���ʹ���
#define SS_ERROR_FIRM_LIC_TRANSFER_FAILURE          0x2200005B  // ���ת��ʧ��
#define SS_ERROR_FIRM_TF_PACKAGE_VERSION            0x2200005C  // ת�ư��汾�Ŵ���
#define SS_ERROR_FIRM_BEYOND_PKG_ITEM_SIZE          0x2200005D  // �����������������
#define SS_ERROR_FIRM_UNBOUND_ACCOUNT_INFO          0x2200005E  // �˻�δ��
#define SS_ERROR_FIRM_DEVICE_LOCKED                 0x2200005F  // �û���������
#define SS_ERROR_FIRM_INVALID_LOCK_PASSWORD         0x22000060  // �������������
#define SS_ERROR_FIRM_NOT_EXCHANGE_KEY              0x22000061  // δ������ԿЭ�̣�auth��֤��
#define SS_ERROR_FIRM_INVALID_SHORTCODE_SWAP_FILE   0x22000062  // ��Ч�Ķ������������ļ�
#define SS_ERROR_FIRM_SHORTCODE_UPDATE_USER_DATA    0x22000063  // ���������û�����������
#define SS_ERROR_FIRM_CTRL_HMAC_VERSION             0x22000064  // ����Ŀ�����hmacǩ���汾���������û���
#define SS_ERROR_FIRM_CTRL_HMAC_MAGIC               0x22000065  // ����Ŀ�����hmacǩ�����ݣ���ʹ���µĿ�����ǩ��

#define SS_ERROR_FIRM_GEN_HWFP                      0x22001001  // ������ɰ󶨴���
#define SS_ERROR_FIRM_WRONG_VERSION                 0x22001002  // ����İ汾��
#define SS_ERROR_FIRM_INVALID_PACKAGE               0x22001003  // ��������ݰ�
#define SS_ERROR_FIRM_UNSUPPORTED_PACKAGE           0x22001004  // ��֧�ֵ����ݰ�
#define SS_ERROR_FIRM_ILLEGAL_PACKAGE               0x22001005  // ���Ϸ������ݰ�
#define SS_ERROR_FIRM_EXCEPTION                     0x22001006  // �ڲ�����
#define SS_ERROR_FIRM_VERIFY_D2C                    0x22001007  // D2C��֤ʧ��
#define SS_ERROR_FIRM_HWFP_MISMATCHED               0x22001008  // �󶨰��뱾����ƥ��
#define SS_ERROR_FIRM_LICDATA_ERROR                 0x22001009  // ������ݴ���
#define SS_ERROR_FIRM_DEVPCERTS_NOT_FOUND           0X2200100A  // ������֤����δ�ҵ�
#define SS_ERROR_FIRM_WRONG_CERTS                   0x2200100B  // �����֤��
#define SS_ERROR_FIRM_VERIFY_DEVPSIGN               0x2200100C  // ������ǩ����֤ʧ��
#define SS_ERROR_FIRM_INVALID_VCLOCK                0x2200100D  // ��������ʱ�Ӵ���
#define SS_ERROR_FIRM_SLOCK_CORRUPT                 0x2200100E  // ��������ļ���
#define SS_ERROR_FIRM_FORMAT_SLOCK                  0x2200100F  // ������ʽ��ʧ��
#define SS_ERROR_FIRM_BAD_CONFIG                    0x22001010  // �����ļ������ڻ�����
#define SS_ERROR_FIRM_BAD_OFFLINE_ADJUST_TIME       0x22001011  // ���������У׼ʱ��

//============================================================
//              MODE LIC TRANS ģ��()0x28
//============================================================
#define SS_ERROR_LIC_TRANS_NO_SN_DESC               0x28000001  // δ�ҵ���������Ϣ
#define SS_ERROR_LIC_TRANS_INVALID_DATA             0x28000002  // ���ݸ�ʽ����

//============================================================
//              AUTH SERVER ģ�� (0x29)
//============================================================

#define SS_ERROR_AUTH_SERVER_INVALID_TOKEN          0x29000001  //��Ч��token
#define SS_ERROR_AUTH_SERVER_REFRESH_TOKEN          0x29000002  //ˢ��tokenʧ��
#define SS_ERROR_AUTH_SERVER_LOGIN_CANCELED         0x29000003  //�û�ȡ����½
#define SS_ERROR_AUTH_SERVER_GET_ALL_USER_INFO_FAIL 0x29000004  //��ȡ�����û���Ϣʧ��

//============================================================
//              Cloud ģ�� (0x30)
//============================================================

#define SS_CLOUD_OK                                 0x30000000  //  �ɹ�
#define SS_ERROR_CLOUD_INVALID_PARAMETER            0x30000001  //  ��������
#define SS_ERROR_CLOUD_QUERY_UESR_INFO              0x30000002  //  ��ѯ�û���Ϣʧ��
#define SS_ERROR_CLOUD_INVALID_LICENSE_SESSION      0x30000003  //  ���δ��¼���ѳ�ʱ
#define SS_ERROR_CLOUD_DATA_EXPIRED                 0x30000004  //  �����ѹ���
#define SS_ERROR_CLOUD_VERIFY_TIMESTAMP_SIGNATURE   0x30000005  //  ʱ���ǩ����֤ʧ��
#define SS_ERROR_CLOUD_AUTH_FAILED                  0x30000006  //  �˵�����֤ʧ��
#define SS_ERROR_CLOUD_NOT_BOUND                    0x30000007  //  �㷨�����ڻ�δ��
#define SS_ERROR_CLOUD_EXECUTE_FAILED               0x30000008  //  �㷨ִ��ʧ��
#define SS_ERROR_CLOUD_INVALID_TOKEN                0x30000010  //  ���Ϸ���token
#define SS_ERROR_CLOUD_LICENSE_ALREADY_LOGIN        0x30000011  //  ����ѵ�½
#define SS_ERROR_CLOUD_LICENSE_EXPIRED              0x30000012  //  ����ѵ���
#define SS_ERROR_CLOUD_SESSION_KICKED               0x30000013  //  ����ѱ��������Ե�¼
#define SS_ERROR_CLOUD_DEVELOPER_ACCOUNT            0x30000014  //  �����Ӧ���˻��쳣������ϵ�����Ӧ�̽��
#define SS_ERROR_CLOUD_INVALID_SESSSION             0x30001002  //  ��Ч��session
#define SS_ERROR_CLOUD_SESSION_TIMEOUT              0x30001004  //  �Ự��ʱ
#define SS_ERROR_CLOUD_PARSE_PARAM                  0x30001007  //  ������������
#define SS_ERROR_CLOUD_LICENSE_LOGIN_SUCCESS        0x31001000  //  ��ɵ�¼�ɹ�
#define SS_ERROR_CLOUD_LICENSE_NOT_EXISTS           0x31001001  //  ��ɲ�����
#define SS_ERROR_CLOUD_LICENSE_NOT_ACTIVE           0x31001002  //  ���δ����
#define SS_ERROR_CLOUD_LICENSE_EXPIRED2             0x31001003  //  ����ѹ���
#define SS_ERROR_CLOUD_LICENSE_COUNTER_IS_ZERO      0x31001004  //  �����ʹ�ô���
#define SS_ERROR_CLOUD_LICENSE_RUNTIME_TIME_OUT     0x31001005  //  �����ʹ��ʱ��
#define SS_ERROR_CLOUD_LICENSE_MAX_CONNECTION       0x31001006  //  ��ɲ���������
#define SS_ERROR_CLOUD_LICENSE_LOCKED               0x31001007  //  ��ɱ�����
#define SS_ERROR_CLOUD_LICENSE_DATA_NOT_EXISTS      0x31001008  //  ������ݲ�����
#define SS_ERROR_CLOUD_LICENSE_STILL_UNAVAILABLE    0x31001010  //  ���δ����ʼʹ��ʱ��
#define SS_ERROR_CLOUD_ZERO_LICENSE_NOT_EXISTS      0x31001011  //  0����ɲ�����
#define SS_ERROR_CLOUD_VERIFY_LICENSE               0x31001012  //  �����֤ʧ��
#define SS_ERROR_CLOUD_EXECUTE_FILE_NOT_EXISTS      0x31002000  //  �㷨������
#define SS_ERROR_CLOUD_LICENSE_NOT_BOUND            0x31003001  //  �㷨δ��

#define SS_ERROR_SO_SERVER_ERROR                    0x51000500  //  ���������� 
#define SS_ERROR_SO_SERVER_DATA_ERROR               0x51004000  //  ���������ݴ���
#define SS_ERROR_SO_USER_CENTER_ERROR               0x51004001  //  �û����Ĵ���
#define SS_ERROR_SO_INVALID_TOKEN                   0x51004002  //  ��Ч��access_token
#define SS_ERROR_SO_REFUSE_ADJUST_TIME              0x51004003  //  �ܾ�ʱ��У׼
#define SS_ERROR_SO_BEFORE_START_TIME               0x51004004  //  ���δ����ʼʱ�� 
#define SS_ERROR_SO_EXPIRED                         0x51004005  //  ����Ѿ�����
#define SS_ERROR_SO_LICENSE_BIND_ERROR              0x51004006  //  ��ɰ󶨴���
#define SS_ERROR_SO_LICENSE_BIND_FULL               0x51004007  //  ���ͬʱ�󶨵Ļ������Ѵ�����
#define SS_ERROR_SO_LICENSE_UNBOUND                 0x51004008  //  ����Ѿ����
#define SS_ERROR_SO_LICENSE_MAX_BIND_FULL           0x51004009  //  ������󶨻������Ѵ�����
#define SS_ERROR_SO_INVALID_ACCESS_TOKEN            0x5100400A  //  ��Ч��AccessToken
#define SS_ERROR_SO_NOT_SUPPORTED_OFFLINE_BIND      0x51004010  //  ����ɲ�֧�����߰�
#define SS_ERROR_SO_EXPIRED_C2D                     0x51004011  //  ���ڵ�C2D��
#define SS_ERROR_SO_OFFLINE_UNBIND_REPEAT           0x51004012  //  �ظ������߽�����󣨵����߽����ظ��ϴ�ʱ���أ�
#define SS_ERROR_SO_DEVELOPER_ACCOUNT               0x51004013  //  �����Ӧ���˻��쳣������ϵ�����Ӧ�̽��
#define SS_ERROR_SO_OUTDATED_VERSION                0x51004014  //  ��ɷ���汾���ͣ������������°汾

#define SS_ERROR_LICKEY_QUERY_STATUS_REQ_ERROR          0x51005001  //  ��ѯ��Ȩ��״̬�������쳣
#define SS_ERROR_LICKEY_EXCHANGE_REQ_ERROR              0x51005002  //  ��Ȩ��һ��������쳣
#define SS_ERROR_LICKEY_NOT_EXIST                       0x51005003  //  ��Ȩ�벻����
#define SS_ERROR_LICKEY_DEDUCT_FAILED                   0x51005004  //  ��Ȩ����ɿ۷�ʧ��
#define SS_ERROR_LICKEY_C2D_INVALID_CHAR_ENCODING       0x51005005  //  C2D�ļ�����(��ҪUTF-8����)
#define SS_ERROR_LICKEY_C2D_UNSUPPORTED_PROTO_TYPE      0x51005006  //  C2D�ļ�����(��֧�ֵ�Э������)
#define SS_ERROR_LICKEY_C2D_UNSUPPORTED_PROTO_VER       0x51005007  //  C2D�ļ�����(��֧�ֵ�Э��汾)
#define SS_ERROR_LICKEY_C2D_UNSUPPORTED_HWFP_VER        0x51005008  //  C2D�ļ�����(��֧�ֵ�Ӳ��ָ�ư汾)
#define SS_ERROR_LICKEY_C2D_INCOMPATIBLE_MACHINE_ID     0x51005009  //  C2D�ļ�����(��ƥ��Ļ���ID)
#define SS_ERROR_LICKEY_C2D_UNSUPPORTED_INFO_VER        0x5100500A  //  C2D�ļ�����(��֧�ֵĻ�����Ϣ�汾)
#define SS_ERROR_LICKEY_C2D_OVERDUE                     0x5100500B  //  C2D�ļ�����(�ѹ��ڣ�����������)
#define SS_ERROR_LICKEY_C2D_HWFP_VERIFY_FAILED          0x5100500C  //  C2D�ļ�����(Ӳ��ָ��У��ʧ��)
#define SS_ERROR_LICKEY_C2D_OLD_SS_VER                  0x5100500D  //  C2D�ļ�����(�ɰ�C2D����ʹ�����°汾��Virbox�û�������������)
#define SS_ERROR_LICKEY_C2D_PLATFORM_JUST_4_TRADITIONAL 0x5100500E  //  ����Ȩ��������ڴ�ͳƽ̨(Windows/Linux/Mac-OS)
#define SS_ERROR_LICKEY_C2D_PLATFORM_JUST_4_ANDROID     0x5100500F  //  ����Ȩ��������ڰ�׿ƽ̨(Android)
#define SS_ERROR_LICKEY_C2D_EXCEPTION_HAPPENS           0x51005010  //  ����C2D���̷����쳣
#define SS_ERROR_LICKEY_BIND_NO_AVAILABLE_LICENSE       0x51005011  //  ���ܰ�(�������������)
#define SS_ERROR_LICKEY_BIND_LICENSE_NOT_START          0x51005012  //  ���ܰ�(��δ����ɵĿ�ʼʹ��ʱ��)
#define SS_ERROR_LICKEY_BIND_LICENSE_EXPIRED            0x51005013  //  ���ܰ�(����Ѿ�����)
#define SS_ERROR_LICKEY_BINDING_LIMIT_EXCEEDED          0x51005014  //  ���ܰ�(��Ȩ��ͬʱ���豸���Ѵ�����)
#define SS_ERROR_LICKEY_BOUND_LIMIT_EXCEEDED            0x51005015  //  ���ܰ�(��Ȩ���ۻ����豸���Ѵ�����)
#define SS_ERROR_LICKEY_BIND_NO_AVAILABLE_PKG           0x51005016  //  ���ܰ�(�޿���������)
#define SS_ERROR_LICKEY_D2C_EXCEPTION_HAPPENS           0x51005017  //  ��ʧ��(���������������쳣)

#define SS_ERROR_LICKEY_LICENSE_NOT_EXIST               0x5100612D  //  ��Ȩ��û�а����κ���ɣ�����ϵ�����Ӧ��
#define SS_ERROR_LICKEY_D2C_PACKAGE                     0x5100612E  //  ��ȡD2C����������
#define SS_ERROR_LICKEY_NOT_EXIST_V2                    0x5100612F  //  ��Ȩ�벻���ڣ���ȷ����Ȩ���Ƿ���ȷ
#define SS_ERROR_LICKEY_INVALID_C2D_DATA                0x51006130  //  ��Ч��Ӳ����Ϣ����
#define SS_ERROR_LICKEY_INVALID_C2D_PARAM               0x51006131  //  Ӳ����Ϣ���ݲ�����������
#define SS_ERROR_LICKEY_NO_D2C_PACKAGE                  0x51006132  //  ��Ȩ�벻��Ҫ���»���°������ڣ�����ϵ�����Ӧ��
#define SS_ERROR_LICKEY_LICENSE_ERROR                   0x51006133  //  ����Ȩ����ɴ���
#define SS_ERROR_LICKEY_ABNORMAL_COST                   0x51006134  //  ��Ȩ����ɿ۷�ʧ�ܣ�����ϵ�����Ӧ��

#define SS_ERROR_LL_SERVER_INTERNAL_ERROR               0x61000001  //  �����ڲ�����
#define SS_ERROR_LL_INVALID_PARAMETERS                  0x61000002  //  ��������
#define SS_ERROR_LL_DEVICE_INFO_NOT_EXIST               0x61000003  //  ��������Ϣ������
#define SS_ERROR_LL_DEVICE_LOSS_OR_LOCKED               0x61000004  //  ���������Ѷ�ʧ���ѱ�����
#define SS_ERROR_LL_UNSUPPORTED_DEVELOPER               0x61000005  //  �ÿ����߲�֧�ֶ�����������
#define SS_ERROR_LL_DEVICE_NO_RECORD                    0x61000006  //  ������δ����ƽ̨���б���
#define SS_ERROR_LL_UNSUPPORTED_DEVICE                  0x61000007  //  ����������֧�ֶ�����������
#define SS_ERROR_LL_UNKOWN_ACTIVATION_MODE              0x61001001  //  δ֪�ļ���������״̬
#define SS_ERROR_LL_UNKOWN_DEVICE_STATE                 0x61001002  //  δ֪�ļ�����������
#define SS_ERROR_LL_UNKOWN_D2C_USAGE                    0x61001003  //  δ֪��D2C����
#define SS_ERROR_LL_UNKOWN_D2C_WRITE_RESULT             0x61001004  //  δ֪��D2Cд����
#define SS_ERROR_LL_VERIFY_ERROR                        0x61001005  //  ��������ǩʧ��
#define SS_ERROR_LL_DATABASE_OPT_ERROR                  0x61001006  //  ���ݿ����ʧ��
#define SS_ERROR_LL_NO_NEED_TO_ACTIVATE                 0x61001007  //  ����������Ҫ����
#define SS_ERROR_LL_DEVICE_ALREADY_LOCKED               0x61001008  //  �������ѱ�����
#define SS_ERROR_LL_D2C_INFO_NOT_EXIST                  0x61001009  //  D2C��Ϣ������
#define SS_ERROR_LL_ILLEGAL_DEVICE_STATE                0x6100100a  //  ��Ч�ļ�����״̬
#define SS_ERROR_LL_CANNOT_BE_ACTIVATED                 0x6100100b  //  �������ĵ�ǰ״̬�޷�������
#define SS_ERROR_LL_NOT_SUPPORTED_PROTOCOL_VERSION      0x6100100c  //  ��֧�ֵ�����Э�飬������Virbox�ͻ���
#define SS_ERROR_LL_OVER_DOWNLOAD_TIMES				    0x61003001  //  �������ش���
#define SS_ERROR_LL_CERT_NOT_EXIST					    0x61003002  //  ֤�鲻����
#define SS_ERROR_LL_LACK_OF_MONEY					    0x61003003  //  �ײ����㣬�޷�����d2c��
#define SS_ERROR_LL_D2C_ISSUE_ERROR					    0x61003004  //  ��ƽ̨ǩ����Ȩʧ��


//============================================================
//              �û�����ģ�� (0x60)
//============================================================
#define SS_UM_OK									0x00000000	//�ɹ�
#define SS_UM_ERROR									0x00000001	//һ�����
#define SS_ERROR_UM_PARAMETER_ERROR					0x60000002  //��������
#define SS_ERROR_UM_CAPTCHA_INVALID					0x60000003  //��֤��ʧЧ
#define SS_ERROR_UM_CAPTCHA_ERROR					0x60000004  //��֤�����
#define SS_ERROR_UM_CAPTCHA_IS_NULL					0x60000005  //��������֤��
#define SS_ERROR_UM_USER_NO_ACTIVE					0x60000006  //�û�δ����
#define SS_ERROR_UM_RETRY_TOO_MORE					0x60000007  //�û���������Ƶ��,���Ժ�����
#define SS_ERROR_UM_USER_OR_PWD_ERROR				0x60000008  //�û��������������
#define SS_ERROR_UM_OAUTH_CONFIG_ERROR				0x60000009  //OAuth�û��������ô���
#define SS_ERROR_UM_GRANT_TYPE_ERROR				0x6000000A  //��֧�ֵ���Ȩ����
#define SS_ERROR_UM_SCOPE_INVALID					0x6000000B  //��Ч��Scope
#define SS_ERROR_UM_SERVER_STOP						0x6000000C  //����ֹͣ
#define SS_ERROR_UM_IPC_TIMEOUT						0x6000000D  //������ʱ
#define SS_ERROR_UM_TRANS_ERROR						0x6000000E  //�ڲ����ݴ������
#define SS_ERROR_UM_CLOUD_INVALID_TOKEN				0x6000000F  //TOKEN��Ч
#define SS_ERROR_UM_ACCOUNT_HAVE_BEEN_LOGOUT		0x60000010  //δ�ҵ�GUID��Ӧ�ĵ�¼��Ϣ
#define SS_ERROR_UM_NET_ERROR						0x60000011  //�������
#define SS_ERROR_UM_COULDNT_RESOLVE_HOST			0x60000012  //�������ɴ� URL����authconfig.xml���۸Ļ�������������
#define SS_ERROR_UM_MEMORY_ERROR					0x60000013  //�ڲ��ڴ���ش���
#define SS_ERROR_UM_USERLIST_AND_AUTH_CFG_ERROR		0x60000014  //userlist.sensedata authconfig.xml ��ش���
#define SS_ERROR_UM_NEED_RELOGON					0x60000015  //TODO:ˢ��tokenʧ�ܣ��������µ�¼
#define SS_ERROR_UM_VERIFY_TOKEN_TIMEOUT				0x60000016  //У��token��ʱ
#define SS_ERROR_UM_REFRESH_TOKEN_TIMEOUT				0x60000017  //ˢ��token��ʱ



// ��
#define MAKE_ERROR(mode, errcode)           (((mode) << 24) | (errcode))
#define MAKE_COMMON_ERROR(mode, errcode)    (((mode) << 24) | (errcode))
#define MAKE_H5_RUNTIME(errorcode)          (((errorcode)==H5_ERROR_SUCCESS) ? 0 : (MAKE_COMMON_ERROR(MODE_H5_RUNTIME,(errorcode))))
#define MAKE_SYS_ERROR(errorcode)          (((errorcode)==0) ? 0 : (MAKE_COMMON_ERROR(MODE_SYSTEM,(errorcode))))
#define MAKE_NETAGENT(errorcode)            MAKE_COMMON_ERROR(MODE_NETAGENT,(errorcode))
#define MAKE_SSPROTECT(errorcode)           MAKE_COMMON_ERROR(MODE_NETAGENT,(errorcode))
#define MAKE_LM_FIRM_ERROR(errorcode)       MAKE_COMMON_ERROR(MODE_LM_FIRM,(errorcode))
#define MAKE_LM_SES_ERROR(errorcode)        MAKE_COMMON_ERROR(MODE_LM_SES,(errorcode))
#define GET_ERROR_MODULE(errorcode)          ((errorcode) >> 24)


#endif //__SS_ERROR_H__
