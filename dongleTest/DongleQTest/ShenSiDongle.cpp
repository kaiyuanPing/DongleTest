#include "ShenSiDongle.h"
#include "ss_lm_runtime.h" 
#include <QTest>
/*
* 解决提示： VS2015 及以上版本编译失败，提示无法解析的外部符号 __iob_func()。
*            由于编译器版本引起的问题。
*/
#if _MSC_VER>=1900
#include "stdio.h" 
_ACRTIMP_ALT FILE* __cdecl __acrt_iob_func(unsigned);
#ifdef __cplusplus 
extern "C"
#endif


FILE * __cdecl __iob_func(unsigned i) {
	return __acrt_iob_func(i);
}
#endif /* _MSC_VER>=1900 */
const unsigned char ShenSiDongle::s_gPassword[16]{ 0xC8,0xF8,0x57,0x34,0x07,0x15,0x6B,0x08,0x1A,0x51,0x76,0x59,0x06,0x37,0xA5,0x9E };
ShenSiDongle::ShenSiDongle() :
	m_handle(0),
	m_iLicenseId(1)
{

}
void ShenSiDongle::dongleInit()
{
	SS_UINT32 ret = SS_OK;
	ST_INIT_PARAM st_init_param = { 0 };
	ST_LOGIN_PARAM login_param = { 0 };

	// 初始化接口调用，参数初始化
	st_init_param.version = SLM_CALLBACK_VERSION02;
	st_init_param.pfn = NULL;
	st_init_param.flag = SLM_INIT_FLAG_NOTIFY;
	memcpy(st_init_param.password, s_gPassword, sizeof(s_gPassword));
	ret = slm_init(&(st_init_param));

	if (SS_ERROR_DEVELOPER_PASSWORD == ret)
	{
		QFAIL("slm_init error : SS_ERROR_DEVELOPER_PASSWORD");
	}
	else if (SS_OK != ret)
	{
		QFAIL("slm_init error");
	}
	// 安全登录许可
	login_param.license_id = m_iLicenseId;
	login_param.size = sizeof(ST_LOGIN_PARAM);
	login_param.timeout = 86400;
	ret = slm_login(&login_param, STRUCT, &m_handle, NULL);
	if (SS_OK != ret)
	{
		QFAIL("slm_login error");
	}
}

void ShenSiDongle::write()
{
	SS_CHAR* testWrite = "12345";
	SS_UINT32 ulRAWLen = 0;
	SS_UINT32 ret = slm_user_data_getsize(m_handle, RAW, &ulRAWLen);
	SS_UINT32 iOffset = 0;

	if (SS_OK != ret)
	{
		QFAIL("slm_user_data_getsize[RAW] error");
	}

	iOffset = 0;
	ret = slm_user_data_write(m_handle, (SS_BYTE*)testWrite, iOffset, 5);
}

void ShenSiDongle::read()
{
	SS_BYTE testdata[256]{ 0 };
	SS_UINT32 ret = slm_user_data_read(m_handle, RAW, testdata, 0, 9);
	QVERIFY2(QString("12345") == QString(QLatin1String((char*)testdata)),"slm_user_data_read[RAW][OFFSET] error");
}

void ShenSiDongle::dongleDelete()
{
	slm_cleanup();
}
