#ifndef UDPCLIENT_H
#define UDPCLIENT_H
#include <QObject>
#include <QUdpSocket>
class UdpClient : public QObject
{
    Q_OBJECT
    Q_PROPERTY(float speed READ speed WRITE setSpeed NOTIFY speedChanged)
    Q_PROPERTY(int rpm READ rpm WRITE setRpm NOTIFY rpmChanged)
    Q_PROPERTY(int accPedal READ accPedal WRITE setAccPedal NOTIFY accPedalChanged)
    Q_PROPERTY(int brakePedal READ brakePedal WRITE setBrakePedal NOTIFY brakePedalChanged)
    Q_PROPERTY(double encoderAngle READ encoderAngle WRITE setEncoderAngle NOTIFY encoderAngleChanged)
    Q_PROPERTY(float temperature READ temperature WRITE setTemperature NOTIFY temperatureChanged)
    Q_PROPERTY(int batteryLevel READ batteryLevel WRITE setBatteryLevel NOTIFY batteryLevelChanged)
    Q_PROPERTY(double gpsLongitude READ gpsLongitude WRITE setGpsLongitude NOTIFY gpsLongitudeChanged)
    Q_PROPERTY(double gpsLatitude READ gpsLatitude WRITE setGpsLatitude NOTIFY gpsLatitudeChanged)
    Q_PROPERTY(int speedFL READ speedFL WRITE setSpeedFL NOTIFY speedFLChanged)
    Q_PROPERTY(int speedFR READ speedFR WRITE setSpeedFR NOTIFY speedFRChanged)
    Q_PROPERTY(int speedBL READ speedBL WRITE setSpeedBL NOTIFY speedBLChanged)
    Q_PROPERTY(int speedBR READ speedBR WRITE setSpeedBR NOTIFY speedBRChanged)
public:
    explicit UdpClient(QObject *parent = nullptr);
    // Bind UDP socket to the specified port.
    // Make it invokable so it can be called from QML
    Q_INVOKABLE bool start(quint16 port);
    float speed() const;
    void setSpeed(float newSpeed);
    int rpm() const;
    void setRpm(int newRpm);
    int accPedal() const;
    void setAccPedal(int newAccPedal);
    int brakePedal() const;
    void setBrakePedal(int newBrakePedal);
    double encoderAngle() const;
    void setEncoderAngle(double newAngle);
    float temperature() const;
    void setTemperature(float newTemperature);
    int batteryLevel() const;
    void setBatteryLevel(int newBatteryLevel);
    double gpsLongitude() const;
    void setGpsLongitude(double newLongitude);
    double gpsLatitude() const;
    void setGpsLatitude(double newLatitude);
    // New wheel speed getters/setters (as int)
    int speedFL() const;
    void setSpeedFL(int newSpeedFL);
    int speedFR() const;
    void setSpeedFR(int newSpeedFR);
    int speedBL() const;
    void setSpeedBL(int newSpeedBL);
    int speedBR() const;
    void setSpeedBR(int newSpeedBR);
signals:
    void speedChanged(float newSpeed);
    void rpmChanged(int newRpm);
    void accPedalChanged(int newAccPedal);
    void brakePedalChanged(int newBrakePedal);
    void encoderAngleChanged(double newAngle);
    void temperatureChanged(float newTemperature);
    void batteryLevelChanged(int newBatteryLevel);
    void gpsLongitudeChanged(double newLongitude);
    void gpsLatitudeChanged(double newLatitude);
    void errorOccurred(const QString &error);
    // New signals for wheel speeds as int:
    void speedFLChanged(int newSpeedFL);
    void speedFRChanged(int newSpeedFR);
    void speedBLChanged(int newSpeedBL);
    void speedBRChanged(int newSpeedBR);
private slots:
    void processPendingDatagrams();
private:
    QUdpSocket *m_socket;
    float m_speed;
    int m_rpm;
    int m_accPedal;
    int m_brakePedal;
    double m_encoderAngle;
    float m_temperature;
    int m_batteryLevel;
    double m_gpsLongitude;
    double m_gpsLatitude;
    // New private members for wheel speeds as integers
    int m_speedFL;
    int m_speedFR;
    int m_speedBL;
    int m_speedBR;
};
#endif // UDPCLIENT_H
