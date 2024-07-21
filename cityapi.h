#ifndef CITYAPI_H
#define CITYAPI_H

#include <QObject>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
class CityAPI : public QObject
{
    Q_OBJECT
public:
    CityAPI(QString url);
    void update(QString url);
private slots:
    void onWeatherDataReceived(QNetworkReply *reply);

private:
    double _TEMP_ = -100;
    QNetworkAccessManager *networkManager;
};

#endif // CITYAPI_H
