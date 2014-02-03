#ifndef ZOOMWIDGET_H
#define ZOOMWIDGET_H

#include "ui_ZoomWidget.h"

#include <QWidget>

class QDBusInterface;

class ZoomWidget : public QWidget, private Ui::ZoomWidget
{
Q_OBJECT;
public:
   ZoomWidget( QWidget* parent = NULL, Qt::WindowFlags f = 0 );
   ~ZoomWidget();

public slots:
   void zoomIn() const;
   void zoomOut() const;

private:
   QDBusInterface* _kwinIf;
};

#endif // !ZOOMWIDGET_H
