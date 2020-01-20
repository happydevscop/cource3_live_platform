#include "XAudioRecord.h"
#include <qaudioinput.h>
#include <qmutex.h>
#include <iostream>
#include <list>

using namespace std;

class CXAudioRecord :public XAudioRecord
{
public:
	void run() {
		cout << "������Ƶ¼���̣߳�" << endl;
		int readSize = nbSamples*channels*sampleByte;
		char *buf = new char[readSize];
		while (!isExit)
		{
			//��ȡ��¼�Ƶ���Ƶ
			//һ�ζ�ȡһ֡��Ƶ
			if (input->bytesReady() < readSize)
			{
				QThread::msleep(1);
				continue;
			}
			
			int size = 0;
			while (size != readSize)
			{
				int len = io->read(buf + size, readSize - size);
				if (len < 0)break;
				size += len;
			}
			if (size != readSize)
			{		
				continue;
			}
			//�Ѿ���ȡһ֡��Ƶ
			long long pts = GetCurTime();
			Push(XData(buf, readSize,pts));
		}
		delete buf;
		cout << "�˳���Ƶ¼���߳�" << endl;
	}

	bool Init()
	{
		Stop();
		///1.qt��Ƶ��ʼ¼��
		QAudioFormat fmt;
		fmt.setSampleRate(sampleRate);//������44k
		fmt.setChannelCount(channels);//������2
		fmt.setSampleSize(sampleByte * 8);//�����ֽ�16
		fmt.setCodec("audio/pcm");
		fmt.setByteOrder(QAudioFormat::LittleEndian);
		fmt.setSampleType(QAudioFormat::UnSignedInt);
		QAudioDeviceInfo info = QAudioDeviceInfo::defaultInputDevice();//��ȡ��Ƶ�豸��Ϣ
		if (!info.isFormatSupported(fmt))//��Ϣ��ʽ֧��
		{
			cout << "Audio format not support!" << endl;
			fmt = info.nearestFormat(fmt);
		}

		input = new QAudioInput(fmt);
		//��ʼ¼����Ƶ
		io = input->start();
		if (!io)
			return false;
		return true;
	}

	void Stop()
	{		
		XDataThread::Stop();
		if(input)
			input->stop();
		if(io)
			io->close();
		input = NULL;
		io = NULL;
	}

	QAudioInput *input = NULL;
	QIODevice *io = NULL;
};
XAudioRecord *XAudioRecord::Get(XAUDIOTYPE type , unsigned char index )
{
	static CXAudioRecord record[255];
	return &record[index];
}

XAudioRecord::XAudioRecord()
{
}


XAudioRecord::~XAudioRecord()
{
}
