#include "QRHDesktopAppCore.h"
#include "QRHCoreSettings.h"

#include <QDebug>
#include <QSettings>


QRHDesktopAppCore::QRHDesktopAppCore(int &argc,char **argv) : QApplication(argc,argv)
{
    makeConnections();
    applicationStart();
    qDebug() << "Desktop App Core Created";
}

QRHDesktopAppCore::~QRHDesktopAppCore()
{
    writeCoreSettings();
    qDebug() << "Desktop App Core Deleted";
}

void QRHDesktopAppCore::makeConnections()
{
    connect(this,SIGNAL(getCompanyNamefromSettings()),&coreSettingsObj,SLOT(getCompanyName()));
}

void QRHDesktopAppCore::readCoreSttings()
{
    /* user Timeout length
     * last user logged in
     *
     * */
    QSettings coreSettings(tr("Nerds"),tr("DataFlow ERP System"));

    coreSettings.beginGroup("Core");
    coreSettingsObj.setCompanyName(coreSettings.value("Company_Name").toString());
    //qDebug() << "Company Name: " << coreSettingsObj.getCompanyName();
    //coreSettings.~QSettings();
    coreSettings.endGroup();
}

void QRHDesktopAppCore::writeCoreSettings()
{
    QSettings coreSettings(tr("Nerds"),tr("DataFlow ERP System"));

    coreSettings.beginGroup("Core");
    coreSettings.setValue("Company_Name", coreSettingsObj.getCompanyName());
    coreSettings.endGroup();
}

void QRHDesktopAppCore::applicationStart()
{
    readCoreSttings();

    /*if(userTimeoutTimer)
    {
        qDebug() << "User logged in: " << coreSettingsObj.getUserLoggedIn();
    }*/
}
