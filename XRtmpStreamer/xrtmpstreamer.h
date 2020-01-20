#pragma once

#include <QtWidgets/QWidget>
#include "ui_xrtmpstreamer.h"
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QFileDialog>

class XRtmpStreamer : public QWidget
{
	Q_OBJECT

public:
	XRtmpStreamer(QWidget *parent = Q_NULLPTR);

public slots:
	void Stream();
	void Stream_mp4();
	void push_mp4();
private:
	Ui::XRtmpStreamerClass ui;
	QCamera* camera;
	QCameraViewfinder* viewfinder;
};
