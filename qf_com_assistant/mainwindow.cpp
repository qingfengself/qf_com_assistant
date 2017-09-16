#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtSerialPort/QSerialPortInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* init serial port */
    initSerialPort();
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




