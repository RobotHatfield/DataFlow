#include "QRHCoreSettings.h"

#include <QDebug>

QRHCoreSettings::QRHCoreSettings(QObject *parent) :
    QObject(parent)
{
    qDebug() << "App Core Settings Created";
    initializeVariables();
}

QRHCoreSettings::~QRHCoreSettings()
{
    qDebug() << "App Core Settings Deleted";
}

void QRHCoreSettings::initializeVariables()
{
    autenticationProvider = 0;
    userLoggedIn = false;
    companyName = "";
    lastUserName = "";
    timeOutDuration = 0;
}
