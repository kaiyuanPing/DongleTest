
#ifndef _SS_LM_UPDATE_H
#define _SS_LM_UPDATE_H

#include "ss_define.h"

#ifdef __cplusplus
extern "C"{
#endif
/*!
*   @brief      ��D2C������������D2C����d2cAPI����
*   @param[in]  d2c_pkg     d2c�ļ�����
*   @param[out] error_msg   ������Ϣ����Ҫ����slm_free�ͷ�
*   @return     �ɹ�����SS_OK��ʧ�ܷ��ش�����
*   @remarks:   D2C���ڿ��ܰ����������ݣ���˷��صĴ�������ϢҲ��json����ṹ����Ҫ�ֱ����
*   @code
*     [
*       {"pkg_order":1, "pkg_desc":"package decription.", "status": 0},
*       {"pkg_order":2, "pkg_desc":"package decription.", "status": 0}
*     ]
*   @endcode
*/
SS_UINT32 SSAPI slm_update(char* d2c_pkg, char** error_msg);

/*!
*   @brief      ��D2C��������������ָ��������Ψһ���кţ�D2C����d2cAPI����
*   @param[in]  lock_sn     ���ţ�Ψһ���к�,ʮ�������ַ�����
*   @param[in]  d2c_pkg     d2c�ļ�����
*   @param[out] error_msg   ������Ϣ����ʹ����Ҫ����slm_free�ͷ�
*   @return     �ɹ�����SS_OK��ʧ�ܷ��ش�����
*   @remarks:  D2C���ڿ��ܰ����������ݣ���˷��صĴ�������ϢҲ��json����ṹ����Ҫ�ֱ����
*   @code
*     [
*       {"pkg_order":1, "pkg_desc":"package decription.", "status": 0},
*       {"pkg_order":2, "pkg_desc":"package decription.", "status": 0}
*     ]
*   @endcode
*   @see    slm_update
*/
SS_UINT32 SSAPI slm_update_ex(SS_BYTE* lock_sn, char* d2c_pkg, char** error_msg);

/*!
*   @brief      ���ڶ�����������ָ��������Ψһ���кţ������ڿ�ִ���㷨��ϣ���֧��Ӳ������
*   @param[in]  lock_sn     ���ţ�Ψһ���к�,ʮ�������ַ�����
*   @param[in]  inside_file ���ڶ����ļ���
*   @return     �ɹ�����SS_OK��ʧ�ܷ��ش�����
*   @remarks    VirboxLM �ṩ��ͨ�����뼤�����Ӳ����������һ�� Virbox��ɣ��ù�����Ҫͨ����ִ���㷨����ϣ��򵥵Ĳ�������Ϊ��
*               ��һ��������������֧�ֶ��뼤���ʹ���ļ�slac_enable.evd���ļ��������⣬��С��ò�����256�ֽڣ�
*               �ڶ�������д���ڿ�ִ���㷨��������˼�ṩ��h5ses.lib��h5ses_lm.lib�⣬ʵ�ֶ���ת���Ĺ��̣�
*               ��������ͨ��ִ�����ڿ�ִ���㷨�������� slm_execute_static �� ������������ݣ���ʹ���ڿ�ִ���㷨�����ڽ�����ת��Ϊ
*                       Ӳ������ʶ����м��ļ����ļ����������趨����
*               ���Ĳ���ͨ������slm_d2c_update_inside �ӿڣ����������ɵ��м��ļ�ת��Ϊ��ʽ�� Virbox��ɡ�
*
*               �ر�˵�������뼤���ʹ�ý�Ϊ���ӣ���Ҫд���ڴ���ļ���Ҫ������������Ҫʹ�ô˹��ܣ�����ϵ��˼�����������֧�֡�
*   @code
*       {
*           SS_UINT32 status = SS_OK;
*           SS_BYTE   data_buf[1024] = { 0 };
*           SS_UINT32 data_size = 0;
*           char *sn = "9733c80100070205106100030015000c";
*
*           memcpy(data_buf, "1234567890", 10);
*
*           status = slm_execute_static(slm_handle, "test.evx", NULL, 0, data_buf, 10, &data_size);
*           if(status != SS_OK)
*           {
*               // todo: deal error code
*           }
*
*           status = slm_d2c_update_inside(sn, "test.evd");
*           if(status != SS_OK)
*           {
*               // todo: deal error code
*           }
*       }
*   @endcode
*   @see    slm_execute_static
*/
SS_UINT32 SSAPI slm_d2c_update_inside(
    IN char*     lock_sn,
    IN char*        inside_file
    );

/*!
*   @brief      ����D2C������Ϣ
*	@param[in]	d2c_stream	d2c������
*	@param[out]	d2c_buffer  ���հ������Ļ�����
*	@param[in]	max_buf_len d2c_buffer�Ĵ�С
*	@param[out]	out_buf_len ��ȡ�İ������Ĵ�С
*	@return		�ɹ�����SS_OK��ʧ�ܷ�����Ӧ�Ĵ�����
*	@remark     �˽ӿ����ڽ���D2C�����������ݣ���Ҫ��ȡ������Ϣ�������ݣ��������ȡ�
*   @code
*       {
*           "serial": "0102030405060708", 
*           "pkg":[
*                   {"pkg_order": 1, "pkg_desc":"add_pkg"},
*                   {"pkg_order":2, "pkg_desc": "delete_pkg"}
*                 ]
*       }
*   @endcode
*/
SS_UINT32 SSAPI package_parse( const char* d2c_stream, char* d2c_buffer, int max_buf_len, int* out_buf_len);

#ifdef __cplusplus
}
#endif


#endif
