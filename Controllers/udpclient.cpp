#include "UdpClient.h"
#include <QStringList>
#include <QNetworkDatagram>
#include <QDebug>

UdpClient::UdpClient(QObject *parent)
    : QObject(parent),
    m_speed(0.0f),
    m_rpm(0),
    m_accPedal(0),
    m_brakePedal(0),
    m_encoderAngle(0.0),
    m_temperature(0.0f),
    m_batteryLevel(0),
    m_gpsLongitude(0.0),
    m_gpsLatitude(0.0),
    m_speedFL(0),
    m_speedFR(0),
    m_speedBL(0),
    m_speedBR(0)
{
    m_socket = new QUdpSocket(this);
    connect(m_socket, &QUdpSocket::readyRead, this, &UdpClient::processPendingDatagrams);
}

bool UdpClient::start(quint16 port)
{
    if (!m_socket->bind(QHostAddress::Any, port)) {
        emit errorOccurred("Failed to bind UDP socket");
        return false;
    }
    qDebug() << "UDP Client listening on port" << port;
    return true;
}

float UdpClient::speed() const { return m_speed; }
void UdpClient::setSpeed(float newSpeed)
{
    if (qFuzzyCompare(m_speed, newSpeed))
        return;
    m_speed = newSpeed;
    emit speedChanged(m_speed);
}

int UdpClient::rpm() const { return m_rpm; }
void UdpClient::setRpm(int newRpm)
{
    if (m_rpm == newRpm)
        return;
    m_rpm = newRpm;
    emit rpmChanged(m_rpm);
}

int UdpClient::accPedal() const { return m_accPedal; }
void UdpClient::setAccPedal(int newAccPedal)
{
    if (m_accPedal == newAccPedal)
        return;
    m_accPedal = newAccPedal;
    emit accPedalChanged(m_accPedal);
}

int UdpClient::brakePedal() const { return m_brakePedal; }
void UdpClient::setBrakePedal(int newBrakePedal)
{
    if (m_brakePedal == newBrakePedal)
        return;
    m_brakePedal = newBrakePedal;
    emit brakePedalChanged(m_brakePedal);
}

double UdpClient::encoderAngle() const { return m_encoderAngle; }
void UdpClient::setEncoderAngle(double newAngle)
{
    if (qFuzzyCompare(m_encoderAngle, newAngle))
        return;
    m_encoderAngle = newAngle;
    emit encoderAngleChanged(m_encoderAngle);
}

float UdpClient::temperature() const { return m_temperature; }
void UdpClient::setTemperature(float newTemperature)
{
    if (qFuzzyCompare(m_temperature, newTemperature))
        return;
    m_temperature = newTemperature;
    emit temperatureChanged(m_temperature);
}

int UdpClient::batteryLevel() const { return m_batteryLevel; }
void UdpClient::setBatteryLevel(int newBatteryLevel)
{
    if (m_batteryLevel == newBatteryLevel)
        return;
    m_batteryLevel = newBatteryLevel;
    emit batteryLevelChanged(m_batteryLevel);
}

double UdpClient::gpsLongitude() const { return m_gpsLongitude; }
void UdpClient::setGpsLongitude(double newLongitude)
{
    if (qFuzzyCompare(m_gpsLongitude, newLongitude))
        return;
    m_gpsLongitude = newLongitude;
    emit gpsLongitudeChanged(m_gpsLongitude);
}

double UdpClient::gpsLatitude() const { return m_gpsLatitude; }
void UdpClient::setGpsLatitude(double newLatitude)
{
    if (qFuzzyCompare(m_gpsLatitude, newLatitude))
        return;
    m_gpsLatitude = newLatitude;
    emit gpsLatitudeChanged(m_gpsLatitude);
}

// New wheel speed getters and setters (as int)
int UdpClient::speedFL() const { return m_speedFL; }
void UdpClient::setSpeedFL(int newSpeedFL)
{
    if (m_speedFL == newSpeedFL)
        return;
    m_speedFL = newSpeedFL;
    emit speedFLChanged(m_speedFL);
}

int UdpClient::speedFR() const { return m_speedFR; }
void UdpClient::setSpeedFR(int newSpeedFR)
{
    if (m_speedFR == newSpeedFR)
        return;
    m_speedFR = newSpeedFR;
    emit speedFRChanged(m_speedFR);
}

int UdpClient::speedBL() const { return m_speedBL; }
void UdpClient::setSpeedBL(int newSpeedBL)
{
    if (m_speedBL == newSpeedBL)
        return;
    m_speedBL = newSpeedBL;
    emit speedBLChanged(m_speedBL);
}

int UdpClient::speedBR() const { return m_speedBR; }
void UdpClient::setSpeedBR(int newSpeedBR)
{
    if (m_speedBR == newSpeedBR)
        return;
    m_speedBR = newSpeedBR;
    emit speedBRChanged(m_speedBR);
}

void UdpClient::processPendingDatagrams()
{
    while (m_socket->hasPendingDatagrams()) {
        QNetworkDatagram datagram = m_socket->receiveDatagram();
        QString data = QString::fromUtf8(datagram.data()).trimmed();
        // Expected format:
        // "speed,rpm,accPedal,brakePedal,encoderAngle,temperature,batteryLevel,
        //  gpsLongitude,gpsLatitude,speedFL,speedFR,speedBL,speedBR"
        QStringList parts = data.split(",");
        if (parts.size() >= 13) {
            bool okSpeed = false, okRpm = false, okAcc = false, okBrake = false;
            bool okAngle = false, okTemp = false, okBattery = false;
            bool okGpsLon = false, okGpsLat = false;
            bool okWSFL = false, okWSFR = false, okWSBL = false, okWSBR = false;
            float newSpeed = parts[0].toFloat(&okSpeed);
            int newRpm = parts[1].toInt(&okRpm);
            int newAcc = parts[2].toInt(&okAcc);
            int newBrake = parts[3].toInt(&okBrake);
            double newAngle = parts[4].toDouble(&okAngle);
            float newTemp = parts[5].toFloat(&okTemp);
            int newBattery = parts[6].toInt(&okBattery);
            double newGpsLon = parts[7].toDouble(&okGpsLon);
            double newGpsLat = parts[8].toDouble(&okGpsLat);
            int newWSFL = parts[9].toInt(&okWSFL);
            int newWSFR = parts[10].toInt(&okWSFR);
            int newWSBL = parts[11].toInt(&okWSBL);
            int newWSBR = parts[12].toInt(&okWSBR);

            if (okSpeed) {
                setSpeed(newSpeed);
                qDebug() << "New Speed:" << newSpeed;
            }
            if (okRpm) {
                setRpm(newRpm);
                qDebug() << "New RPM:" << newRpm;
            }
            if (okAcc) {
                setAccPedal(newAcc);
                qDebug() << "New Accelerator Pedal:" << newAcc;
            }
            if (okBrake) {
                setBrakePedal(newBrake);
                qDebug() << "New Brake Pedal:" << newBrake;
            }
            if (okAngle) {
                setEncoderAngle(newAngle);
                qDebug() << "New Encoder Angle:" << newAngle;
            }
            if (okTemp) {
                setTemperature(newTemp);
                qDebug() << "New Temperature:" << newTemp;
            }
            if (okBattery) {
                setBatteryLevel(newBattery);
                qDebug() << "New Battery Level:" << newBattery;
            }
            if (okGpsLon) {
                setGpsLongitude(newGpsLon);
                qDebug() << "New GPS Longitude:" << newGpsLon;
            }
            if (okGpsLat) {
                setGpsLatitude(newGpsLat);
                qDebug() << "New GPS Latitude:" << newGpsLat;
            }
            if (okWSFL) {
                setSpeedFL(newWSFL);
                qDebug() << "New Wheel Speed FL:" << newWSFL;
            }
            if (okWSFR) {
                setSpeedFR(newWSFR);
                qDebug() << "New Wheel Speed FR:" << newWSFR;
            }
            if (okWSBL) {
                setSpeedBL(newWSBL);
                qDebug() << "New Wheel Speed BL:" << newWSBL;
            }
            if (okWSBR) {
                setSpeedBR(newWSBR);
                qDebug() << "New Wheel Speed BR:" << newWSBR;
            }
        }
    }
}
