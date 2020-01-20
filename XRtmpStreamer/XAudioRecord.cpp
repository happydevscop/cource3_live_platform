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
		cout << "进入音频录制线程！" << endl;
		int readSize = nbSamples*channels*sampleByte;
		char *buf = new char[readSize];
		while (!isExit)
		{
			//读取已录制的音频
			//一次读取一帧音频
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
			//已经读取一帧音频
			long long pts = GetCurTime();
			Push(XData(buf, readSize,pts));
		}
		delete buf;
		cout << "退出音频录制线程" << endl;
	}

	bool Init()
	{
		Stop();
		///1.qt音频开始录制
		QAudioFormat fmt;
		fmt.setSampleRate(sampleRate);//样本率44k
		fmt.setChannelCount(channels);//声道数2
		fmt.setSampleSize(sampleByte * 8);//样本字节16
		fmt.setCodec("audio/pcm");
		fmt.setByteOrder(QAudioFormat::LittleEndian);
		fmt.setSampleType(QAudioFormat::UnSignedInt);
		QAudioDeviceInfo info = QAudioDeviceInfo::defaultInputDevice();//获取音频设备信息
		if (!info.isFormatSupported(fmt))//信息格式支持
		{
			cout << "Audio format not support!" << endl;
			fmt = info.nearestFormat(fmt);
		}

		input = new QAudioInput(fmt);
		//开始录制音频
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
