#ifndef QRHCORESETTINGS_H
#define QRHCORESETTINGS_H

#include <QObject>
#include <QString>

QT_BEGIN_NAMESPACE
class QString;
QT_END_NAMESPACE

class QRHCoreSettings : public QObject
{
    Q_OBJECT
public:
    explicit QRHCoreSettings(QObject *parent = 0);
    ~QRHCoreSettings();

signals:

public slots:
    bool getUserLoggedIn(){return userLoggedIn;}
    void setUserLoggedIn(bool uLI){userLoggedIn = uLI;}

    int getAutenticationProvider(){return autenticationProvider;}
    void setAutenticationProvider(bool authProvider){autenticationProvider = authProvider;}

    QString getCompanyName(){return companyName;}
    void setCompanyName(QString compName){companyName = compName;}

private:
    int autenticationProvider;
    bool userLoggedIn;
    QString companyName;
    QString lastUserName;
    int timeOutDuration;

    void initializeVariables();
};

#endif // QRHCORESETTINGS_H
