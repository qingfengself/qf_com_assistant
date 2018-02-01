#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QMessageBox>
#include <QLabel>
#include <QMap>
#include <QComboBox>


/******************************************
 * selfdef struct
 * ****************************************/

typedef struct _REC_FLOW_INFOS_s_{
    uint32_t recFlow_idx;
    QString recFlow_name;
    QByteArrayList recFlow_cmds;
    uint32_t recFlow_cmdDelayTime; /** delay time between  cmds */
    uint32_t recFlow_groupDelayTime; /** delay time between cmd group */
}REC_FLOW_INFOS_s;

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
    void on_checkBox_all_stateChanged(int state);
    void on_pushButton_clearCheckBox_clicked();
    void on_pushButton_clear_plainText_clicked();

    void on_pushButton_recordFlow_clicked();
    void on_pushButton_execFlow_clicked();
    void on_pushButton_recFlow_saveConfig_clicked();
    void on_pushButton_recFlow_loadConfig_clicked();
    void on_pushButton_recFlow_delete_clicked();

    void slot_execRecordFlow_timerHandler();

private:
    void initSerialPort();
    void refreshSerialPortNum();
    void updateSerialPortSettings();
    void openSerialPort();
    void closeSerialPort();

    void showStatusMessage(const QString &message);

    QString hexToString(const QVector<uchar> hex);
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
    QByteArray getUpdateCarInfoSndHex();
    uint16_t getCheckBoxIdx();

    /* tools */
    uint16_t crc16_check(QByteArray pLcPtr, uint16_t LcLen);

    /* refresh record flow combobox */
    void refresh_recFlowComboBox();

    /** save and load */
    QString convertToSaveType(uint32_t data);
    QString convertToSaveType(QString data);
    QString convertToSaveType(QByteArray data);

    uint32_t convertSaveTypeTo_uint32(QString data);
    QString convertSaveTypeTo_str(QString data);
    QByteArray convertSaveTypeTo_byteArray(QString data);

    void save_recFlowConfigs();
    int load_recFlowConfigs();

public:
    QString hexByteArrayToString(const QByteArray hex);
    REC_FLOW_INFOS_s getRecFlowInfos(int idx);
    void setRecFlowInfos(REC_FLOW_INFOS_s info);

private:
    Ui::MainWindow *ui;

    /* serial */
    QSerialPort* serial;
    SerialPortSettings portSetting;
    QLabel *status;

    /* btns */
    QMap<QPushButton*, QString> sndBtnTable;

    /* rec flow */
    int recFlowStart;
    REC_FLOW_INFOS_s flowInfo_tmp;
    QMap<int, REC_FLOW_INFOS_s> recFlowInfos;
};

#endif // MAINWINDOW_H
