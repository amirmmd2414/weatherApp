#include "cityapi.h"

CityAPI::CityAPI(QString url) {
    networkManager = new QNetworkAccessManager(this);
    connect(networkManager,&QNetworkAccessManager::finished,this,&CityAPI::onWeatherDataReceived);
    update(url);
}


void CityAPI :: update(QString url){
    QNetworkRequest Request;
    Request.setUrl(QUrl(url));
    networkManager->get(Request);
}





void CityAPI :: onWeatherDataReceived(QNetworkReply *reply){
    if(reply->error() == QNetworkReply::NoError){
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        QJsonObject jsonObj = jsonDoc.object();
        QJsonObject mainObj = jsonObj.value("main").toObject();
        double temperature = mainObj.value("temp").toDouble();
        _TEMP_ = temperature;
    }
    else{qDebug() << "Error";}
    reply->deleteLater();
}
