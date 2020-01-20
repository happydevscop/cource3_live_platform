#include "xrtmpstreamer.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char *argv[])
{
	OutputDebugString(L"start\n");
	QApplication a(argc, argv);
	XRtmpStreamer w;//创建一个窗口类。所有继承QWidget类都是窗口类。
	w.show();//显示窗口
	return a.exec();// a.exec(); 让程序一直执行，等待用户操作，也就是等待事件操作。
}

