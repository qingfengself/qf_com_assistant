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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QCheckBox *checkBox_sndWithCrc;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_micOn;
    QPushButton *pushButton_micOff;
    QPushButton *pushButton_recStart;
    QPushButton *pushButton_recStop;
    QPushButton *pushButton_eventStart;
    QPushButton *pushButton_capture;
    QPushButton *pushButton_normalBrowse;
    QWidget *tab_2;
    QPushButton *pushButton_prevPage;
    QPushButton *pushButton_nextPage;
    QPushButton *pushButton_photoBrowse;
    QPushButton *pushButton_eventBrowse;
    QPushButton *pushButton_normalBrowse_inThumb;
    QPushButton *pushButton_exitBrowse;
    QPushButton *pushButton_deleteAll;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_7;
    QPushButton *pushButton_playWithIndex;
    QGroupBox *groupBox_4;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_9;
    QPushButton *pushButton_move;
    QPushButton *pushButton_delete;
    QCheckBox *checkBox_all;
    QPushButton *pushButton_clearCheckBox;
    QWidget *tab_4;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_playPrev;
    QPushButton *pushButton_playNext;
    QPushButton *pushButton_exitPlay;
    QWidget *tab_3;
    QPushButton *pushButton_1080p;
    QPushButton *pushButton_720p;
    QPushButton *pushButton_5min;
    QPushButton *pushButton_3min;
    QPushButton *pushButton_1min;
    QPushButton *pushButton_format;
    QPushButton *pushButton_loadDef;
    QPushButton *pushButton_wifiOn;
    QPushButton *pushButton_wifiOff;
    QWidget *tab_9;
    QPushButton *pushButton_updateTime;
    QPushButton *pushButton_eventStart_byMcu;
    QPushButton *pushButton_powerOff;
    QPushButton *pushButton_stopRec_byMcu;
    QPushButton *pushButton_startRec_byMcu;
    QWidget *tab_5;
    QLineEdit *lineEdit_carInfo_speed;
    QLabel *label_6;
    QLabel *label_7;
    QGroupBox *groupBox_5;
    QCheckBox *checkBox_carInfo_leftTurn;
    QCheckBox *checkBox_carInfo_rightTurn;
    QCheckBox *checkBox_carInfo_highBeam;
    QCheckBox *checkBox_carInfo_lowBeam;
    QCheckBox *checkBox_carInfo_troubleLight;
    QCheckBox *checkBox_carInfo_parkingLight;
    QCheckBox *checkBox_carInfo_frontFogLamb;
    QCheckBox *checkBox_carInfo_rearFogLamb;
    QCheckBox *checkBox_carInfo_acceleratorPedal;
    QCheckBox *checkBox_carInfo_break;
    QCheckBox *checkBox_carInfo_saftyBelt;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_carInfo_mileage;
    QGroupBox *groupBox_6;
    QRadioButton *radioButton_carInfo_steeringWheel_left;
    QRadioButton *radioButton_carInfo_steeringWheel_middle;
    QRadioButton *radioButton_carInfo_steeringWheel_right;
    QPushButton *pushButton_carInfo_update;
    QGroupBox *groupBox_7;
    QCheckBox *checkBox_carInfo_door_driver;
    QCheckBox *checkBox_carInfo_door_passenger;
    QCheckBox *checkBox_carInfo_door_rearLeft;
    QCheckBox *checkBox_carInfo_door_rearRight;
    QGroupBox *groupBox_8;
    QRadioButton *radioButton_carInfo_gear_p;
    QRadioButton *radioButton_carInfo_gear_R;
    QRadioButton *radioButton_carInfo_gear_N;
    QRadioButton *radioButton_carInfo_gear_D;
    QRadioButton *radioButton_carInfo_gear_M;
    QRadioButton *radioButton_carInfo_gear_I;
    QPushButton *pushButton_update;
    QPushButton *pushButton_returnHome;
    QLineEdit *lineEdit_showTime;
    QPushButton *pushButton_sendCarInfo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(882, 812);
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
        groupBox_2->setGeometry(QRect(10, 360, 181, 151));
        radioButton_sendHex = new QRadioButton(groupBox_2);
        radioButton_sendHex->setObjectName(QStringLiteral("radioButton_sendHex"));
        radioButton_sendHex->setGeometry(QRect(10, 10, 51, 16));
        radioButton_sendString = new QRadioButton(groupBox_2);
        radioButton_sendString->setObjectName(QStringLiteral("radioButton_sendString"));
        radioButton_sendString->setGeometry(QRect(60, 10, 61, 16));
        gridLayoutWidget_3 = new QWidget(groupBox_2);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 40, 161, 104));
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
        pushButton_sendInput->setMinimumSize(QSize(0, 25));

        gridLayout_4->addWidget(pushButton_sendInput, 2, 0, 1, 1);

        checkBox_sndWithCrc = new QCheckBox(groupBox_2);
        checkBox_sndWithCrc->setObjectName(QStringLiteral("checkBox_sndWithCrc"));
        checkBox_sndWithCrc->setGeometry(QRect(130, 10, 41, 16));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(200, 530, 671, 221));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_micOn = new QPushButton(tab);
        pushButton_micOn->setObjectName(QStringLiteral("pushButton_micOn"));
        pushButton_micOn->setGeometry(QRect(20, 80, 75, 23));
        pushButton_micOff = new QPushButton(tab);
        pushButton_micOff->setObjectName(QStringLiteral("pushButton_micOff"));
        pushButton_micOff->setGeometry(QRect(100, 80, 75, 23));
        pushButton_recStart = new QPushButton(tab);
        pushButton_recStart->setObjectName(QStringLiteral("pushButton_recStart"));
        pushButton_recStart->setGeometry(QRect(20, 10, 75, 23));
        pushButton_recStop = new QPushButton(tab);
        pushButton_recStop->setObjectName(QStringLiteral("pushButton_recStop"));
        pushButton_recStop->setGeometry(QRect(100, 10, 75, 23));
        pushButton_eventStart = new QPushButton(tab);
        pushButton_eventStart->setObjectName(QStringLiteral("pushButton_eventStart"));
        pushButton_eventStart->setGeometry(QRect(20, 40, 75, 23));
        pushButton_capture = new QPushButton(tab);
        pushButton_capture->setObjectName(QStringLiteral("pushButton_capture"));
        pushButton_capture->setGeometry(QRect(100, 40, 75, 23));
        pushButton_normalBrowse = new QPushButton(tab);
        pushButton_normalBrowse->setObjectName(QStringLiteral("pushButton_normalBrowse"));
        pushButton_normalBrowse->setGeometry(QRect(210, 10, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_prevPage = new QPushButton(tab_2);
        pushButton_prevPage->setObjectName(QStringLiteral("pushButton_prevPage"));
        pushButton_prevPage->setGeometry(QRect(20, 70, 75, 23));
        pushButton_nextPage = new QPushButton(tab_2);
        pushButton_nextPage->setObjectName(QStringLiteral("pushButton_nextPage"));
        pushButton_nextPage->setGeometry(QRect(110, 70, 75, 23));
        pushButton_photoBrowse = new QPushButton(tab_2);
        pushButton_photoBrowse->setObjectName(QStringLiteral("pushButton_photoBrowse"));
        pushButton_photoBrowse->setGeometry(QRect(200, 40, 75, 23));
        pushButton_eventBrowse = new QPushButton(tab_2);
        pushButton_eventBrowse->setObjectName(QStringLiteral("pushButton_eventBrowse"));
        pushButton_eventBrowse->setGeometry(QRect(110, 40, 75, 23));
        pushButton_normalBrowse_inThumb = new QPushButton(tab_2);
        pushButton_normalBrowse_inThumb->setObjectName(QStringLiteral("pushButton_normalBrowse_inThumb"));
        pushButton_normalBrowse_inThumb->setGeometry(QRect(20, 40, 75, 23));
        pushButton_exitBrowse = new QPushButton(tab_2);
        pushButton_exitBrowse->setObjectName(QStringLiteral("pushButton_exitBrowse"));
        pushButton_exitBrowse->setGeometry(QRect(10, 10, 75, 23));
        pushButton_deleteAll = new QPushButton(tab_2);
        pushButton_deleteAll->setObjectName(QStringLiteral("pushButton_deleteAll"));
        pushButton_deleteAll->setGeometry(QRect(70, 100, 75, 23));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(520, 0, 131, 121));
        radioButton_1 = new QRadioButton(groupBox_3);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setGeometry(QRect(10, 10, 31, 16));
        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(50, 10, 31, 16));
        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(90, 10, 31, 16));
        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(10, 30, 31, 16));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(50, 30, 31, 16));
        radioButton_6 = new QRadioButton(groupBox_3);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(90, 30, 31, 16));
        radioButton_8 = new QRadioButton(groupBox_3);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(50, 50, 31, 16));
        radioButton_9 = new QRadioButton(groupBox_3);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(90, 50, 31, 16));
        radioButton_7 = new QRadioButton(groupBox_3);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(10, 50, 31, 16));
        pushButton_playWithIndex = new QPushButton(groupBox_3);
        pushButton_playWithIndex->setObjectName(QStringLiteral("pushButton_playWithIndex"));
        pushButton_playWithIndex->setGeometry(QRect(30, 80, 75, 23));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(320, 0, 191, 121));
        checkBox_1 = new QCheckBox(groupBox_4);
        checkBox_1->setObjectName(QStringLiteral("checkBox_1"));
        checkBox_1->setGeometry(QRect(10, 10, 31, 16));
        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(50, 10, 31, 16));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(90, 10, 31, 16));
        checkBox_6 = new QCheckBox(groupBox_4);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(90, 30, 31, 16));
        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 30, 31, 16));
        checkBox_5 = new QCheckBox(groupBox_4);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(50, 30, 31, 16));
        checkBox_8 = new QCheckBox(groupBox_4);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(50, 50, 31, 16));
        checkBox_7 = new QCheckBox(groupBox_4);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(10, 50, 31, 16));
        checkBox_9 = new QCheckBox(groupBox_4);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(90, 50, 31, 16));
        pushButton_move = new QPushButton(groupBox_4);
        pushButton_move->setObjectName(QStringLiteral("pushButton_move"));
        pushButton_move->setGeometry(QRect(10, 90, 51, 23));
        pushButton_delete = new QPushButton(groupBox_4);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(70, 90, 51, 23));
        checkBox_all = new QCheckBox(groupBox_4);
        checkBox_all->setObjectName(QStringLiteral("checkBox_all"));
        checkBox_all->setGeometry(QRect(130, 10, 41, 16));
        pushButton_clearCheckBox = new QPushButton(groupBox_4);
        pushButton_clearCheckBox->setObjectName(QStringLiteral("pushButton_clearCheckBox"));
        pushButton_clearCheckBox->setGeometry(QRect(130, 40, 51, 23));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_play = new QPushButton(tab_4);
        pushButton_play->setObjectName(QStringLiteral("pushButton_play"));
        pushButton_play->setGeometry(QRect(160, 30, 75, 23));
        pushButton_pause = new QPushButton(tab_4);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));
        pushButton_pause->setGeometry(QRect(160, 60, 75, 23));
        pushButton_playPrev = new QPushButton(tab_4);
        pushButton_playPrev->setObjectName(QStringLiteral("pushButton_playPrev"));
        pushButton_playPrev->setGeometry(QRect(90, 30, 61, 23));
        pushButton_playNext = new QPushButton(tab_4);
        pushButton_playNext->setObjectName(QStringLiteral("pushButton_playNext"));
        pushButton_playNext->setGeometry(QRect(250, 30, 61, 23));
        pushButton_exitPlay = new QPushButton(tab_4);
        pushButton_exitPlay->setObjectName(QStringLiteral("pushButton_exitPlay"));
        pushButton_exitPlay->setGeometry(QRect(10, 0, 71, 23));
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_1080p = new QPushButton(tab_3);
        pushButton_1080p->setObjectName(QStringLiteral("pushButton_1080p"));
        pushButton_1080p->setGeometry(QRect(20, 10, 61, 23));
        pushButton_720p = new QPushButton(tab_3);
        pushButton_720p->setObjectName(QStringLiteral("pushButton_720p"));
        pushButton_720p->setGeometry(QRect(90, 10, 61, 23));
        pushButton_5min = new QPushButton(tab_3);
        pushButton_5min->setObjectName(QStringLiteral("pushButton_5min"));
        pushButton_5min->setGeometry(QRect(20, 40, 61, 23));
        pushButton_3min = new QPushButton(tab_3);
        pushButton_3min->setObjectName(QStringLiteral("pushButton_3min"));
        pushButton_3min->setGeometry(QRect(90, 40, 61, 23));
        pushButton_1min = new QPushButton(tab_3);
        pushButton_1min->setObjectName(QStringLiteral("pushButton_1min"));
        pushButton_1min->setGeometry(QRect(160, 40, 61, 23));
        pushButton_format = new QPushButton(tab_3);
        pushButton_format->setObjectName(QStringLiteral("pushButton_format"));
        pushButton_format->setGeometry(QRect(20, 70, 91, 31));
        pushButton_loadDef = new QPushButton(tab_3);
        pushButton_loadDef->setObjectName(QStringLiteral("pushButton_loadDef"));
        pushButton_loadDef->setGeometry(QRect(130, 70, 81, 31));
        pushButton_wifiOn = new QPushButton(tab_3);
        pushButton_wifiOn->setObjectName(QStringLiteral("pushButton_wifiOn"));
        pushButton_wifiOn->setGeometry(QRect(240, 10, 61, 23));
        pushButton_wifiOff = new QPushButton(tab_3);
        pushButton_wifiOff->setObjectName(QStringLiteral("pushButton_wifiOff"));
        pushButton_wifiOff->setGeometry(QRect(300, 10, 61, 23));
        tabWidget->addTab(tab_3, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        pushButton_updateTime = new QPushButton(tab_9);
        pushButton_updateTime->setObjectName(QStringLiteral("pushButton_updateTime"));
        pushButton_updateTime->setGeometry(QRect(40, 90, 111, 23));
        pushButton_eventStart_byMcu = new QPushButton(tab_9);
        pushButton_eventStart_byMcu->setObjectName(QStringLiteral("pushButton_eventStart_byMcu"));
        pushButton_eventStart_byMcu->setGeometry(QRect(10, 20, 81, 23));
        pushButton_powerOff = new QPushButton(tab_9);
        pushButton_powerOff->setObjectName(QStringLiteral("pushButton_powerOff"));
        pushButton_powerOff->setGeometry(QRect(100, 20, 81, 23));
        pushButton_stopRec_byMcu = new QPushButton(tab_9);
        pushButton_stopRec_byMcu->setObjectName(QStringLiteral("pushButton_stopRec_byMcu"));
        pushButton_stopRec_byMcu->setGeometry(QRect(100, 50, 81, 23));
        pushButton_startRec_byMcu = new QPushButton(tab_9);
        pushButton_startRec_byMcu->setObjectName(QStringLiteral("pushButton_startRec_byMcu"));
        pushButton_startRec_byMcu->setGeometry(QRect(10, 50, 81, 23));
        tabWidget->addTab(tab_9, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        lineEdit_carInfo_speed = new QLineEdit(tab_5);
        lineEdit_carInfo_speed->setObjectName(QStringLiteral("lineEdit_carInfo_speed"));
        lineEdit_carInfo_speed->setGeometry(QRect(70, 10, 131, 31));
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 20, 54, 12));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 20, 54, 12));
        groupBox_5 = new QGroupBox(tab_5);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(240, 50, 261, 141));
        checkBox_carInfo_leftTurn = new QCheckBox(groupBox_5);
        checkBox_carInfo_leftTurn->setObjectName(QStringLiteral("checkBox_carInfo_leftTurn"));
        checkBox_carInfo_leftTurn->setGeometry(QRect(10, 20, 81, 16));
        checkBox_carInfo_rightTurn = new QCheckBox(groupBox_5);
        checkBox_carInfo_rightTurn->setObjectName(QStringLiteral("checkBox_carInfo_rightTurn"));
        checkBox_carInfo_rightTurn->setGeometry(QRect(90, 20, 81, 16));
        checkBox_carInfo_highBeam = new QCheckBox(groupBox_5);
        checkBox_carInfo_highBeam->setObjectName(QStringLiteral("checkBox_carInfo_highBeam"));
        checkBox_carInfo_highBeam->setGeometry(QRect(10, 40, 71, 16));
        checkBox_carInfo_lowBeam = new QCheckBox(groupBox_5);
        checkBox_carInfo_lowBeam->setObjectName(QStringLiteral("checkBox_carInfo_lowBeam"));
        checkBox_carInfo_lowBeam->setGeometry(QRect(90, 40, 71, 16));
        checkBox_carInfo_troubleLight = new QCheckBox(groupBox_5);
        checkBox_carInfo_troubleLight->setObjectName(QStringLiteral("checkBox_carInfo_troubleLight"));
        checkBox_carInfo_troubleLight->setGeometry(QRect(10, 60, 101, 16));
        checkBox_carInfo_parkingLight = new QCheckBox(groupBox_5);
        checkBox_carInfo_parkingLight->setObjectName(QStringLiteral("checkBox_carInfo_parkingLight"));
        checkBox_carInfo_parkingLight->setGeometry(QRect(150, 60, 101, 16));
        checkBox_carInfo_frontFogLamb = new QCheckBox(groupBox_5);
        checkBox_carInfo_frontFogLamb->setObjectName(QStringLiteral("checkBox_carInfo_frontFogLamb"));
        checkBox_carInfo_frontFogLamb->setGeometry(QRect(10, 80, 111, 16));
        checkBox_carInfo_rearFogLamb = new QCheckBox(groupBox_5);
        checkBox_carInfo_rearFogLamb->setObjectName(QStringLiteral("checkBox_carInfo_rearFogLamb"));
        checkBox_carInfo_rearFogLamb->setGeometry(QRect(150, 80, 101, 16));
        checkBox_carInfo_acceleratorPedal = new QCheckBox(groupBox_5);
        checkBox_carInfo_acceleratorPedal->setObjectName(QStringLiteral("checkBox_carInfo_acceleratorPedal"));
        checkBox_carInfo_acceleratorPedal->setGeometry(QRect(10, 100, 141, 16));
        checkBox_carInfo_break = new QCheckBox(groupBox_5);
        checkBox_carInfo_break->setObjectName(QStringLiteral("checkBox_carInfo_break"));
        checkBox_carInfo_break->setGeometry(QRect(150, 100, 61, 16));
        checkBox_carInfo_saftyBelt = new QCheckBox(groupBox_5);
        checkBox_carInfo_saftyBelt->setObjectName(QStringLiteral("checkBox_carInfo_saftyBelt"));
        checkBox_carInfo_saftyBelt->setGeometry(QRect(10, 120, 81, 16));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 60, 54, 12));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(210, 60, 54, 12));
        lineEdit_carInfo_mileage = new QLineEdit(tab_5);
        lineEdit_carInfo_mileage->setObjectName(QStringLiteral("lineEdit_carInfo_mileage"));
        lineEdit_carInfo_mileage->setGeometry(QRect(70, 50, 131, 31));
        groupBox_6 = new QGroupBox(tab_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 90, 221, 51));
        radioButton_carInfo_steeringWheel_left = new QRadioButton(groupBox_6);
        radioButton_carInfo_steeringWheel_left->setObjectName(QStringLiteral("radioButton_carInfo_steeringWheel_left"));
        radioButton_carInfo_steeringWheel_left->setGeometry(QRect(10, 20, 51, 16));
        radioButton_carInfo_steeringWheel_middle = new QRadioButton(groupBox_6);
        radioButton_carInfo_steeringWheel_middle->setObjectName(QStringLiteral("radioButton_carInfo_steeringWheel_middle"));
        radioButton_carInfo_steeringWheel_middle->setGeometry(QRect(70, 20, 71, 16));
        radioButton_carInfo_steeringWheel_right = new QRadioButton(groupBox_6);
        radioButton_carInfo_steeringWheel_right->setObjectName(QStringLiteral("radioButton_carInfo_steeringWheel_right"));
        radioButton_carInfo_steeringWheel_right->setGeometry(QRect(150, 20, 51, 16));
        pushButton_carInfo_update = new QPushButton(tab_5);
        pushButton_carInfo_update->setObjectName(QStringLiteral("pushButton_carInfo_update"));
        pushButton_carInfo_update->setGeometry(QRect(520, 10, 141, 61));
        groupBox_7 = new QGroupBox(tab_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 140, 221, 51));
        checkBox_carInfo_door_driver = new QCheckBox(groupBox_7);
        checkBox_carInfo_door_driver->setObjectName(QStringLiteral("checkBox_carInfo_door_driver"));
        checkBox_carInfo_door_driver->setGeometry(QRect(10, 10, 81, 16));
        checkBox_carInfo_door_passenger = new QCheckBox(groupBox_7);
        checkBox_carInfo_door_passenger->setObjectName(QStringLiteral("checkBox_carInfo_door_passenger"));
        checkBox_carInfo_door_passenger->setGeometry(QRect(110, 10, 91, 16));
        checkBox_carInfo_door_rearLeft = new QCheckBox(groupBox_7);
        checkBox_carInfo_door_rearLeft->setObjectName(QStringLiteral("checkBox_carInfo_door_rearLeft"));
        checkBox_carInfo_door_rearLeft->setGeometry(QRect(10, 30, 81, 16));
        checkBox_carInfo_door_rearRight = new QCheckBox(groupBox_7);
        checkBox_carInfo_door_rearRight->setObjectName(QStringLiteral("checkBox_carInfo_door_rearRight"));
        checkBox_carInfo_door_rearRight->setGeometry(QRect(110, 30, 101, 16));
        groupBox_8 = new QGroupBox(tab_5);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(500, 90, 161, 101));
        radioButton_carInfo_gear_p = new QRadioButton(groupBox_8);
        radioButton_carInfo_gear_p->setObjectName(QStringLiteral("radioButton_carInfo_gear_p"));
        radioButton_carInfo_gear_p->setGeometry(QRect(20, 20, 41, 16));
        radioButton_carInfo_gear_R = new QRadioButton(groupBox_8);
        radioButton_carInfo_gear_R->setObjectName(QStringLiteral("radioButton_carInfo_gear_R"));
        radioButton_carInfo_gear_R->setGeometry(QRect(80, 20, 41, 16));
        radioButton_carInfo_gear_N = new QRadioButton(groupBox_8);
        radioButton_carInfo_gear_N->setObjectName(QStringLiteral("radioButton_carInfo_gear_N"));
        radioButton_carInfo_gear_N->setGeometry(QRect(20, 50, 41, 16));
        radioButton_carInfo_gear_D = new QRadioButton(groupBox_8);
        radioButton_carInfo_gear_D->setObjectName(QStringLiteral("radioButton_carInfo_gear_D"));
        radioButton_carInfo_gear_D->setGeometry(QRect(80, 50, 41, 16));
        radioButton_carInfo_gear_M = new QRadioButton(groupBox_8);
        radioButton_carInfo_gear_M->setObjectName(QStringLiteral("radioButton_carInfo_gear_M"));
        radioButton_carInfo_gear_M->setGeometry(QRect(20, 80, 41, 16));
        radioButton_carInfo_gear_I = new QRadioButton(groupBox_8);
        radioButton_carInfo_gear_I->setObjectName(QStringLiteral("radioButton_carInfo_gear_I"));
        radioButton_carInfo_gear_I->setGeometry(QRect(80, 80, 41, 16));
        tabWidget->addTab(tab_5, QString());
        pushButton_update = new QPushButton(centralWidget);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setGeometry(QRect(110, 640, 81, 31));
        pushButton_returnHome = new QPushButton(centralWidget);
        pushButton_returnHome->setObjectName(QStringLiteral("pushButton_returnHome"));
        pushButton_returnHome->setGeometry(QRect(10, 640, 81, 31));
        lineEdit_showTime = new QLineEdit(centralWidget);
        lineEdit_showTime->setObjectName(QStringLiteral("lineEdit_showTime"));
        lineEdit_showTime->setGeometry(QRect(10, 550, 181, 31));
        pushButton_sendCarInfo = new QPushButton(centralWidget);
        pushButton_sendCarInfo->setObjectName(QStringLiteral("pushButton_sendCarInfo"));
        pushButton_sendCarInfo->setGeometry(QRect(10, 600, 181, 31));
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

        tabWidget->setCurrentIndex(0);


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
        checkBox_sndWithCrc->setText(QApplication::translate("MainWindow", "crc", 0));
        pushButton_micOn->setText(QApplication::translate("MainWindow", "mic_on", 0));
        pushButton_micOff->setText(QApplication::translate("MainWindow", "mic_off", 0));
        pushButton_recStart->setText(QApplication::translate("MainWindow", "rec_start", 0));
        pushButton_recStop->setText(QApplication::translate("MainWindow", "rec_stop", 0));
        pushButton_eventStart->setText(QApplication::translate("MainWindow", "event", 0));
        pushButton_capture->setText(QApplication::translate("MainWindow", "capture", 0));
        pushButton_normalBrowse->setText(QApplication::translate("MainWindow", "normal", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\275\225\345\203\217", 0));
        pushButton_prevPage->setText(QApplication::translate("MainWindow", "prev_page", 0));
        pushButton_nextPage->setText(QApplication::translate("MainWindow", "next_page", 0));
        pushButton_photoBrowse->setText(QApplication::translate("MainWindow", "photo", 0));
        pushButton_eventBrowse->setText(QApplication::translate("MainWindow", "event", 0));
        pushButton_normalBrowse_inThumb->setText(QApplication::translate("MainWindow", "normal", 0));
        pushButton_exitBrowse->setText(QApplication::translate("MainWindow", "exit_browse", 0));
        pushButton_deleteAll->setText(QApplication::translate("MainWindow", "delete all", 0));
        groupBox_3->setTitle(QString());
        radioButton_1->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "3", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "4", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "5", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "6", 0));
        radioButton_8->setText(QApplication::translate("MainWindow", "8", 0));
        radioButton_9->setText(QApplication::translate("MainWindow", "9", 0));
        radioButton_7->setText(QApplication::translate("MainWindow", "7", 0));
        pushButton_playWithIndex->setText(QApplication::translate("MainWindow", "play", 0));
        groupBox_4->setTitle(QString());
        checkBox_1->setText(QApplication::translate("MainWindow", "1", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "2", 0));
        checkBox_3->setText(QApplication::translate("MainWindow", "3", 0));
        checkBox_6->setText(QApplication::translate("MainWindow", "6", 0));
        checkBox_4->setText(QApplication::translate("MainWindow", "4", 0));
        checkBox_5->setText(QApplication::translate("MainWindow", "5", 0));
        checkBox_8->setText(QApplication::translate("MainWindow", "8", 0));
        checkBox_7->setText(QApplication::translate("MainWindow", "7", 0));
        checkBox_9->setText(QApplication::translate("MainWindow", "9", 0));
        pushButton_move->setText(QApplication::translate("MainWindow", "move", 0));
        pushButton_delete->setText(QApplication::translate("MainWindow", "delete", 0));
        checkBox_all->setText(QApplication::translate("MainWindow", "all", 0));
        pushButton_clearCheckBox->setText(QApplication::translate("MainWindow", "clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\233\236\346\224\276", 0));
        pushButton_play->setText(QApplication::translate("MainWindow", "play", 0));
        pushButton_pause->setText(QApplication::translate("MainWindow", "pause", 0));
        pushButton_playPrev->setText(QApplication::translate("MainWindow", "prev", 0));
        pushButton_playNext->setText(QApplication::translate("MainWindow", "next", 0));
        pushButton_exitPlay->setText(QApplication::translate("MainWindow", "exit_play", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\346\222\255\346\224\276", 0));
        pushButton_1080p->setText(QApplication::translate("MainWindow", "1080p", 0));
        pushButton_720p->setText(QApplication::translate("MainWindow", "720p", 0));
        pushButton_5min->setText(QApplication::translate("MainWindow", "5min", 0));
        pushButton_3min->setText(QApplication::translate("MainWindow", "3min", 0));
        pushButton_1min->setText(QApplication::translate("MainWindow", "1min", 0));
        pushButton_format->setText(QApplication::translate("MainWindow", "format", 0));
        pushButton_loadDef->setText(QApplication::translate("MainWindow", "load_def", 0));
        pushButton_wifiOn->setText(QApplication::translate("MainWindow", "wifi on", 0));
        pushButton_wifiOff->setText(QApplication::translate("MainWindow", "wifi off", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0));
        pushButton_updateTime->setText(QApplication::translate("MainWindow", "update time", 0));
        pushButton_eventStart_byMcu->setText(QApplication::translate("MainWindow", "event record", 0));
        pushButton_powerOff->setText(QApplication::translate("MainWindow", "power off", 0));
        pushButton_stopRec_byMcu->setText(QApplication::translate("MainWindow", "stop rec", 0));
        pushButton_startRec_byMcu->setText(QApplication::translate("MainWindow", "start rec", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "mcu\350\247\246\345\217\221", 0));
        label_6->setText(QApplication::translate("MainWindow", "car speed:", 0));
        label_7->setText(QApplication::translate("MainWindow", "km/h", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "carInfo", 0));
        checkBox_carInfo_leftTurn->setText(QApplication::translate("MainWindow", "left turn", 0));
        checkBox_carInfo_rightTurn->setText(QApplication::translate("MainWindow", "right turn", 0));
        checkBox_carInfo_highBeam->setText(QApplication::translate("MainWindow", "high beam", 0));
        checkBox_carInfo_lowBeam->setText(QApplication::translate("MainWindow", "low beam", 0));
        checkBox_carInfo_troubleLight->setText(QApplication::translate("MainWindow", "trouble_light", 0));
        checkBox_carInfo_parkingLight->setText(QApplication::translate("MainWindow", "parking_light", 0));
        checkBox_carInfo_frontFogLamb->setText(QApplication::translate("MainWindow", "front fog lamb", 0));
        checkBox_carInfo_rearFogLamb->setText(QApplication::translate("MainWindow", "rear fog lamb", 0));
        checkBox_carInfo_acceleratorPedal->setText(QApplication::translate("MainWindow", "accelerator pedal", 0));
        checkBox_carInfo_break->setText(QApplication::translate("MainWindow", "break", 0));
        checkBox_carInfo_saftyBelt->setText(QApplication::translate("MainWindow", "safty belt", 0));
        label_8->setText(QApplication::translate("MainWindow", "mileage", 0));
        label_9->setText(QApplication::translate("MainWindow", "km", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "steeringWheel", 0));
        radioButton_carInfo_steeringWheel_left->setText(QApplication::translate("MainWindow", "left", 0));
        radioButton_carInfo_steeringWheel_middle->setText(QApplication::translate("MainWindow", "midlle", 0));
        radioButton_carInfo_steeringWheel_right->setText(QApplication::translate("MainWindow", "right", 0));
        pushButton_carInfo_update->setText(QApplication::translate("MainWindow", "update", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "door", 0));
        checkBox_carInfo_door_driver->setText(QApplication::translate("MainWindow", "driver", 0));
        checkBox_carInfo_door_passenger->setText(QApplication::translate("MainWindow", "passenger", 0));
        checkBox_carInfo_door_rearLeft->setText(QApplication::translate("MainWindow", "reart left", 0));
        checkBox_carInfo_door_rearRight->setText(QApplication::translate("MainWindow", "reart right", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "gear", 0));
        radioButton_carInfo_gear_p->setText(QApplication::translate("MainWindow", "P", 0));
        radioButton_carInfo_gear_R->setText(QApplication::translate("MainWindow", "R", 0));
        radioButton_carInfo_gear_N->setText(QApplication::translate("MainWindow", "N", 0));
        radioButton_carInfo_gear_D->setText(QApplication::translate("MainWindow", "D", 0));
        radioButton_carInfo_gear_M->setText(QApplication::translate("MainWindow", "M", 0));
        radioButton_carInfo_gear_I->setText(QApplication::translate("MainWindow", "I", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\350\275\246\346\234\272\344\277\241\346\201\257", 0));
        pushButton_update->setText(QApplication::translate("MainWindow", "update", 0));
        pushButton_returnHome->setText(QApplication::translate("MainWindow", "return home", 0));
        pushButton_sendCarInfo->setText(QApplication::translate("MainWindow", "send car Info", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
