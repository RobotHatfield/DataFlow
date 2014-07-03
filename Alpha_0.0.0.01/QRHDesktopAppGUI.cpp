#include "QRHDesktopAppGui.h"

#include <QDebug>
#include <QSettings>
//#include <QtWidgets>

QRHDesktopAppGui::QRHDesktopAppGui(QRHDesktopAppServices *services) : QMainWindow()
{
    qDebug() << "Desktop App GUI Created";
}

QRHDesktopAppGui::~QRHDesktopAppGui()
{
    writeSettings();
    qDebug() << "Desktop App GUI Deleted";
}

void QRHDesktopAppGui::readSettings()
{
    qDebug() << "Writing Settings";
    QSettings settings;
    settings.beginGroup("MainWindow");
    resize(settings.value("size", QSize(400, 400)).toSize());
    move(settings.value("pos", QPoint(200, 200)).toPoint());
    settings.endGroup();
}

void QRHDesktopAppGui::writeSettings()
{
    QSettings settings;
    settings.beginGroup("MainWindow");
    settings.setValue("size", size());
    settings.setValue("pos", pos());
    settings.endGroup();
}
