#include "QRHDesktopAppServices.h"
#include "QRHLoginDialog.h"

#include <QDebug>

QRHDesktopAppServices::QRHDesktopAppServices(int &argc, char **argv) : QRHDesktopAppCore(argc,argv)
{
    qDebug() << "Desktop App Services Created";
    promtUserLogin();
}

QRHDesktopAppServices::~QRHDesktopAppServices()
{
    qDebug() << "Desktop App Services Deleted";
}

bool QRHDesktopAppServices::promtUserLogin()
{
    QRHLoginDialog loginDialog;
    loginDialog.setModal(true);
    loginDialog.exec();

    return false;
}
