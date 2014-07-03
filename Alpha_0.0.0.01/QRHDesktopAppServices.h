#ifndef QRHDESKTOPAPPSERVICES_H
#define QRHDESKTOPAPPSERVICES_H

#include "QRHDesktopAppCore.h"

class QRHDesktopAppServices : public QRHDesktopAppCore
{
    Q_OBJECT
public:
    QRHDesktopAppServices(int &argc,char **argv);
    ~QRHDesktopAppServices();

signals:

public slots:

private:
    bool promtUserLogin();
};

#endif // QRHDESKTOPAPPSERVICES_H
