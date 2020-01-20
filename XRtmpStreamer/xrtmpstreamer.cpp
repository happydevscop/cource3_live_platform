#include "xrtmpstreamer.h"
#include <iostream>
#include <qfiledialog.h>
#include "XController.h"
#include "Mp4Streamer.h"
using namespace std;
static bool isStream = false;
XRtmpStreamer::XRtmpStreamer(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	camera = new QCamera(this);
	viewfinder = new QCameraViewfinder(this);
	ui.ImageView->addWidget(viewfinder);

	camera->setViewfinder(viewfinder);
	camera->start();
}

//ֱ������
void XRtmpStreamer::Stream()
{
	camera->stop();
	cout << "stream";
	if (isStream)
	{
		isStream = false;
		ui.pushButton->setText(QString::fromLocal8Bit("��ʼ"));
		XController::Get()->Stop  ();
	}
	else
	{
		isStream = true;
		ui.pushButton->setText(QString::fromLocal8Bit("ֹͣ"));
		QString url = ui.inUrl->text();
		bool ok = false;
		int camIndex = url.toInt(&ok);
		if (!ok)
		{
			XController::Get()->inUrl = url.toStdString();
		}
		else
		{                                                                                                                                                                                                                                                                  
			XController::Get()->camIndex = camIndex;
		}
		XController::Get()->outUrl = ui.outUrl->text().toStdString();
		XController::Get()->Set("b", (ui.face->currentIndex() + 1) * 3);//���ռ���
		XController::Get()->Start();
	}
}

//ѡ���ļ�
void XRtmpStreamer::Stream_mp4()
{
	cout << "Stream_mp4()\n";
	QString name = QFileDialog::getOpenFileName(
		this, QString::fromLocal8Bit("ѡ����Ƶ�ļ�"));//��ȡ��Ƶ�ļ�·��
	string outUrl = ui.outUrl->text().toStdString();//������ַ
	if (name.isEmpty())
		return;
	ui.lineEdit->setText(name);
	
	Mp4Streamer::Get()->init(ui.label, name);
	cout << "start pushing mp4 to " << outUrl << endl;
}

void XRtmpStreamer::push_mp4()
{
	Mp4Streamer::Get()->push_stream();
}