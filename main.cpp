#include <QCoreApplication>
#include <QNetworkRequest>
#include <QtSql>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QNetworkRequest request;
    request.setUrl(QUrl("https://netology.ru"));

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("postgress");
    db.setDatabaseName("mydb");
    db.setUserName("name");
    db.setPassword("123");
    db.open() ;

    return a.exec();
}
