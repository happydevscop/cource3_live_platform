#pragma once
#include <qlabel.h>
class Mp4Streamer
{
public:
	static Mp4Streamer *Get()
	{
		static Mp4Streamer ms;
		return &ms;
	}
	~Mp4Streamer();

	void init(QLabel *l, QString s);
	void push_stream();
	QLabel *label;
	QString name;
protected:
	Mp4Streamer();
};


