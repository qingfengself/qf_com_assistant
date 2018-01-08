#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include <QTimer>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* init serial port */
    initSerialPort();

    /* init btns */
    initBtns();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*************************************************************
 **************** private slots ******************************
 *************************************************************/
void MainWindow::on_pushButton_connectAndDisconnect_clicked()
{
    if (serial->isOpen()) {
        closeSerialPort();
    } else {
        openSerialPort();
    }
}

void MainWindow::on_pushButton_refresh_clicked()
{
    refreshSerialPortNum();
}

void MainWindow::on_pushButton_sendInput_clicked()
{
    QString str_prefix = "[send]: ";
    QString str_sndData;
    str_sndData += ui->plainTextEdit_send->toPlainText();
    if (str_sndData.isEmpty()) {
        return;
    }

    /* send data to serial port */
    QByteArray data;
    if (ui->radioButton_sendHex->isChecked()) {
        data = hexToByteArray(str_sndData);
        for (auto it=data.cbegin(); it!=data.cend(); it++) {
            qDebug() << "data(hex):" << QString("%1 ").arg((uchar)(*it), 0, 16);
        }
    } else if (ui->radioButton_sendString->isChecked()) {
        data = strToByteArray(str_sndData);
        for (auto it=data.cbegin(); it!=data.cend(); it++) {
            qDebug() <<"data(str):" << QString("%1 ").arg(*it);
        }
    }

    if (ui->checkBox_sndWithCrc->isChecked()) {
        data = hexToByteArray_AppendCrcCheck(data);
    }
    writeDataToSerial(data);

}

void MainWindow::on_pushButton_clicked()
{
    QPushButton* p_btn =  (QPushButton*)sender();
    QByteArray data;

    if (p_btn == ui->pushButton_updateTime) {
        data = getBtnUpdateTimeSndHex();
    } else if (p_btn == ui->pushButton_playWithIndex) {
       data = getBtnPlayWithIdx();
    } else if (p_btn == ui->pushButton_move) {
       data = getBtnMoveWithIdx();
    } else if (p_btn == ui->pushButton_delete) {
       data = getBtnDelWithIdx();
    } else {
       QString sndHex = sndBtnTable.value(p_btn);
       data = hexToByteArray(sndHex);
    }
    data = hexToByteArray_AppendCrcCheck(data);
    writeDataToSerial(data);

}

void MainWindow::updateDateTime()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("  yyyy-MM-dd hh:mm:ss dddd");
    ui->lineEdit_showTime->setText(str);
}

void MainWindow::on_checkBox_all_stateChanged(int state)
{
    switch (state) {
    case Qt::Unchecked:
        ui->checkBox_1->setChecked(false);
        ui->checkBox_2->setChecked(false);
        ui->checkBox_3->setChecked(false);
        ui->checkBox_4->setChecked(false);
        ui->checkBox_5->setChecked(false);
        ui->checkBox_6->setChecked(false);
        ui->checkBox_7->setChecked(false);
        ui->checkBox_8->setChecked(false);
        ui->checkBox_9->setChecked(false);
        break;
    case Qt::Checked:
        ui->checkBox_1->setChecked(true);
        ui->checkBox_2->setChecked(true);
        ui->checkBox_3->setChecked(true);
        ui->checkBox_4->setChecked(true);
        ui->checkBox_5->setChecked(true);
        ui->checkBox_6->setChecked(true);
        ui->checkBox_7->setChecked(true);
        ui->checkBox_8->setChecked(true);
        ui->checkBox_9->setChecked(true);
        break;
    }
}

void MainWindow::on_pushButton_clearCheckBox_clicked()
{
    ui->checkBox_1->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);
    ui->checkBox_5->setChecked(false);
    ui->checkBox_6->setChecked(false);
    ui->checkBox_7->setChecked(false);
    ui->checkBox_8->setChecked(false);
    ui->checkBox_9->setChecked(false);
}

void MainWindow::on_pushButton_clear_plainText_clicked()
{
    ui->plainTextEdit_console->clear();
}

/*************************************************************
 **************** private funcs ******************************
 *************************************************************/

void MainWindow::initSerialPort()
{
    serial = new QSerialPort(this);
    status = new QLabel(this);
    ui->statusBar->addWidget(status);

    /* init alternative serial port params */
    /* baud rate */
    ui->comboBox_baudRate->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
    ui->comboBox_baudRate->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
    ui->comboBox_baudRate->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
    ui->comboBox_baudRate->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);
    //ui->baudRateBox->addItem(tr("Custom"));

    /* data bits */
    ui->comboBox_dataBits->addItem(QStringLiteral("5"), QSerialPort::Data5);
    ui->comboBox_dataBits->addItem(QStringLiteral("6"), QSerialPort::Data6);
    ui->comboBox_dataBits->addItem(QStringLiteral("7"), QSerialPort::Data7);
    ui->comboBox_dataBits->addItem(QStringLiteral("8"), QSerialPort::Data8);
    ui->comboBox_dataBits->setCurrentIndex(3);

    /* parity */
    ui->comboBox_parity->addItem(tr("None"), QSerialPort::NoParity);
    ui->comboBox_parity->addItem(tr("Even"), QSerialPort::EvenParity);
    ui->comboBox_parity->addItem(tr("Odd"), QSerialPort::OddParity);
    ui->comboBox_parity->addItem(tr("Mark"), QSerialPort::MarkParity);
    ui->comboBox_parity->addItem(tr("Space"), QSerialPort::SpaceParity);

    /* stop bits */
    ui->comboBox_stopBits->addItem(QStringLiteral("1"), QSerialPort::OneStop);
#ifdef Q_OS_WIN
    ui->comboBox_stopBits->addItem(tr("1.5"), QSerialPort::OneAndHalfStop);
#endif
    ui->comboBox_stopBits->addItem(QStringLiteral("2"), QSerialPort::TwoStop);

    /* flow control */
    ui->comboBox_flowControl->addItem(tr("None"), QSerialPort::NoFlowControl);
    ui->comboBox_flowControl->addItem(tr("RTS/CTS"), QSerialPort::HardwareControl);
    ui->comboBox_flowControl->addItem(tr("XON/XOFF"), QSerialPort::SoftwareControl);

    /* refresh ports number */
    refreshSerialPortNum();

    /* connect signal and slots */
    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readDataFromSerial);

    /* set defualt select */
    ui->radioButton_sendHex->setChecked(true);
}

void MainWindow::refreshSerialPortNum()
{
    ui->comboBox_portsNum->clear();
    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos) {
        QStringList list;
        list << info.portName();

        ui->comboBox_portsNum->addItem(list.first(), list);
    }
}

void MainWindow::updateSerialPortSettings()
{
    portSetting.name = ui->comboBox_portsNum->currentText();

    portSetting.baudRate = static_cast<QSerialPort::BaudRate>(
                    ui->comboBox_baudRate->itemData(ui->comboBox_baudRate->currentIndex()).toInt());
    portSetting.stringBaudRate = QString::number(portSetting.baudRate);

    portSetting.dataBits = static_cast<QSerialPort::DataBits>(
                ui->comboBox_dataBits->itemData(ui->comboBox_dataBits->currentIndex()).toInt());
    portSetting.stringDataBits = ui->comboBox_dataBits->currentText();

    portSetting.parity = static_cast<QSerialPort::Parity>(
                ui->comboBox_parity->itemData(ui->comboBox_parity->currentIndex()).toInt());
    portSetting.stringParity = ui->comboBox_parity->currentText();

    portSetting.stopBits = static_cast<QSerialPort::StopBits>(
                ui->comboBox_stopBits->itemData(ui->comboBox_stopBits->currentIndex()).toInt());
    portSetting.stringStopBits = ui->comboBox_stopBits->currentText();

    portSetting.flowControl = static_cast<QSerialPort::FlowControl>(
                ui->comboBox_flowControl->itemData(ui->comboBox_flowControl->currentIndex()).toInt());
    portSetting.stringFlowControl = ui->comboBox_flowControl->currentText();

}

void MainWindow::openSerialPort()
{
    updateSerialPortSettings();
    SerialPortSettings *ps = &portSetting;
    serial->setPortName(ps->name);
    serial->setBaudRate(ps->baudRate);
    serial->setDataBits(ps->dataBits);
    serial->setParity(ps->parity);
    serial->setStopBits(ps->stopBits);
    serial->setFlowControl(ps->flowControl);
    if (serial->open(QIODevice::ReadWrite)) {
        //console->setEnabled(true);
        //console->setLocalEchoEnabled(true);
        ui->pushButton_connectAndDisconnect->setText("DisConnect");
        showStatusMessage(tr("Connected to %1 : %2, %3, %4, %5, %6")
                          .arg(ps->name).arg(ps->stringBaudRate).arg(ps->stringDataBits)
                          .arg(ps->stringParity).arg(ps->stringStopBits).arg(ps->stringFlowControl));
    } else {
        QMessageBox::critical(this, tr("Error"), serial->errorString());
        showStatusMessage(tr("Open error"));
    }

}
void MainWindow::closeSerialPort()
{
    if (serial->isOpen())
        serial->close();

    //console->setEnabled(false);
    ui->pushButton_connectAndDisconnect->setText("Connect");
    showStatusMessage(tr("Disconnected"));
}

void MainWindow::showStatusMessage(const QString &message)
{
    status->setText(message);
}

QString MainWindow::hexToString(const QVector<uchar> hex)
{
    QString str_hex = "";
    for (auto it=hex.cbegin(); it != hex.cend(); it++) {
        str_hex += QString("%1").arg(*it, 2, 16, QChar('0'));
        str_hex += " ";
    }

    return str_hex;
}

QString MainWindow::hexByteArrayToString(const QByteArray hex)
{
    QString str_hex = "";
    for (auto it=hex.cbegin(); it != hex.cend(); it++) {
        str_hex += QString("%1").arg((uchar)*it, 2, 16, QChar('0'));
        str_hex += " ";
    }
    return str_hex;
}

QByteArray MainWindow::hexToByteArray(const QString hex)
{
    QByteArray data;
    QStringList hex_list = hex.split(' ', QString::SkipEmptyParts);
    qDebug() << hex_list;
    for (auto it=hex_list.cbegin(); it!=hex_list.cend(); it++) {
        data.append((*it).toInt(nullptr,16));
    }
    return data;
}

/*
 * @ brief : string hex without crc to byteArray with crc.
 * @ param [in] : string hex without crc
 * @ return : byteArray with crc
 */
QByteArray MainWindow::hexToByteArray_AppendCrcCheck(const QString hex)
{
    QByteArray data;
    uint16_t crcCheck = 0;
    data = hexToByteArray(hex);
    crcCheck = crc16_check(data, data.size());
    qDebug() << "crcCheck = " << crcCheck;
    data.append(crcCheck>>8 & 0xff);
    data.append(crcCheck & 0xff);

    return data;
}

QByteArray MainWindow::hexToByteArray_AppendCrcCheck(const QByteArray hex)
{
    QByteArray data = hex;
    uint16_t crcCheck = crc16_check(data, data.size());
    qDebug() << "crcCheck = " << hex << crcCheck;
    data.append(crcCheck>>8 & 0xff);
    data.append(crcCheck & 0xff);

    return data;
}

QByteArray MainWindow::strToByteArray(const QString str)
{
    QByteArray data;

    for (auto it=str.cbegin(); it!=str.cend(); it++) {
        data.append(*it);
    }

    return data;
}


/*
 * @ brief : read data from serial and send it to console
 */
void MainWindow::readDataFromSerial()
{
    QByteArray data = serial->readAll();

    QVector<uchar> v_data;
    for (auto it=data.cbegin(); it!=data.cend(); it++) {
        v_data.append((uchar)*it);
    }

    QString str_data;
    str_data = hexToString(v_data);
    //str_data += "\n";

    ui->plainTextEdit_console->appendPlainText(str_data);
}

void MainWindow::writeDataToSerial(const QByteArray data)
{
    QString str_snd = "[ send ] : ";
    str_snd += hexByteArrayToString(data);
    ui->plainTextEdit_console->appendPlainText(str_snd);
    serial->write(data);
}

void MainWindow::initBtns()
{
    /* show time */
    ui->lineEdit_showTime->setEnabled(false);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateDateTime()));
    timer->start(1000);

    /* record start */
    connect(ui->pushButton_recStart, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_recStart]    = "AB BA 90 0F 08 00 00 08 00 00 00 00 00";

    /* record stop */
    connect(ui->pushButton_recStop, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_recStop]     = "AB BA 90 0F 08 00 00 10 00 00 00 00 00";

    /* start event record */
    connect(ui->pushButton_eventStart, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_eventStart]     = "AB BA 90 0F 08 00 00 18 00 00 00 00 00";

    /* capture */
    connect(ui->pushButton_capture, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_capture]     = "AB BA 90 0F 08 00 00 48 00 00 00 00 00";

    /* mic on */
    connect(ui->pushButton_micOn, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_micOn]     = "AB BA 90 0F 08 02 00 00 00 00 00 00 00";

    /* mic off */
    connect(ui->pushButton_micOff, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_micOff]     = "AB BA 90 0F 08 01 00 00 00 00 00 00 00";

    /* nomal browse */
    connect(ui->pushButton_normalBrowse, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    connect(ui->pushButton_normalBrowse_inThumb, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_normalBrowse]            = "AB BA 90 0F 08 00 00 20 00 00 00 00 00";
    sndBtnTable[ui->pushButton_normalBrowse_inThumb]    = "AB BA 90 0F 08 00 00 20 00 00 00 00 00";

    /* event browse */
    connect(ui->pushButton_eventBrowse, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_eventBrowse] = "AB BA 90 0F 08 00 00 28 00 00 00 00 00";

    /* photo browse */
    connect(ui->pushButton_photoBrowse, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_photoBrowse] = "AB BA 90 0F 08 00 00 38 00 00 00 00 00";

    /* exit browse */
    connect(ui->pushButton_exitBrowse, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_exitBrowse] = "AB BA 90 0F 08 00 00 40 00 00 00 00 00";

    /* prev page */
    connect(ui->pushButton_prevPage, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_prevPage] = "AB BA 90 0F 08 00 50 00 00 00 00 00 00";

    /* next page */
    connect(ui->pushButton_nextPage, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_nextPage] = "AB BA 90 0F 08 00 60 00 00 00 00 00 00";

    /* delete all */
    connect(ui->pushButton_deleteAll, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_deleteAll] = "AB BA 90 0F 08 00 00 60 00 00 00 00 00";

    /* delete all */
    connect(ui->pushButton_deleteAll, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_deleteAll] = "AB BA 90 0F 08 00 00 60 00 00 00 00 00";

    /* delete all */
    connect(ui->pushButton_deleteAll, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_deleteAll] = "AB BA 90 0F 08 00 00 60 00 00 00 00 00";

    /* exit play */
    connect(ui->pushButton_exitPlay, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_exitPlay] = "AB BA 90 0F 08 00 00 88 00 00 00 00 00";

    /* play in pb */
    connect(ui->pushButton_play, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_play] = "AB BA 90 0F 08 00 00 68 00 00 00 00 00";

    /* pause */
    connect(ui->pushButton_pause, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_pause] = "AB BA 90 0F 08 00 00 70 00 00 00 00 00";

    /* play prev */
    connect(ui->pushButton_playPrev, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_playPrev] = "AB BA 90 0F 08 00 00 78 00 00 00 00 00";

    /* play next */
    connect(ui->pushButton_playNext, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_playNext] = "AB BA 90 0F 08 00 00 80 00 00 00 00 00";

    /* 1080p */
    connect(ui->pushButton_1080p, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_1080p] = "AB BA 90 0F 08 04 00 00 00 00 00 00 00";
    /* 720p */
    connect(ui->pushButton_720p, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_720p] = " AB BA 90 0F 08 08 00 00 00 00 00 00 00";

    /* 5min */
    connect(ui->pushButton_5min, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_5min] = "AB BA 90 0F 08 30 00 00 00 00 00 00 00";
    /* 3min */
    connect(ui->pushButton_3min, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_3min] = "AB BA 90 0F 08 20 00 00 00 00 00 00 00";
    /* 1min */
    connect(ui->pushButton_1min, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_1min] = "AB BA 90 0F 08 10 00 00 00 00 00 00 00";

    /* format sd card */
    connect(ui->pushButton_format, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_format] = "AB BA 90 0F 08 40 00 00 00 00 00 00 00";

    /* load default configuration */
    connect(ui->pushButton_loadDef, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_loadDef] = "AB BA 90 0F 08 80 00 00 00 00 00 00 00";

    /* return home */
    connect(ui->pushButton_returnHome, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_returnHome] = "AB BA 90 0F 08 00 04 00 00 00 00 00 00";

    /* update system */
    connect(ui->pushButton_update, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_update] = "AB BA 90 0F 08 00 01 00 00 00 00 00 00";

    /* event record by mcu */
    connect(ui->pushButton_eventStart_byMcu, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_eventStart_byMcu] = " AB BA 80 08 01 01";

    /* power off */
    connect(ui->pushButton_powerOff, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_powerOff] = "AB BA 60 08 01 00";

    /* start recrod by mcu */
    connect(ui->pushButton_startRec_byMcu, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_startRec_byMcu] = "AB BA 12 08 01 01";
    /* stop record by mcu */
    connect(ui->pushButton_stopRec_byMcu, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_stopRec_byMcu] = "AB BA 12 08 01 00";

    /** special handle btns */
    /* update time */
    connect(ui->pushButton_updateTime, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_updateTime] = "AB BA 02 0E 07 20 17 11 30 23 59 58";

    /* play with index */
    connect(ui->pushButton_playWithIndex, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_playWithIndex] = "AB BA 90 0F 08 00 00 68 00 04 00 00 00";
    /* move file with index */
    connect(ui->pushButton_move, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_move] = "AB BA 90 0F 08 00 00 50 00 08 00 00 00";
    /* delete file with index */
    connect(ui->pushButton_delete, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    sndBtnTable[ui->pushButton_delete] = "AB BA 90 0F 08 00 00 58 00 08 00 00 00";

    /** others */
    connect(ui->checkBox_all, QCheckBox::stateChanged, this, MainWindow::on_checkBox_all_stateChanged);
}

QByteArray MainWindow::getBtnUpdateTimeSndHex()
{
    QDateTime time = QDateTime::currentDateTime();
    QByteArray hexData = hexToByteArray(sndBtnTable.value(ui->pushButton_updateTime));
    /* "AB BA 02 0E 07 -- 20 17 11 30 23 59 58 --" */
    QString str_time = time.toString("yyyy MM dd hh mm ss");
    QStringList str_list = str_time.split(" ", QString::SkipEmptyParts);
    QString str_year = str_list.at(0);
    QString str_month = str_list.at(1);
    QString str_day = str_list.at(2);
    QString str_hour = str_list.at(3);
    QString str_minute = str_list.at(4);
    QString str_second = str_list.at(5);

    hexData[5] = (uchar)((str_year.toInt(nullptr, 16) >> 8) & 0xff);
    hexData[6] = str_year.toInt(nullptr, 16) & 0xff;
    hexData[7] = str_month.toInt(nullptr, 16);
    hexData[8] = str_day.toInt(nullptr, 16);
    hexData[9] = str_hour.toInt(nullptr, 16);
    hexData[10] = str_minute.toInt(nullptr, 16);
    hexData[11] = str_second.toInt(nullptr, 16);

    qDebug() << str_time;
    return hexData;
}

QByteArray MainWindow::getBtnPlayWithIdx()
{
    QByteArray hexData = hexToByteArray(sndBtnTable.value(ui->pushButton_playWithIndex));
    // "AB BA 90 0F 08 00 00 68  -- 00 04 -- 00 00 00"
    uint16_t index = 0;
    if (ui->radioButton_1->isChecked()) {
        index = 0x01;
    }
    if (ui->radioButton_2->isChecked()) {
        index = 0x01 << 1;
    }
    if (ui->radioButton_3->isChecked()) {
        index = 0x01 << 2;
    }
    if (ui->radioButton_4->isChecked()) {
        index = 0x01 << 3;
    }
    if (ui->radioButton_5->isChecked()) {
        index = 0x01 << 4;
    }
    if (ui->radioButton_6->isChecked()) {
        index = 0x01 << 5;
    }
    if (ui->radioButton_7->isChecked()) {
        index = 0x01 << 6;
    }
    if (ui->radioButton_8->isChecked()) {
        index = 0x01 << 7;
    }
    if (ui->radioButton_9->isChecked()) {
        index = 0x01 << 8;
    }

    index = index << 3;
    hexData[8] = (index >> 8) & 0xff;
    hexData[9] = index & 0xff;

    return hexData;

}

QByteArray MainWindow::getBtnMoveWithIdx()
{
    QByteArray hexData = hexToByteArray(sndBtnTable.value(ui->pushButton_move));
    // "AB BA 90 0F 08 00 00 50 -- 00 08 -- 00 00 00"
    uint16_t index = getCheckBoxIdx();
    index = index << 3;
    hexData[8] = (index >> 8) & 0xff;
    hexData[9] = index & 0xff;

    return hexData;
}

QByteArray MainWindow::getBtnDelWithIdx()
{
    QByteArray hexData = hexToByteArray(sndBtnTable.value(ui->pushButton_delete));
    // "AB BA 90 0F 08 00 00 58 -- 00 08 -- 00 00 00"
    uint16_t index = getCheckBoxIdx();
    index = index << 3;
    hexData[8] = (index >> 8) & 0xff;
    hexData[9] = index & 0xff;

    return hexData;
}

uint16_t MainWindow::getCheckBoxIdx()
{
    uint16_t index = 0;
    if (ui->checkBox_1->isChecked()) {
        index |= 0x01;
    }
    if (ui->checkBox_2->isChecked()) {
        index |= 0x01 << 1;
    }
    if (ui->checkBox_3->isChecked()) {
        index |= 0x01 << 2;
    }
    if (ui->checkBox_4->isChecked()) {
        index |= 0x01 << 3;
    }
    if (ui->checkBox_5->isChecked()) {
        index |= 0x01 << 4;
    }
    if (ui->checkBox_6->isChecked()) {
        index |= 0x01 << 5;
    }
    if (ui->checkBox_7->isChecked()) {
        index |= 0x01 << 6;
    }
    if (ui->checkBox_8->isChecked()) {
        index |= 0x01 << 7;
    }
    if (ui->checkBox_9->isChecked()) {
        index |= 0x01 << 8;
    }

    return index;
}
/******************************************************************
* 函数名称: CalculateCRC16
* 功能描述: 循环校验
* 输入参数: pLcPtr(指针地址)， LcLen(数据长度)
* 输出参数: CRC 校验结果
* 返 回 值: lwCRC16， 循环校验
*********************************************************************/
uint16_t MainWindow::crc16_check(QByteArray pLcPtr, uint16_t LcLen)
{
    uchar i;
    uint16_t lwCRC16 = 0;
    for(int j=0; j<LcLen; j++) {
        for(i=0x80;i!=0;i>>=1)
        {
            if(0 != (lwCRC16&0x8000))
            {
                lwCRC16 <<= 1;
                lwCRC16 ^= 0x1021;
            }
            else
            {
                lwCRC16 <<= 1;
            }
            if(0 != (pLcPtr[j]&i))
            {
                lwCRC16 ^= 0x1021;
            }
        }
    }
    return(lwCRC16);
}


