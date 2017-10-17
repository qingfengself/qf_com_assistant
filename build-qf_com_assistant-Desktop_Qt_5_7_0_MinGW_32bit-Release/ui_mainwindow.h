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
    QGroupBox *groupBox_5;
    QPushButton *pushButton_capture;
    QPushButton *pushButton_capture_save;
    QPushButton *pushButton_capture_giveUp;
    QPushButton *pushButton_enterRecordMode;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_eventStart;
    QPushButton *pushButton_eventStart_byMcu;
    QWidget *tab_2;
    QPushButton *pushButton_prevPage;
    QPushButton *pushButton_nextPage;
    QPushButton *pushButton_photoBrowse;
    QPushButton *pushButton_eventBrowse;
    QPushButton *pushButton_normalBrowse_inThumb;
    QPushButton *pushButton_receiveFileStatus_yes;
    QPushButton *pushButton_receivePageStatus_yes;
    QGroupBox *groupBox_15;
    QPushButton *pushButton_select_1;
    QPushButton *pushButton_select_2;
    QPushButton *pushButton_select_3;
    QPushButton *pushButton_select_6;
    QPushButton *pushButton_select_4;
    QPushButton *pushButton_select_5;
    QPushButton *pushButton_select_7;
    QPushButton *pushButton_select_8;
    QPushButton *pushButton_select_9;
    QPushButton *pushButton_select_all;
    QPushButton *pushButton_select_cancel;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_move;
    QWidget *tab_4;
    QPushButton *pushButton_playPrev;
    QPushButton *pushButton_playNext;
    QPushButton *pushButton_exitPlay;
    QPushButton *pushButton_playPauseCtrl;
    QGroupBox *groupBox_16;
    QPushButton *pushButton_playFile_6;
    QPushButton *pushButton_playFile_1;
    QPushButton *pushButton_playFile_5;
    QPushButton *pushButton_playFile_7;
    QPushButton *pushButton_playFile_2;
    QPushButton *pushButton_playFile_4;
    QPushButton *pushButton_playFile_8;
    QPushButton *pushButton_playFile_9;
    QPushButton *pushButton_playFile_3;
    QWidget *tab_3;
    QPushButton *pushButton_1080p;
    QPushButton *pushButton_720p;
    QPushButton *pushButton_5min;
    QPushButton *pushButton_3min;
    QPushButton *pushButton_1min;
    QPushButton *pushButton_format;
    QPushButton *pushButton_loadDef;
    QPushButton *pushButton_recStart;
    QPushButton *pushButton_recStop;
    QPushButton *pushButton_micOff;
    QPushButton *pushButton_micOn;
    QPushButton *pushButton_stampSpeedOff;
    QPushButton *pushButton_StampSpeedOn;
    QPushButton *pushButton_StampTimeOff;
    QPushButton *pushButton_StampTimeOn;
    QPushButton *pushButton_languageChinese;
    QPushButton *pushButton_languagEnglish;
    QPushButton *pushButton_ackSyncSet;
    QWidget *tab_5;
    QPushButton *pushButton_accOff;
    QPushButton *pushButton_powerOff;
    QWidget *tab_25;
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
    QCheckBox *checkBox_all;
    QPushButton *pushButton_clearCheckBox;
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
    QPushButton *pushButton_exitBrowse;
    QPushButton *pushButton_deleteAll;
    QPushButton *pushButton_playWithIndex;
    QPushButton *pushButton_update;
    QPushButton *pushButton_normalBrowse;
    QPushButton *pushButton_returnHome;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_startRec_byMcu;
    QPushButton *pushButton_stopRec_byMcu;
    QLineEdit *lineEdit_showTime;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_updateTime;
    QLineEdit *lineEdit_carSpeed;
    QPushButton *pushButton_carSpeed;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(882, 759);
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
        tabWidget->setGeometry(QRect(220, 530, 651, 181));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(40, 50, 151, 71));
        pushButton_capture = new QPushButton(groupBox_5);
        pushButton_capture->setObjectName(QStringLiteral("pushButton_capture"));
        pushButton_capture->setGeometry(QRect(10, 20, 61, 23));
        pushButton_capture_save = new QPushButton(groupBox_5);
        pushButton_capture_save->setObjectName(QStringLiteral("pushButton_capture_save"));
        pushButton_capture_save->setGeometry(QRect(80, 10, 61, 23));
        pushButton_capture_giveUp = new QPushButton(groupBox_5);
        pushButton_capture_giveUp->setObjectName(QStringLiteral("pushButton_capture_giveUp"));
        pushButton_capture_giveUp->setGeometry(QRect(80, 40, 61, 23));
        pushButton_enterRecordMode = new QPushButton(tab);
        pushButton_enterRecordMode->setObjectName(QStringLiteral("pushButton_enterRecordMode"));
        pushButton_enterRecordMode->setGeometry(QRect(10, 10, 81, 31));
        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(220, 50, 131, 71));
        pushButton_eventStart = new QPushButton(groupBox_6);
        pushButton_eventStart->setObjectName(QStringLiteral("pushButton_eventStart"));
        pushButton_eventStart->setGeometry(QRect(10, 10, 81, 23));
        pushButton_eventStart_byMcu = new QPushButton(groupBox_6);
        pushButton_eventStart_byMcu->setObjectName(QStringLiteral("pushButton_eventStart_byMcu"));
        pushButton_eventStart_byMcu->setGeometry(QRect(10, 40, 81, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_prevPage = new QPushButton(tab_2);
        pushButton_prevPage->setObjectName(QStringLiteral("pushButton_prevPage"));
        pushButton_prevPage->setGeometry(QRect(390, 40, 75, 23));
        pushButton_nextPage = new QPushButton(tab_2);
        pushButton_nextPage->setObjectName(QStringLiteral("pushButton_nextPage"));
        pushButton_nextPage->setGeometry(QRect(390, 70, 75, 23));
        pushButton_photoBrowse = new QPushButton(tab_2);
        pushButton_photoBrowse->setObjectName(QStringLiteral("pushButton_photoBrowse"));
        pushButton_photoBrowse->setGeometry(QRect(170, 10, 75, 23));
        pushButton_eventBrowse = new QPushButton(tab_2);
        pushButton_eventBrowse->setObjectName(QStringLiteral("pushButton_eventBrowse"));
        pushButton_eventBrowse->setGeometry(QRect(90, 10, 75, 23));
        pushButton_normalBrowse_inThumb = new QPushButton(tab_2);
        pushButton_normalBrowse_inThumb->setObjectName(QStringLiteral("pushButton_normalBrowse_inThumb"));
        pushButton_normalBrowse_inThumb->setGeometry(QRect(10, 10, 75, 23));
        pushButton_receiveFileStatus_yes = new QPushButton(tab_2);
        pushButton_receiveFileStatus_yes->setObjectName(QStringLiteral("pushButton_receiveFileStatus_yes"));
        pushButton_receiveFileStatus_yes->setGeometry(QRect(10, 80, 75, 23));
        pushButton_receivePageStatus_yes = new QPushButton(tab_2);
        pushButton_receivePageStatus_yes->setObjectName(QStringLiteral("pushButton_receivePageStatus_yes"));
        pushButton_receivePageStatus_yes->setGeometry(QRect(10, 100, 75, 23));
        groupBox_15 = new QGroupBox(tab_2);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(480, 0, 161, 151));
        pushButton_select_1 = new QPushButton(groupBox_15);
        pushButton_select_1->setObjectName(QStringLiteral("pushButton_select_1"));
        pushButton_select_1->setGeometry(QRect(20, 20, 41, 23));
        pushButton_select_2 = new QPushButton(groupBox_15);
        pushButton_select_2->setObjectName(QStringLiteral("pushButton_select_2"));
        pushButton_select_2->setGeometry(QRect(60, 20, 41, 23));
        pushButton_select_3 = new QPushButton(groupBox_15);
        pushButton_select_3->setObjectName(QStringLiteral("pushButton_select_3"));
        pushButton_select_3->setGeometry(QRect(100, 20, 41, 23));
        pushButton_select_6 = new QPushButton(groupBox_15);
        pushButton_select_6->setObjectName(QStringLiteral("pushButton_select_6"));
        pushButton_select_6->setGeometry(QRect(100, 40, 41, 23));
        pushButton_select_4 = new QPushButton(groupBox_15);
        pushButton_select_4->setObjectName(QStringLiteral("pushButton_select_4"));
        pushButton_select_4->setGeometry(QRect(20, 40, 41, 23));
        pushButton_select_5 = new QPushButton(groupBox_15);
        pushButton_select_5->setObjectName(QStringLiteral("pushButton_select_5"));
        pushButton_select_5->setGeometry(QRect(60, 40, 41, 23));
        pushButton_select_7 = new QPushButton(groupBox_15);
        pushButton_select_7->setObjectName(QStringLiteral("pushButton_select_7"));
        pushButton_select_7->setGeometry(QRect(20, 60, 41, 23));
        pushButton_select_8 = new QPushButton(groupBox_15);
        pushButton_select_8->setObjectName(QStringLiteral("pushButton_select_8"));
        pushButton_select_8->setGeometry(QRect(60, 60, 41, 23));
        pushButton_select_9 = new QPushButton(groupBox_15);
        pushButton_select_9->setObjectName(QStringLiteral("pushButton_select_9"));
        pushButton_select_9->setGeometry(QRect(100, 60, 41, 23));
        pushButton_select_all = new QPushButton(groupBox_15);
        pushButton_select_all->setObjectName(QStringLiteral("pushButton_select_all"));
        pushButton_select_all->setGeometry(QRect(10, 90, 61, 23));
        pushButton_select_cancel = new QPushButton(groupBox_15);
        pushButton_select_cancel->setObjectName(QStringLiteral("pushButton_select_cancel"));
        pushButton_select_cancel->setGeometry(QRect(90, 90, 61, 23));
        pushButton_delete = new QPushButton(groupBox_15);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(90, 120, 61, 23));
        pushButton_move = new QPushButton(groupBox_15);
        pushButton_move->setObjectName(QStringLiteral("pushButton_move"));
        pushButton_move->setGeometry(QRect(10, 120, 61, 23));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_playPrev = new QPushButton(tab_4);
        pushButton_playPrev->setObjectName(QStringLiteral("pushButton_playPrev"));
        pushButton_playPrev->setGeometry(QRect(90, 110, 61, 23));
        pushButton_playNext = new QPushButton(tab_4);
        pushButton_playNext->setObjectName(QStringLiteral("pushButton_playNext"));
        pushButton_playNext->setGeometry(QRect(250, 110, 61, 23));
        pushButton_exitPlay = new QPushButton(tab_4);
        pushButton_exitPlay->setObjectName(QStringLiteral("pushButton_exitPlay"));
        pushButton_exitPlay->setGeometry(QRect(10, 0, 71, 23));
        pushButton_playPauseCtrl = new QPushButton(tab_4);
        pushButton_playPauseCtrl->setObjectName(QStringLiteral("pushButton_playPauseCtrl"));
        pushButton_playPauseCtrl->setGeometry(QRect(160, 110, 75, 23));
        groupBox_16 = new QGroupBox(tab_4);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        groupBox_16->setGeometry(QRect(110, 10, 171, 91));
        pushButton_playFile_6 = new QPushButton(groupBox_16);
        pushButton_playFile_6->setObjectName(QStringLiteral("pushButton_playFile_6"));
        pushButton_playFile_6->setGeometry(QRect(110, 40, 51, 23));
        pushButton_playFile_1 = new QPushButton(groupBox_16);
        pushButton_playFile_1->setObjectName(QStringLiteral("pushButton_playFile_1"));
        pushButton_playFile_1->setGeometry(QRect(10, 20, 51, 23));
        pushButton_playFile_5 = new QPushButton(groupBox_16);
        pushButton_playFile_5->setObjectName(QStringLiteral("pushButton_playFile_5"));
        pushButton_playFile_5->setGeometry(QRect(60, 40, 51, 23));
        pushButton_playFile_7 = new QPushButton(groupBox_16);
        pushButton_playFile_7->setObjectName(QStringLiteral("pushButton_playFile_7"));
        pushButton_playFile_7->setGeometry(QRect(10, 60, 51, 23));
        pushButton_playFile_2 = new QPushButton(groupBox_16);
        pushButton_playFile_2->setObjectName(QStringLiteral("pushButton_playFile_2"));
        pushButton_playFile_2->setGeometry(QRect(60, 20, 51, 23));
        pushButton_playFile_4 = new QPushButton(groupBox_16);
        pushButton_playFile_4->setObjectName(QStringLiteral("pushButton_playFile_4"));
        pushButton_playFile_4->setGeometry(QRect(10, 40, 51, 23));
        pushButton_playFile_8 = new QPushButton(groupBox_16);
        pushButton_playFile_8->setObjectName(QStringLiteral("pushButton_playFile_8"));
        pushButton_playFile_8->setGeometry(QRect(60, 60, 51, 23));
        pushButton_playFile_9 = new QPushButton(groupBox_16);
        pushButton_playFile_9->setObjectName(QStringLiteral("pushButton_playFile_9"));
        pushButton_playFile_9->setGeometry(QRect(110, 60, 51, 23));
        pushButton_playFile_3 = new QPushButton(groupBox_16);
        pushButton_playFile_3->setObjectName(QStringLiteral("pushButton_playFile_3"));
        pushButton_playFile_3->setGeometry(QRect(110, 20, 51, 23));
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_1080p = new QPushButton(tab_3);
        pushButton_1080p->setObjectName(QStringLiteral("pushButton_1080p"));
        pushButton_1080p->setGeometry(QRect(190, 10, 61, 23));
        pushButton_720p = new QPushButton(tab_3);
        pushButton_720p->setObjectName(QStringLiteral("pushButton_720p"));
        pushButton_720p->setGeometry(QRect(260, 10, 61, 23));
        pushButton_5min = new QPushButton(tab_3);
        pushButton_5min->setObjectName(QStringLiteral("pushButton_5min"));
        pushButton_5min->setGeometry(QRect(190, 40, 61, 23));
        pushButton_3min = new QPushButton(tab_3);
        pushButton_3min->setObjectName(QStringLiteral("pushButton_3min"));
        pushButton_3min->setGeometry(QRect(260, 40, 61, 23));
        pushButton_1min = new QPushButton(tab_3);
        pushButton_1min->setObjectName(QStringLiteral("pushButton_1min"));
        pushButton_1min->setGeometry(QRect(330, 40, 61, 23));
        pushButton_format = new QPushButton(tab_3);
        pushButton_format->setObjectName(QStringLiteral("pushButton_format"));
        pushButton_format->setGeometry(QRect(120, 80, 91, 31));
        pushButton_loadDef = new QPushButton(tab_3);
        pushButton_loadDef->setObjectName(QStringLiteral("pushButton_loadDef"));
        pushButton_loadDef->setGeometry(QRect(220, 80, 81, 31));
        pushButton_recStart = new QPushButton(tab_3);
        pushButton_recStart->setObjectName(QStringLiteral("pushButton_recStart"));
        pushButton_recStart->setGeometry(QRect(10, 10, 75, 23));
        pushButton_recStop = new QPushButton(tab_3);
        pushButton_recStop->setObjectName(QStringLiteral("pushButton_recStop"));
        pushButton_recStop->setGeometry(QRect(10, 40, 75, 23));
        pushButton_micOff = new QPushButton(tab_3);
        pushButton_micOff->setObjectName(QStringLiteral("pushButton_micOff"));
        pushButton_micOff->setGeometry(QRect(100, 40, 75, 23));
        pushButton_micOn = new QPushButton(tab_3);
        pushButton_micOn->setObjectName(QStringLiteral("pushButton_micOn"));
        pushButton_micOn->setGeometry(QRect(100, 10, 75, 23));
        pushButton_stampSpeedOff = new QPushButton(tab_3);
        pushButton_stampSpeedOff->setObjectName(QStringLiteral("pushButton_stampSpeedOff"));
        pushButton_stampSpeedOff->setGeometry(QRect(400, 10, 101, 23));
        pushButton_StampSpeedOn = new QPushButton(tab_3);
        pushButton_StampSpeedOn->setObjectName(QStringLiteral("pushButton_StampSpeedOn"));
        pushButton_StampSpeedOn->setGeometry(QRect(400, 40, 101, 23));
        pushButton_StampTimeOff = new QPushButton(tab_3);
        pushButton_StampTimeOff->setObjectName(QStringLiteral("pushButton_StampTimeOff"));
        pushButton_StampTimeOff->setGeometry(QRect(510, 10, 101, 23));
        pushButton_StampTimeOn = new QPushButton(tab_3);
        pushButton_StampTimeOn->setObjectName(QStringLiteral("pushButton_StampTimeOn"));
        pushButton_StampTimeOn->setGeometry(QRect(510, 40, 101, 23));
        pushButton_languageChinese = new QPushButton(tab_3);
        pushButton_languageChinese->setObjectName(QStringLiteral("pushButton_languageChinese"));
        pushButton_languageChinese->setGeometry(QRect(10, 80, 101, 23));
        pushButton_languagEnglish = new QPushButton(tab_3);
        pushButton_languagEnglish->setObjectName(QStringLiteral("pushButton_languagEnglish"));
        pushButton_languagEnglish->setGeometry(QRect(10, 110, 101, 23));
        pushButton_ackSyncSet = new QPushButton(tab_3);
        pushButton_ackSyncSet->setObjectName(QStringLiteral("pushButton_ackSyncSet"));
        pushButton_ackSyncSet->setGeometry(QRect(310, 80, 91, 31));
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pushButton_accOff = new QPushButton(tab_5);
        pushButton_accOff->setObjectName(QStringLiteral("pushButton_accOff"));
        pushButton_accOff->setGeometry(QRect(10, 10, 81, 23));
        pushButton_powerOff = new QPushButton(tab_5);
        pushButton_powerOff->setObjectName(QStringLiteral("pushButton_powerOff"));
        pushButton_powerOff->setGeometry(QRect(10, 40, 81, 23));
        tabWidget->addTab(tab_5, QString());
        tab_25 = new QWidget();
        tab_25->setObjectName(QStringLiteral("tab_25"));
        groupBox_4 = new QGroupBox(tab_25);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 191, 81));
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
        checkBox_all = new QCheckBox(groupBox_4);
        checkBox_all->setObjectName(QStringLiteral("checkBox_all"));
        checkBox_all->setGeometry(QRect(130, 10, 41, 16));
        pushButton_clearCheckBox = new QPushButton(groupBox_4);
        pushButton_clearCheckBox->setObjectName(QStringLiteral("pushButton_clearCheckBox"));
        pushButton_clearCheckBox->setGeometry(QRect(130, 40, 51, 23));
        groupBox_3 = new QGroupBox(tab_25);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(190, 0, 131, 81));
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
        pushButton_exitBrowse = new QPushButton(tab_25);
        pushButton_exitBrowse->setObjectName(QStringLiteral("pushButton_exitBrowse"));
        pushButton_exitBrowse->setGeometry(QRect(320, 20, 75, 23));
        pushButton_deleteAll = new QPushButton(tab_25);
        pushButton_deleteAll->setObjectName(QStringLiteral("pushButton_deleteAll"));
        pushButton_deleteAll->setGeometry(QRect(320, 0, 75, 23));
        pushButton_playWithIndex = new QPushButton(tab_25);
        pushButton_playWithIndex->setObjectName(QStringLiteral("pushButton_playWithIndex"));
        pushButton_playWithIndex->setGeometry(QRect(320, 40, 75, 23));
        pushButton_update = new QPushButton(tab_25);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setGeometry(QRect(400, 40, 81, 21));
        pushButton_normalBrowse = new QPushButton(tab_25);
        pushButton_normalBrowse->setObjectName(QStringLiteral("pushButton_normalBrowse"));
        pushButton_normalBrowse->setGeometry(QRect(400, 0, 81, 23));
        pushButton_returnHome = new QPushButton(tab_25);
        pushButton_returnHome->setObjectName(QStringLiteral("pushButton_returnHome"));
        pushButton_returnHome->setGeometry(QRect(400, 20, 81, 21));
        pushButton_play = new QPushButton(tab_25);
        pushButton_play->setObjectName(QStringLiteral("pushButton_play"));
        pushButton_play->setGeometry(QRect(0, 80, 75, 23));
        pushButton_pause = new QPushButton(tab_25);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));
        pushButton_pause->setGeometry(QRect(0, 100, 75, 23));
        pushButton_startRec_byMcu = new QPushButton(tab_25);
        pushButton_startRec_byMcu->setObjectName(QStringLiteral("pushButton_startRec_byMcu"));
        pushButton_startRec_byMcu->setGeometry(QRect(80, 80, 81, 23));
        pushButton_stopRec_byMcu = new QPushButton(tab_25);
        pushButton_stopRec_byMcu->setObjectName(QStringLiteral("pushButton_stopRec_byMcu"));
        pushButton_stopRec_byMcu->setGeometry(QRect(80, 100, 81, 23));
        tabWidget->addTab(tab_25, QString());
        lineEdit_showTime = new QLineEdit(centralWidget);
        lineEdit_showTime->setObjectName(QStringLiteral("lineEdit_showTime"));
        lineEdit_showTime->setGeometry(QRect(10, 540, 181, 31));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(120, 330, 75, 23));
        pushButton_updateTime = new QPushButton(centralWidget);
        pushButton_updateTime->setObjectName(QStringLiteral("pushButton_updateTime"));
        pushButton_updateTime->setGeometry(QRect(10, 580, 181, 31));
        lineEdit_carSpeed = new QLineEdit(centralWidget);
        lineEdit_carSpeed->setObjectName(QStringLiteral("lineEdit_carSpeed"));
        lineEdit_carSpeed->setGeometry(QRect(10, 620, 111, 21));
        pushButton_carSpeed = new QPushButton(centralWidget);
        pushButton_carSpeed->setObjectName(QStringLiteral("pushButton_carSpeed"));
        pushButton_carSpeed->setGeometry(QRect(10, 650, 181, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(130, 621, 54, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "S331", 0));
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
        groupBox_5->setTitle(QString());
        pushButton_capture->setText(QApplication::translate("MainWindow", "capture", 0));
        pushButton_capture_save->setText(QApplication::translate("MainWindow", "save", 0));
        pushButton_capture_giveUp->setText(QApplication::translate("MainWindow", "give up", 0));
        pushButton_enterRecordMode->setText(QApplication::translate("MainWindow", "enter_rec", 0));
        groupBox_6->setTitle(QString());
        pushButton_eventStart->setText(QApplication::translate("MainWindow", "event_user", 0));
        pushButton_eventStart_byMcu->setText(QApplication::translate("MainWindow", "event_crash", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\275\225\345\203\217", 0));
        pushButton_prevPage->setText(QApplication::translate("MainWindow", "prev_page", 0));
        pushButton_nextPage->setText(QApplication::translate("MainWindow", "next_page", 0));
        pushButton_photoBrowse->setText(QApplication::translate("MainWindow", "photo", 0));
        pushButton_eventBrowse->setText(QApplication::translate("MainWindow", "event", 0));
        pushButton_normalBrowse_inThumb->setText(QApplication::translate("MainWindow", "normal", 0));
        pushButton_receiveFileStatus_yes->setText(QApplication::translate("MainWindow", "file_yes", 0));
        pushButton_receivePageStatus_yes->setText(QApplication::translate("MainWindow", "page_yes", 0));
        groupBox_15->setTitle(QApplication::translate("MainWindow", "select", 0));
        pushButton_select_1->setText(QApplication::translate("MainWindow", "1", 0));
        pushButton_select_2->setText(QApplication::translate("MainWindow", "2", 0));
        pushButton_select_3->setText(QApplication::translate("MainWindow", "3", 0));
        pushButton_select_6->setText(QApplication::translate("MainWindow", "6", 0));
        pushButton_select_4->setText(QApplication::translate("MainWindow", "4", 0));
        pushButton_select_5->setText(QApplication::translate("MainWindow", "5", 0));
        pushButton_select_7->setText(QApplication::translate("MainWindow", "7", 0));
        pushButton_select_8->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_select_9->setText(QApplication::translate("MainWindow", "9", 0));
        pushButton_select_all->setText(QApplication::translate("MainWindow", "all", 0));
        pushButton_select_cancel->setText(QApplication::translate("MainWindow", "cancel", 0));
        pushButton_delete->setText(QApplication::translate("MainWindow", "delete", 0));
        pushButton_move->setText(QApplication::translate("MainWindow", "move", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\233\236\346\224\276", 0));
        pushButton_playPrev->setText(QApplication::translate("MainWindow", "prev", 0));
        pushButton_playNext->setText(QApplication::translate("MainWindow", "next", 0));
        pushButton_exitPlay->setText(QApplication::translate("MainWindow", "exit_play", 0));
        pushButton_playPauseCtrl->setText(QApplication::translate("MainWindow", "play/pause", 0));
        groupBox_16->setTitle(QApplication::translate("MainWindow", "play", 0));
        pushButton_playFile_6->setText(QApplication::translate("MainWindow", "play6", 0));
        pushButton_playFile_1->setText(QApplication::translate("MainWindow", "play1", 0));
        pushButton_playFile_5->setText(QApplication::translate("MainWindow", "play5", 0));
        pushButton_playFile_7->setText(QApplication::translate("MainWindow", "play7", 0));
        pushButton_playFile_2->setText(QApplication::translate("MainWindow", "play2", 0));
        pushButton_playFile_4->setText(QApplication::translate("MainWindow", "play4", 0));
        pushButton_playFile_8->setText(QApplication::translate("MainWindow", "play8", 0));
        pushButton_playFile_9->setText(QApplication::translate("MainWindow", "play9", 0));
        pushButton_playFile_3->setText(QApplication::translate("MainWindow", "play3", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\346\222\255\346\224\276", 0));
        pushButton_1080p->setText(QApplication::translate("MainWindow", "1080p", 0));
        pushButton_720p->setText(QApplication::translate("MainWindow", "720p", 0));
        pushButton_5min->setText(QApplication::translate("MainWindow", "5min", 0));
        pushButton_3min->setText(QApplication::translate("MainWindow", "3min", 0));
        pushButton_1min->setText(QApplication::translate("MainWindow", "1min", 0));
        pushButton_format->setText(QApplication::translate("MainWindow", "format", 0));
        pushButton_loadDef->setText(QApplication::translate("MainWindow", "load_def", 0));
        pushButton_recStart->setText(QApplication::translate("MainWindow", "rec_start", 0));
        pushButton_recStop->setText(QApplication::translate("MainWindow", "rec_stop", 0));
        pushButton_micOff->setText(QApplication::translate("MainWindow", "mic_off", 0));
        pushButton_micOn->setText(QApplication::translate("MainWindow", "mic_on", 0));
        pushButton_stampSpeedOff->setText(QApplication::translate("MainWindow", "stamp_speed_off", 0));
        pushButton_StampSpeedOn->setText(QApplication::translate("MainWindow", "stamp_speed_on", 0));
        pushButton_StampTimeOff->setText(QApplication::translate("MainWindow", "stamp_time_off", 0));
        pushButton_StampTimeOn->setText(QApplication::translate("MainWindow", "stamp_time_on", 0));
        pushButton_languageChinese->setText(QApplication::translate("MainWindow", "chinese", 0));
        pushButton_languagEnglish->setText(QApplication::translate("MainWindow", "english", 0));
        pushButton_ackSyncSet->setText(QApplication::translate("MainWindow", "ack_sync_set", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0));
        pushButton_accOff->setText(QApplication::translate("MainWindow", "Acc off", 0));
        pushButton_powerOff->setText(QApplication::translate("MainWindow", "power off", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\347\224\265\346\272\220", 0));
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
        checkBox_all->setText(QApplication::translate("MainWindow", "all", 0));
        pushButton_clearCheckBox->setText(QApplication::translate("MainWindow", "clear", 0));
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
        pushButton_exitBrowse->setText(QApplication::translate("MainWindow", "exit_browse", 0));
        pushButton_deleteAll->setText(QApplication::translate("MainWindow", "delete all", 0));
        pushButton_playWithIndex->setText(QApplication::translate("MainWindow", "exit_browse", 0));
        pushButton_update->setText(QApplication::translate("MainWindow", "update", 0));
        pushButton_normalBrowse->setText(QApplication::translate("MainWindow", "normal", 0));
        pushButton_returnHome->setText(QApplication::translate("MainWindow", "return home", 0));
        pushButton_play->setText(QApplication::translate("MainWindow", "play", 0));
        pushButton_pause->setText(QApplication::translate("MainWindow", "pause", 0));
        pushButton_startRec_byMcu->setText(QApplication::translate("MainWindow", "start rec", 0));
        pushButton_stopRec_byMcu->setText(QApplication::translate("MainWindow", "stop rec", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_25), QApplication::translate("MainWindow", "\345\272\237\345\274\203", 0));
        pushButton_clear->setText(QApplication::translate("MainWindow", "clear", 0));
        pushButton_updateTime->setText(QApplication::translate("MainWindow", "update time", 0));
        pushButton_carSpeed->setText(QApplication::translate("MainWindow", "sync_carSpeed", 0));
        label_6->setText(QApplication::translate("MainWindow", "0.01 km/h", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
