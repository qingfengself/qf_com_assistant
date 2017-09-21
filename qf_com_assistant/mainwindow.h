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

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_connectAndDisconnect_clicked();
    void on_pushButton_refresh_clicked();
    void on_pushButton_sendInput_clicked();
    void on_pushButton_clicked();
    void updateDateTime();

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
    QByteArray strToByteArray(const QString str);

    void readDataFromSerial();
    void writeDataToSerial(const QByteArray data);

    /* btns */
    void initBtns();

    /* tools */
    uint16_t crc16_check(QByteArray& pLcPtr, uint16_t LcLen);
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
