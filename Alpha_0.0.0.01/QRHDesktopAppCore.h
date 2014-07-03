#ifndef QRHDESKTOPAPPCORE_H
#define QRHDESKTOPAPPCORE_H

#include <QApplication>

#include "QRHCoreSettings.h"

QT_BEGIN_NAMESPACE
class QTimer;
QT_END_NAMESPACE

class QRHDesktopAppCore : public QApplication
{
    Q_OBJECT
public:
    explicit QRHDesktopAppCore(int &argc,char **argv);
    ~QRHDesktopAppCore();

    QRHCoreSettings coreSettingsObj;

signals:
    QString getCompanyNamefromSettings();

public slots:

private:
    void makeConnections();
    void applicationStart();
    void readCoreSttings();
    void writeCoreSettings();

    QTimer *userTimeoutTimer;

};

#endif // QRHDESKTOPAPPCORE_H
