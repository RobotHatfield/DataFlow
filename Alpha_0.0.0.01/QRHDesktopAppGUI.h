#ifndef QRHDESKTOPAPPGUI_H
#define QRHDESKTOPAPPGUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QRHDesktopAppServices;
class QSettings;
QT_END_NAMESPACE

class QRHDesktopAppGui : public QMainWindow
{
    Q_OBJECT

public:
    QRHDesktopAppGui(QRHDesktopAppServices *s);
    ~QRHDesktopAppGui();

private:
    void readSettings();
    void writeSettings();
    //QSettings *settings;
};

#endif // QRHDESKTOPAPPGUI_H
