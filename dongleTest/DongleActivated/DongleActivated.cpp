#include "DongleActivated.h"
#include <QTextStream>
#include <QFileDialog>
DongleActivated::DongleActivated(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}
void DongleActivated::slotReadSi()
{
	QString sn;
	QString sFilename = "";
	QString filepath = QFileDialog::getOpenFileName(NULL, "ѡ��#SI�ļ�", "", "txt(*.txt)");
	if (!filepath.isEmpty())
	{
		QFile f(filepath);
		if (f.open(QIODevice::ReadOnly | QIODevice::Text))//��ָ���ļ�
		{
			QTextStream txtInput(&f);
			QString lineStr;
			while (!txtInput.atEnd())
			{
				lineStr = txtInput.readLine();  //��ȡ����
				if (lineStr.contains("Controller Serial Number:"))
				{
					lineStr.replace("Controller Serial Number:", "").simplified();
					sn = lineStr;
					activateDongle(sn);
					break;
				}
			}
		}
		f.close();
	}
}

void DongleActivated::activateDongle(const QString& theSn)
{

}
