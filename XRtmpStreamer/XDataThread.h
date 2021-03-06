#pragma once
#include <qthread.h>
#include "XData.h"
#include <list>
#include <qmutex.h>
class XDataThread:public QThread
{
public:
	//（缓冲列表大小）列表最大值，超出删除最旧的数据
	int maxList = 100;
	//在列表结尾插入
	virtual void Push(XData d) ;
	//读取列表中最早的数据,返回数据需要调用XData.Drop清理
	virtual XData Pop() ;
	//启动线程
	virtual bool Start() ;
	//退出线程，并等待线程退出（阻塞）
	virtual void Stop() ;
	virtual void Clear();

	XDataThread();
	virtual ~XDataThread();
protected:
	//存放交互数据，插入策略 先进先出
	std::list<XData> datas;
	//交互数据列表大小
	int dataCount = 0;
	//互斥访问datas
	QMutex mutex;
	//垂立线程退出
	bool isExit = false;
};

