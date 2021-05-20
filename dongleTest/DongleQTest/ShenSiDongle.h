#pragma once
#include <QObject>
class ShenSiDongle :public QObject
{
	Q_OBJECT
public:
	ShenSiDongle();
private:	
	unsigned int m_handle;
	const int m_iLicenseId;
	static const unsigned char s_gPassword[16];

	QByteArray calHash(const QString& );
private slots:
	void dongleInit();
	void write();
	void read();
	void encrypt();
	void decrypt();
	void dongleDelete();
};

