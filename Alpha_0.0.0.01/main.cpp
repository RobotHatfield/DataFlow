#include "QRHDesktopAppServices.h"
#include "QRHDesktopAppGUI.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QRHDesktopAppServices s(argc, argv);
    //s.setOrganizationName(s. coreSettingsObj.getCompanyName());
    //s.setOrganizationName(s.getCompanyNamefromSettings());
    //qDebug() << "Company Name: " << s.getCompanyNamefromSettings();
    //s.setApplicationName("DataFlow ERP System 111");
    QRHDesktopAppGui g(&s);
    g.show();

    return s.exec();
}
