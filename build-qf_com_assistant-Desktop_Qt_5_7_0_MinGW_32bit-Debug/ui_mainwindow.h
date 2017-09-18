/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox_dataBits;
    QComboBox *comboBox_stopBits;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_baudRate;
    QPushButton *pushButton_refresh;
    QLabel *label_3;
    QComboBox *comboBox_portsNum;
    QComboBox *comboBox_parity;
    QComboBox *comboBox_flowControl;
    QPushButton *pushButton_connectAndDisconnect;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit_console;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_sendHex;
    QRadioButton *radioButton_sendString;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QPlainTextEdit *plainTextEdit_send;
    QPushButton *pushButton_sendInput;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(882, 732);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 181, 261));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 167, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_dataBits = new QComboBox(gridLayoutWidget);
        comboBox_dataBits->setObjectName(QStringLiteral("comboBox_dataBits"));

        gridLayout->addWidget(comboBox_dataBits, 2, 1, 1, 1);

        comboBox_stopBits = new QComboBox(gridLayoutWidget);
        comboBox_stopBits->setObjectName(QStringLiteral("comboBox_stopBits"));

        gridLayout->addWidget(comboBox_stopBits, 4, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboBox_baudRate = new QComboBox(gridLayoutWidget);
        comboBox_baudRate->setObjectName(QStringLiteral("comboBox_baudRate"));

        gridLayout->addWidget(comboBox_baudRate, 1, 1, 1, 1);

        pushButton_refresh = new QPushButton(gridLayoutWidget);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));

        gridLayout->addWidget(pushButton_refresh, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        comboBox_portsNum = new QComboBox(gridLayoutWidget);
        comboBox_portsNum->setObjectName(QStringLiteral("comboBox_portsNum"));

        gridLayout->addWidget(comboBox_portsNum, 0, 1, 1, 1);

        comboBox_parity = new QComboBox(gridLayoutWidget);
        comboBox_parity->setObjectName(QStringLiteral("comboBox_parity"));

        gridLayout->addWidget(comboBox_parity, 3, 1, 1, 1);

        comboBox_flowControl = new QComboBox(gridLayoutWidget);
        comboBox_flowControl->setObjectName(QStringLiteral("comboBox_flowControl"));

        gridLayout->addWidget(comboBox_flowControl, 5, 1, 1, 1);

        pushButton_connectAndDisconnect = new QPushButton(gridLayoutWidget);
        pushButton_connectAndDisconnect->setObjectName(QStringLiteral("pushButton_connectAndDisconnect"));
        pushButton_connectAndDisconnect->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_connectAndDisconnect, 6, 0, 1, 2);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(200, 20, 671, 491));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        plainTextEdit_console = new QPlainTextEdit(gridLayoutWidget_2);
        plainTextEdit_console->setObjectName(QStringLiteral("plainTextEdit_console"));

        gridLayout_2->addWidget(plainTextEdit_console, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 370, 181, 141));
        radioButton_sendHex = new QRadioButton(groupBox_2);
        radioButton_sendHex->setObjectName(QStringLiteral("radioButton_sendHex"));
        radioButton_sendHex->setGeometry(QRect(10, 10, 51, 16));
        radioButton_sendString = new QRadioButton(groupBox_2);
        radioButton_sendString->setObjectName(QStringLiteral("radioButton_sendString"));
        radioButton_sendString->setGeometry(QRect(60, 10, 61, 16));
        gridLayoutWidget_3 = new QWidget(groupBox_2);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 40, 161, 81));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        plainTextEdit_send = new QPlainTextEdit(gridLayoutWidget_3);
        plainTextEdit_send->setObjectName(QStringLiteral("plainTextEdit_send"));

        gridLayout_4->addWidget(plainTextEdit_send, 1, 0, 1, 1);

        pushButton_sendInput = new QPushButton(gridLayoutWidget_3);
        pushButton_sendInput->setObjectName(QStringLiteral("pushButton_sendInput"));
        pushButton_sendInput->setMinimumSize(QSize(0, 20));

        gridLayout_4->addWidget(pushButton_sendInput, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 882, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "qf_com_assistant", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Serial Param", 0));
        label_5->setText(QApplication::translate("MainWindow", "Flow Control", 0));
        label_4->setText(QApplication::translate("MainWindow", "Stop Bits", 0));
        label->setText(QApplication::translate("MainWindow", "BaudRate", 0));
        label_2->setText(QApplication::translate("MainWindow", "Data Bits", 0));
        pushButton_refresh->setText(QApplication::translate("MainWindow", "Refresh", 0));
        label_3->setText(QApplication::translate("MainWindow", "Parity", 0));
        pushButton_connectAndDisconnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        groupBox_2->setTitle(QString());
        radioButton_sendHex->setText(QApplication::translate("MainWindow", "hex", 0));
        radioButton_sendString->setText(QApplication::translate("MainWindow", "string", 0));
        pushButton_sendInput->setText(QApplication::translate("MainWindow", "send", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
