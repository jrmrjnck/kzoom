#include "ZoomWidget.h"

#include <QDBusInterface>
#include <QDBusConnection>

ZoomWidget::ZoomWidget( QWidget* parent, Qt::WindowFlags f )
 : QWidget(parent,f)
{
   setupUi( this );

   _kwinIf = new QDBusInterface( "org.kde.kglobalaccel",
                                 "/component/kwin",
                                 "org.kde.kglobalaccel.Component",
                                 QDBusConnection::sessionBus(),
                                 this );
}

ZoomWidget::~ZoomWidget()
{
}

void ZoomWidget::zoomIn() const
{
   _kwinIf->call( "invokeShortcut", "view_zoom_in" );
}

void ZoomWidget::zoomOut() const
{
   _kwinIf->call( "invokeShortcut", "view_zoom_out" );
}
