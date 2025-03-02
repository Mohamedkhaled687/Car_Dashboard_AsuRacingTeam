#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<Controllers/udpclient.h>
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    UdpClient client;

    engine.rootContext()->setContextProperty("udpClient", &client);


    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Car_Dashboard", "Main");

    return app.exec();
}
