#include "xrtmpstreamer.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char *argv[])
{
	OutputDebugString(L"start\n");
	QApplication a(argc, argv);
	XRtmpStreamer w;//����һ�������ࡣ���м̳�QWidget�඼�Ǵ����ࡣ
	w.show();//��ʾ����
	return a.exec();// a.exec(); �ó���һֱִ�У��ȴ��û�������Ҳ���ǵȴ��¼�������
}

