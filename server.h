#ifndef SERVER_H
#define SERVER_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>
#include <QRandomGenerator>

QT_BEGIN_NAMESPACE
namespace Ui {
class Server;
}
QT_END_NAMESPACE

class Server : public QWidget
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = nullptr);
    ~Server() override;

private:
    Ui::Server *ui;
    //socket servidor
    QTcpServer *serverSocket = nullptr;
    // contenedor de mensajes
    QVector<QString> randomMessages;

// actividades para iniciar el servidor
    void initServer ();


private slots:
    // recibida el signal de solicitud, responderemos con este slot
    void sendRandomMessage();
};
#endif // SERVER_H
