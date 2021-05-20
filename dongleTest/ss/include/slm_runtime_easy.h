#ifndef _slm_runtime_easy_H_
#define _slm_runtime_easy_H_

#include "ss_lm_runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

    /*!
    *   @brief   slm_get_last_error
    *   @return  ����������ɴ���ֵ
    */
    SS_UINT32 SSAPI slm_get_last_error(void);


    /*!
    *   @brief   app_msg_get_last_status
    *   @return  ��������ϵͳ��ϢAPP״ֵ̬����������������������Ϣ��SSֹͣ�����֪ͨ
    */
    SS_UINT32 SSAPI app_msg_get_last_status(void);


    /*!
    *   @brief   app_msg_get_last_info
    *   @return  ��������ϵͳ��ϢAPP״̬�����ַ���,����Ҫ�ͷ�
    */
    const SS_CHAR* SSAPI app_msg_get_last_info(void);


    /*!
    *   @brief     SS���������ʼ������֤�����̺Ϸ����
    *   @param[in] szdeveloper_password     ����������HEX�ַ���
    *   @return    �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see       slm_init_easy slm_cleanup_easy slm_is_debug_easy
    *   @remark    Ϊ����APP����������׼��
    */
    SS_UINT32 SSAPI slm_init_easy(const char *szdeveloper_password);

    /*!
    *   @brief     SS�������淴��ʼ�����Ͽ���SS���ӣ����ҹرշ�������ļ���
    *   @return    �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see       slm_init_easy slm_cleanup_easy slm_is_debug_easy
    */
    SS_UINT32 SSAPI slm_cleanup_easy(void);

    /*!
    *   @brief     ���APP�Ƿ񱻵���
    *   @return    �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see       slm_init_easy slm_cleanup_easy slm_is_debug_easy
    */
    SS_UINT32 SSAPI slm_is_debug_easy(void);

    /*!
    *   @brief     ��ȫ��¼���,��STRUCT���ݲ���,���Ҽ��ʱ�䣨�Ƿ��ڻ����Ƿ����ڿ�ʼʱ�䣩���������������Ƿ���㣬
    *              ����м��������������Լ��ٶ�Ӧ�ļ���������������������ʱ�������粢����������
    *   @param[in]  license_param     ��¼���������������������������licenseid������ָ�����Եȣ�������ʽ���ss_lm_runtime.h�в鿴
    *   @param[in]  param_format      ��������ַ������ͣ�Ŀǰ��֧��STRUCT��ʽ
    *   @return     SLM_HANDLE_INDEX    ���ص�¼֮����ɾ��indexֵ,��Χ��1-256֮�䡣
    *   @return     SS_UINT32������,��0����ʧ��
    *   @remark
    *   - ������ͨ��slm_get_last_error �õ�
    *   - slm_login������ϸ˵����
    *       -# ���Զ����ҿ���������ɾ����
    *       -# ��runtime�������������ڴ�������߳���Ϣ��
    *       -# �����������Ҫ���ڼ�ػỰ���̣���������������߱������Լ��ͷŶ�Ӧ���ڴ��������Դ��
    *       -# LM�����ڿͻ������Զ����룬����RSA ��Կ����֤�豸ID�������̱�ŵ�һ����֤�ֶΡ�
    *       -# LM�����������붼Ҫlogin֮�������Ȩ�޲��� �����д���ӽ��ܵȲ�����
    *   - ���ܲ���˵��������STRUCT������¼��ȷ����ȫ���ο����SLM_LOGIN_PARAM�ṹ
    *   @see slm_logout SS_UINT32 INFO_FORMAT_TYPE ST_LOGIN_TEMPLET
    */
    SLM_HANDLE_INDEX SSAPI slm_login_easy(
        IN  const ST_LOGIN_PARAM     *license_param,
        IN  INFO_FORMAT_TYPE    param_format
        );

    /*!
    *   @brief     ��ɵǳ��������ͷ���ɾ������Դ
    *   @param[in] slm_handle    ��ɾ��ֵ
    *   @return    �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see       slm_login
    */
    SS_UINT32 SSAPI slm_logout_easy(SLM_HANDLE_INDEX slm_handle);

    /*!
    *   @brief      slm_find_license_easy �����������
    *   @param[in]  license_id      ���ID
    *   @param[in]  format          ������ʽ
    *   @return     ���������Ϣ���ַ�������ʽ��formatָ��������ʹ��ʱ����slm_free_easy�ͷ�  
    *   @remark     ����ɹ�����Ҫ����slm_free �ͷ�license_desc
    */
    SS_CHAR* SSAPI slm_find_license_easy(
        IN  SS_UINT32           license_id,
        IN  INFO_FORMAT_TYPE    format
        );

    /*!
    *   @brief     slm_get_info_easy
    *   @param[in] slm_handle     ��ɾ��ֵ
    *   @param[in] type           ��Ϣ����
    *   @param[in] format         ��Ϣ��ʽ��ʹ��json
    *   @return    ����info���,��Ҫslm_free_easy�ͷ�  
    */
    SS_CHAR*  SSAPI slm_get_info_easy(
        IN SLM_HANDLE_INDEX slm_handle,
        IN INFO_TYPE        type,
        IN INFO_FORMAT_TYPE format
        );

    /*!
    *   @brief     ���ֵ�¼�Ự�����������Ϊ����ʬ�������
    *   @brief     ��ʬ��������������ѭ�����߱�����slm_handle�����Զ����ͷţ����slm_runtime�����ڴ����Դ��
    *   @param[in] slm_handle     ��ɾ��ֵ
    *   @return    �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see       slm_login_easy  
    */
    SS_UINT32 SSAPI slm_keep_alive_easy(SLM_HANDLE_INDEX slm_handle);

    /*!
    *   @brief     ���ģ��
    *   @param[in] slm_handle     ��ɾ��ֵ
    *   @param[in] module_id      ģ��ID����Χ�ɣ�1 ~ 64��
    *   @return    ģ����ڷ���SS_OK�������ڷ���SS_ERROR_LICENSE_MODULE_NOT_EXISTS, ���򷵻�����������
    */
    SS_UINT32 SSAPI slm_check_module_easy(IN SLM_HANDLE_INDEX slm_handle, IN SS_UINT32 module_id);

    /*!
    *   @brief      ��ɼ��ܣ���ͬ�����ID��ͬ�Ŀ����̼��ܽ����ͬ
    *   @param[in]  slm_handle     ��ɾ��ֵ
    *   @param[in]  inbuffer       �������뻺����,��Ҫ16�ֽڶ���
    *   @param[out] outbuffer      �������������,��Ҫ16�ֽڶ���
    *   @param[in]  len            ���ܻ�������С��Ϊ16�ֽڵ���������
    *   @return     �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see        slm_decrypt_easy slm_login_easy
    */
    SS_UINT32 SSAPI slm_encrypt_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_BYTE            *inbuffer,
        OUT SS_BYTE            *outbuffer,
        IN  SS_UINT32           len
        );

    /*!
    *   @brief      ��ɽ��ܣ���ͬ�����ID��ͬ�Ŀ����̼��ܽ����ͬ
    *   @param[in]  slm_handle     ��ɾ��ֵ
    *   @param[in]  inbuffer       �������뻺����,��Ҫ16�ֽڶ���
    *   @param[out] outbuffer      �������������,��Ҫ16�ֽڶ���
    *   @param[in]  len            ���ܻ�������С��Ϊ16�ֽڵ���������
    *   @return     �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see        slm_encrypt_easy slm_login_easy
    */
    SS_UINT32 SSAPI slm_decrypt_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_BYTE            *inbuffer,
        OUT SS_BYTE            *outbuffer,
        IN  SS_UINT32           len
        );

    /*!
    *   @brief      �����ɵ���������С
    *   @param[in]  slm_handle     ��ɾ��
    *   @param[in]  type           ���������ͣ����Ͷ���� LIC_USER_DATA_TYPE
    *   @return     �����������Ĵ�С  
    *   @see        slm_user_data_read_easy slm_user_data_write_easy
    *   @remark     ����ֵͨ��slm_get_last_error���
    */
    SS_UINT32 SSAPI slm_user_data_getsize_easy(
        IN SLM_HANDLE_INDEX     slm_handle,
        IN LIC_USER_DATA_TYPE   type
        );

    /*!
    *   @brief      ��������ݣ����Զ�ȡRAW��ROM�͹�����
    *   @param[in]  slm_handle      ��ɾ��ֵ
    *   @param[in]  type            �ڴ����ͣ���ROM(ֻ����)��RAW(��д��)��PUB(������)
    *   @param[out] readbuff        ��ȡ��������
    *   @param[in]  offset          ��ƫ��
    *   @param[in]  len             ��ȡ���ݴ�С 
    *   @return     �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see        slm_user_data_getsize_easy slm_user_data_write_easy
    */
    SS_UINT32 SSAPI slm_user_data_read_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  LIC_USER_DATA_TYPE  type,
        OUT SS_BYTE             *readbuff,
        IN  SS_UINT32           offset,
        IN  SS_UINT32           len
        );

    /*!
    *   @brief     д��ɵĶ�д������ ,����������֮ǰ����ȷ���ڴ����Ĵ�С������ʹ��slm_user_data_getsize_easy���
    *   @param[in] slm_handle       ��ɾ��ֵ
    *   @param[in] writebuf         д������
    *   @param[in] offset           дƫ��
    *   @param[in] len              д���ȣ�������󣬼�SLM_MAX_WRITE_SIZE)
    *   @return    �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see       slm_user_data_getsize_easy slm_user_data_read_easy
    */
    SS_UINT32 SSAPI slm_user_data_write_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_BYTE            *writebuf,
        IN  SS_UINT32           offset,
        IN  SS_UINT32           len
        );

    /*!
    *   @brief      ���ָ����ɵĹ�������������С����Ҫ��¼0�����
    *   @param[in]  slm_handle    0����ɾ��ֵ
    *   @param[in]  license_id    ָ�����ID
    *   @param[out] pmem_size     ��������С�����ַ��
    *   @return     �����������Ĵ�С
    *   @remark     ����ֵͨ��slm_get_last_error���
    */
    SS_UINT32 SSAPI slm_pub_data_getsize_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_UINT32           license_id
        );

    /*!
    *   @brief      ��ȡ��ɹ���������Ҫ��¼0�����
    *   @param[in]  slm_handle   0����ɾ��ֵ
    *   @param[in]  license_id   ָ�����ID
    *   @param[out] readbuf      ��ȡ������
    *   @param[in]  offset       ����ƫ��
    *   @param[in]  len          ��������С
    *   @return     �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @remark     ���û���ϣ��ͨ����¼��Ӧ����ɣ��Ӷ���ȡ����������ʱ���û�����ͨ�����ô˽ӿڽ��л�ȡ��ǰ������Ҫ��¼0�����
    *              ��Ȼ��0����ɾ����Ҫ��ѯ�����������ID�����������ȡ����ɵĹ��������ݡ�
    *   @code
    *      SS_UINT32 status = 0;
    *      SLM_HANDLE_INDEX handle_zero = 0;
    *      ST_LOGIN_PARAM login = {0};
    *      SS_BYTE   pub_data[2048] = { 0 };
    *      SS_UINT32 pub_size = 0;
    *      SS_UINT32 lic_find = 1; // Ҫ��1����ɹ�����
    *      
    *      login.size = sizeof(ST_LOGIN_PARAM);
    *      login.license_id = 0;
    *      
    *      handle_zero = slm_login_easy(&login, STRUCT);
    *      
    *      pub_size = slm_pub_data_getsize_easy(handle_zero, lic_find);
    *      status = pslm_get_last_error();
    *      if (SS_OK == status && pub_size != 0)
    *      {
    *          status = pslm_pub_data_read_easy(hslm_zero, lic_find, pub_data, 0, pub_size);
    *          if (SS_OK == status)
    *          {
    *              // read ok
    *          }
    *      }
    *   @endcode 
    *   @see        slm_user_data_pub_getsize
    */
    SS_UINT32 SSAPI slm_pub_data_read_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_UINT32           license_id,
        OUT SS_BYTE            *readbuf,
        IN  SS_UINT32           offset,
        IN  SS_UINT32           len
        );

    /*!
    *   @brief      SS�ڴ��й��ڴ�����
    *   @param[in]  slm_handle      ��ɾ��ֵ
    *   @param[in]  size            �����С����� SLM_MEM_MAX_SIZE.
    *   @return     �����й��ڴ�id(�ڴ�id��0��ʼ��������0����Ч�ڴ�id)
    *   @see        slm_mem_free_easy slm_mem_read_easy slm_mem_write_easy
    *   @remark     ����ֵͨ��slm_get_last_error���
    */
    SS_UINT32 SSAPI slm_mem_alloc_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_UINT32           size
        );

    /*!
    *   @brief     �ͷ��й��ڴ�
    *   @param[in] slm_handle    ��ɾ��ֵ
    *   @param[in] mem_id        �й��ڴ�id
    *   @return    �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see slm_mem_alloc_easy slm_mem_read_easy slm_mem_write_easy
    */
    SS_UINT32 SSAPI slm_mem_free_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_UINT32           mem_id
        );

    /*!
    *   @brief     SS�ڴ��йܶ�
    *   @param[in]  slm_handle    ��ɾ��ֵ
    *   @param[in]  mem_id        �й��ڴ�id
    *   @param[in]  offset        ƫ��
    *   @param[in]  len           ����
    *   @param[out] readbuff      ��ȡ��������
    *   @return     �ɹ����ض�ȡ���ݵĴ�С
    *   @see        slm_mem_alloc_easy slm_mem_free_easy slm_mem_write_easy
    *   @remark     ����ֵͨ��slm_get_last_error���
    */
    SS_UINT32 SSAPI slm_mem_read_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_UINT32           mem_id,
        IN  SS_UINT32           offset,
        IN  SS_UINT32           len,
        OUT SS_BYTE             *readbuff
        );

    /*!
    *   @brief      SS�ڴ��й��ڴ�д��
    *   @param[in]  slm_handle    ��ɾ��ֵ
    *   @param[in]  mem_id        �й��ڴ�id
    *   @param[in]  offset        ƫ��
    *   @param[in]  len           д�볤�ȣ����ֵ�ο�SLM_MEM_MAX_SIZE
    *   @param[in]  writebuff     ����
    *   @return     ����ʵ��д�ĳ���
    *   @see        slm_mem_alloc_easy slm_mem_free_easy slm_mem_read_easy
    *   @remark     ������ͨ��slm_get_last_error �õ�
    */
    SS_UINT32 SSAPI slm_mem_write_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_UINT32           mem_id,
        IN  SS_UINT32           offset,
        IN  SS_UINT32           len,
        IN  SS_BYTE             *writebuff
        );

    /*!
    *   @brief      ��ɶ�ִ̬�д��룬�ɿ�����API gen_dynamic_code����
    *   @param[in]  slm_handle      ��ɾ��ֵ
    *   @param[in]  exf_buffer      ��̬exf�㷨������
    *   @param[in]  exf_size        ��̬exf�ļ���С
    *   @param[in]  inbuf           ���뻺����
    *   @param[in]  insize          ���볤��
    *   @param[out] poutbuf         ���������
    *   @param[in]  outsize         ������泤��
    *   @param[out] pretsize        ʵ�ʷ��ػ��泤��
    *   @return     �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see        slm_login_easy slm_execute_static_easy
    */
    SS_UINT32 SSAPI slm_execute_dynamic_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_BYTE            *exf_buffer,
        IN  SS_UINT32           exf_size,
        IN  SS_BYTE            *inbuf,
        IN  SS_UINT32           insize,
        OUT SS_BYTE            *poutbuf,
        IN  SS_UINT32           outsize,
        OUT SS_UINT32          *pretsize
        );

    /*!
    *   @brief      ִ�������㷨
    *   @param[in]  slm_handle      ��ɾ��ֵ
    *   @param[in]  exfname         ����ִ���ļ���
    *   @param[in]  inbuf           ���뻺����
    *   @param[in]  insize          ���볤��
    *   @param[out] poutbuf         ���������
    *   @param[in]  outsize         ������泤��
    *   @param[out] pretsize        ʵ�ʷ��ػ��泤��
    *   @return     �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see        slm_login_easy slm_execute_dynamic_easy
    */
    SS_UINT32 SSAPI slm_execute_static_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  const char         *exfname,
        IN  SS_BYTE            *inbuf,
        IN  SS_UINT32           insize,
        OUT SS_BYTE            *poutbuf,
        IN  SS_UINT32           outsize,
        OUT SS_UINT32          *pretsize
        );


    /*!
    *   @brief      ��ȡ�����豸֤��
    *   @param[in]  slm_handle           ��ɾ��
    *   @param[out] pdevice_cert         �豸֤�����ݻ���
    *   @param[in]  buff_size            �豸֤�黺���С
    *   @param[out] preturn_size         ���ص��豸֤���С
    *   @return     �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see        slm_login_easy
    */

    SS_UINT32 SSAPI slm_get_device_cert_easy(
        IN  SLM_HANDLE_INDEX slm_handle,
        OUT SS_BYTE          *pdevice_cert,
        IN  SS_UINT32         buff_size,
        OUT SS_UINT32        *preturn_size
        );

    /*!
    *   @brief      ͨ��֤�����ͣ���ȡ�ѵ�¼��ɵ�֤��
    *   @param[in]  slm_handle  ��ɾ��
    *   @param[in]  cert_type   ֤�����ͣ��ο� CERT_TYPE_XXX
    *   @param[out] cert        ֤��֤�黺����
    *   @param[in]  cert_size   ��������С
    *   @return     ����֤���ʵ�ʳ���
    *   @remarks    ��ǰ��֧�ֱ���Ӳ����������ֵͨ��slm_get_last_error���
    *   @see    slm_login
    */
    SS_UINT32 SSAPI slm_get_cert_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  CERT_TYPE           cert_type,
        OUT SS_BYTE            *cert,
        IN  SS_UINT32           cert_size
        );

    /*!
    *   @brief      �豸˽Կǩ��   
    *   @param[in]  slm_handle           ��ɾ��
    *   @param[in]  psign_data           ��֤���ݣ��������ַ�"SENSELOCK"��ͷ����9�ֽڣ�
    *   @param[in]  sign_data_size       ��֤���ݴ�С����С����Ϊ SLM_VERIFY_DATA_SIZE(41)���ֽ�
    *   @param[out] psignature           ��֤���ݵ�ǩ�����
    *   @param[in]  max_size             ��֤���ݵ���󻺴��С
    *   @param[out] psignature_ret_size  ǩ�������С
    *   @return     �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see        slm_login_easy
    */
    SS_UINT32 SSAPI slm_sign_by_device_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_BYTE             *psign_data,
        IN  SS_UINT32           sign_data_size,
        OUT SS_BYTE             *psignature,
        IN  SS_UINT32           max_size,
        OUT SS_UINT32           *psignature_ret_size
        );

    /*!
    *   @brief      ��˸ָʾ��
    *   @param[in]  slm_handle          ��ɾ��
    *   @param[in]  color               ���Ƶ���ɫ��0��ʾ��ɫLED��1��ʾ��ɫLED
    *   @param[in]  state               ���Ƶ�״̬��0����رգ�1����򿪣� 2������˸
    *   @param[in]  interval            ���Ƶ���˸��������룩
    *   @return     �ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
    *   @see        slm_login_easy
    */
    SS_UINT32 SSAPI slm_led_control_easy(
        IN  SLM_HANDLE_INDEX    slm_handle,
        IN  SS_UINT32           color,
        IN  SS_UINT32           state,
        IN  SS_UINT32           interval
        );

    /*!
    *   @brief      ���runtime���SS�İ汾��Ϣ.
    *   @param[out] api_version         API�İ汾�����ǳɹ���
    *   @param[out] ss_version          SS����İ汾
    *   @return     �ɹ�����SS_OK��ʧ���򷵻���Ӧ�Ĵ�����
    */
    SS_UINT32 SSAPI slm_get_version_easy(
        OUT SS_UINT32      *api_version,
        OUT SS_UINT32      *ss_version
        );

    /*!
    *   @brief     ͨ���������ô�����Ϣ
    *   @param[in] error_code        ������
    *   @param[in] language_id       Ҫ�����ַ��������ԣ��� LANGUAGE_XXXX_ASCII
    *   @return    �ɹ����ش�����Ϣ������Ҫ����slm_free_easy�ͷţ���ʧ�ܷ��ؿ�ָ��NULL 
    *
    */
    const SS_CHAR * SSAPI slm_error_format_easy(
        IN SS_UINT32    error_code,
        IN SS_UINT32    language_id
        );


    /*!
    *   @brief      ��D2C����������
    *   @param[in]  d2c_pkg     d2c�ļ�����
    *   @return     ������Ϣ��ʹ����Ҫ����slm_free_easy�ͷ�
    *   @see        slm_update_ex_easy
    *   @remarks:   error_msg���������ݣ�JSON����
    *   @code
    *   [
    *   {"pkg_order":1, "pkg_desc":"package decription.", "status": 0},
    *   {"pkg_order":2, "pkg_desc":"package decription.", "status": 0}
    *   ]
    *   @endcode
    *   @remark ����ֵͨ��slm_get_last_error��ã�����ֵ����slm_free_easy�ͷ�
    */
    SS_CHAR* SSAPI slm_update_easy(
        IN  SS_CHAR       *d2c_pkg
        );

    /*!
    *   @brief      ��D2C��������������ָ��������оƬ��,���Բ��в���
    *   @param[in]  szlock_sn     ����HEX�ַ���
    *   @param[in]  d2c_pkg       d2c�ļ�����
    *   @return     error_msg��������Ϣ��ʹ����Ҫ����slm_free_easy�ͷ�
    *   @remarks:   error_msg���������ݣ�JSON����
    *   @code
    *   [
    *   {"pkg_order":1, "pkg_desc":"package decription.", "status": 0},
    *   {"pkg_order":2, "pkg_desc":"package decription.", "status": 0}
    *   ]
    *   @endcode
    *   @see    slm_update  // TODO:
    */
    SS_CHAR* SSAPI slm_update_ex_easy(
        IN SS_CHAR     *szlock_sn,
        IN SS_CHAR     *d2c_pkg
        );

    /*!
    *   @brief      ���ڶ�����������ָ��������Ψһ���к�
    *   @param[in]  lock_sn     ���ţ�Ψһ���кţ�
    *   @param[in]  inside_file ���ڶ����ļ���
    *   @return     �ɹ�����SS_OK��ʧ�ܷ��ش�����
    *   @see        slm_execute_static_easy
    */
    SS_UINT32 SSAPI slm_d2c_update_inside_easy(
        IN char        *lock_sn,
        IN char        *inside_file
        );


    /*!
    *   @brief      ��D2C��������������ָ��������оƬ�ź�D2C���ļ�·����
    *   @param[in]  szlock_sn     ����HEX�ַ���
    *   @param[in]  d2c_file      d2c�ļ�·��
    *   @return     error_msg��������Ϣ��ʹ����Ҫ����slm_free_easy�ͷ�
    *   @see    slm_update_ex, slm_update
    */
    SS_CHAR* SSAPI slm_update_file_easy(
        IN SS_CHAR      *szlock_sn,
        IN SS_CHAR      *d2c_file
        );

    /*!
    *   @brief       ö�ٱ�������Ϣ
    *   @return      �ɹ������豸��Ϣ����Ҫ����slm_free_easy
    *   @remark      ��������Ҫ����slm_get_last_error ��ȡ
    */
    SS_CHAR* SSAPI slm_enum_device_easy(void);

    /*!
    *   @brief       ö��ָ���豸���������ID
    *   @param[in]   device_info   ָ��ĳ������½
    *   @param[out]  license_ids   ����������ɵ�ID���飬JSON��ʽ
    *   @return      ����������ɵ�ID���飬JSON��ʽ,��Ҫ���� slm_free_easy�ͷ�
    *   @remark      ����ͨ��slm_get_last_error ����
    *   @see slm_enum_device_easy slm_get_license_info_easy
    */
    SS_CHAR * SSAPI slm_enum_license_id_easy(
        IN const char   *device_info
        );

    /*!
    *   @brief       ��ȡָ���豸��ָ����ɵ�ȫ����Ϣ
    *   @param[in]   device_info   ָ��ĳ������½
    *   @param[in]   license_id    ָ�����ID
    *   @return      ������ɵ���ϢJSON��ʽ ��ͬ��slm_get_info_easy��LICENSE_INFO����Ҫ����slm_free_easy�ͷ�  
    *   @remark      ����ͨ��slm_get_last_error ����
    *   @see slm_enum_device_easy slm_enum_license_id_easy
    */
    SS_CHAR * SSAPI slm_get_license_info_easy(
        IN const char  *device_info,
        IN SS_UINT32    license_id
        );

    /*!
    *   @brief     �ͷ�API���ɵĻ�����
    *   @param[in] buffer     API���ɵĻ�����
    */
    void SSAPI slm_free_easy(IN void *buffer);

    /*!
    *   @brief   ö���ѵ�¼���û�token
    *   @return  SS_CHAR* access_token Ĭ���û���token
    *   @remark  ����ͨ��slm_get_last_error ����;SS_OK�����oauth��̨����δ�������򷵻�SS_ERROR_BAD_CONNECT��
    *            ����ֵ����slm_free_easy�ͷ�
    */
    SS_CHAR* SSAPI slm_get_cloud_token_easy(void);

    /*! 
    *   @brief       ��ȡ������ID
    *   @param[out]  szdeveloper_id     ������id HEX�ַ���
    *   @return      ����ʮ�������ַ������͵Ŀ�����ID
    *   @remark      ����ͨ��slm_get_last_error ����
    */
    SS_UINT32 SSAPI slm_get_developer_id_easy(char *szdeveloper_id);


    /*!
    *  @brief      ʹ���ѵ�¼����ɽ���ǩ��
    *  @param[in]  slm_handle      ��ɾ��
    *  @param[in]  sign_data       Ҫǩ�������ݣ�����16�ֽڣ����64�ֽڣ�
    *  @param[in]  sign_length,    Ҫǩ�������ݳ���
    *  @param[out] signature,      ǩ�����������
    *  @param[in]  max_buf_size,   ǩ�������������С
    *  @return     �ɹ�����ǩ�����ʵ�ʳ���
    *  @remark     ��������Ҫ����slm_get_laster_error����
    *  @see        slm_license_verify_easy
    */
    SS_UINT32 SSAPI slm_license_sign_easy(
        IN  SLM_HANDLE_INDEX   slm_handle,
        IN  SS_BYTE           *sign_data,
        IN  SS_UINT32          sign_length,
        OUT SS_BYTE           *signature,
        IN  SS_UINT32          max_buf_size
        );

    /*!
    *  @brief      �����ǩ��������ݽ�����ǩ
    *  @param[in]  sign_data        Ҫǩ�������ݣ�����16�ֽڣ����64�ֽڣ�
    *  @param[in]  sign_length,     Ҫǩ�������ݳ���
    *  @param[in]  signature        ǩ���������
    *  @param[in]  signature_length ǩ���������
    *  @return     ǩ��������Ϣ��json�ṹ������ʹ��ʱ����Ҫ����slm_free�ͷ�
    *  @remark    -����ɹ�����Ҫ����slm_free_easy �ͷ�sign_info  
    *             -��������Ҫ����slm_get_laster_error����
    *             -��ǩ���̿��Բ���¼���
    *  @code
         //json����
         {
         "type":2,                                   // 2��ʾ����
         "developer_id":0000000000000000,            // ������ID
         "license_id":0,                             // ���ID
         "guid":xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx,    // �û�guid�������;�����
         "sn":00000000000000000000000000000000,      // ���ţ������;�����
         "rand":0,                                   // �����
         }
    *  @see  slm_license_sign_easy slm_free_easy
    */
    SS_CHAR * SSAPI slm_license_verify_easy(
        IN  SS_BYTE      *sign_data,
        IN  SS_UINT32     sign_length,
        IN  SS_BYTE      *signature,
        IN  SS_UINT32     signature_length
        );

    /*!
    *   @brief      ��չ���ýӿ�
    *   @param[in]  config    ���ò�����JSON��
    *               1.slm_login ��չ������ָ����ɵ�¼���������������ַ��ע������ַURL���Ȳ��ó��� SLM_MAX_CLOUD_SERVER_LENGTH �궨�峤�ȡ�
    *                           {"api_slm_login":{"cloud_runtime_url":"http://rt.senseyun.com", "slock_url":"http://sl.senseyun.com"}}
    *   @return     �ɹ�����SS_OK��ʧ�ܷ�����Ӧ������
    *   @remarks    ��֧�ֶ��̵߳��ã����̰߳�ȫ���뱣֤��������ع�������֮ǰִ�С�
    */
    SS_UINT32 SSAPI slm_extensions_config_easy(
        IN const char *config
        );

#ifdef __cplusplus
}
#endif

#endif //_slm_runtime_easy_H_

