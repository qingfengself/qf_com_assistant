#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QMessageBox>
#include <QLabel>
#include <QMap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    struct SerialPortSettings {
        QString name;
        qint32 baudRate;
        QString stringBaudRate;
        QSerialPort::DataBits dataBits;
        QString stringDataBits;
        QSerialPort::Parity parity;
        QString stringParity;
        QSerialPort::StopBits stopBits;
        QString stringStopBits;
        QSerialPort::FlowControl flowControl;
        QString stringFlowControl;
        bool localEchoEnabled;
    };

/** gear */
#define CARINFO_GEAR_P (0X01)
#define CARINFO_GEAR_R (0X02)
#define CARINFO_GEAR_N (0X03)
#define CARINFO_GEAR_D (0X04)
#define CARINFO_GEAR_M (0X05) /* manual */
#define CARINFO_GEAR_I (0X07) /* intermediate position */

/** carInfo */
#define CARINFO_STATE_STEERINGWHEEL_MIDDLE  (0X10)
#define CARINFO_STATE_STEERINGWHEEL_LEFT    (0X20)
#define CARINFO_STATE_STEERINGWHEEL_RIGHT   (0X30)

#define CARINFO_STATE_INNER_LIGHT           (0X40)
#define CARINFO_STATE_PARKING_LIGHT         (0X80)

#define CARINFO_STATE_LEFT_TURN             (0X01)
#define CARINFO_STATE_RIGHT_TURN            (0X02)
#define CARINFO_STATE_HIGH_BEAM             (0X04)
#define CARINFO_STATE_LOW_BEAM              (0X08)
#define CARINFO_STATE_TROUBLE_LIGHT         (0X10)
#define CARINFO_STATE_POSITION_LIGHT        (0X20)
#define CARINFO_STATE_REAR_FOG_LIGHT        (0X40)
#define CARINFO_STATE_FRONT_FOG_LIGHT       (0X80)

#define CARINFO_STATE_ACCELERATOR_PEDAL     (0X01)
#define CARINFO_STATE_FOOT_BRAKE            (0X02)
#define CARINFO_STATE_HAND_BRAKE            (0X04)
#define CARINFO_STATE_SAFETY_BELT           (0X08)
#define CARINFO_STATE_DRIVER_DOOR           (0X10)
#define CARINFO_STATE_PASSENGER_DOOR        (0X20)
#define CARINFO_STATE_REAR_LEFT_DOOR        (0X40)
#define CARINFO_STATE_REAR_RIGHT_DOOR       (0X80)



public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_connectAndDisconnect_clicked();
    void on_pushButton_refresh_clicked();
    void on_pushButton_sendInput_clicked();
    void on_pushButton_clicked();
    void updateDateTime();
    void on_checkBox_all_stateChanged(int state);
    void on_pushButton_clearCheckBox_clicked();

    void on_pushButton_carInfo_update_clicked();

private:
    void initSerialPort();
    void refreshSerialPortNum();
    void updateSerialPortSettings();
    void openSerialPort();
    void closeSerialPort();

    void showStatusMessage(const QString &message);

    QString hexToString(const QVector<uchar> hex);
    QString hexByteArrayToString(const QByteArray hex);
    QByteArray hexToByteArray(const QString hex);
    QByteArray hexToByteArray_AppendCrcCheck(const QString hex);
    QByteArray hexToByteArray_AppendCrcCheck(const QByteArray hex);
    QByteArray strToByteArray(const QString str);

    void readDataFromSerial();
    void writeDataToSerial(const QByteArray data);

    /* btns */
    void initBtns();
    QByteArray getBtnUpdateTimeSndHex();
    QByteArray getBtnPlayWithIdx();
    QByteArray getBtnMoveWithIdx();
    QByteArray getBtnDelWithIdx();
    uint16_t getCheckBoxIdx();
    void setDataIdx(QByteArray& hexData, uint16_t index);

    /* tools */
    uint16_t crc16_check(QByteArray pLcPtr, uint16_t LcLen);
private:
    Ui::MainWindow *ui;

    /* serial */
    QSerialPort* serial;
    SerialPortSettings portSetting;
    QLabel *status;

    /* btns */
    QMap<QPushButton*, QString> sndBtnTable;
};

#endif // MAINWINDOW_H
