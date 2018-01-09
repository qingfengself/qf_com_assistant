/********************************************************************************
** Form generated from reading UI file 'dialog_config_recflow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CONFIG_RECFLOW_H
#define UI_DIALOG_CONFIG_RECFLOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_config_recFlow
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_microName;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_cmdInterval;
    QLabel *label_3;
    QLineEdit *lineEdit_microInterval;
    QGroupBox *groupBox;
    QPlainTextEdit *plainTextEdit_microCmdList;

    void setupUi(QDialog *Dialog_config_recFlow)
    {
        if (Dialog_config_recFlow->objectName().isEmpty())
            Dialog_config_recFlow->setObjectName(QStringLiteral("Dialog_config_recFlow"));
        Dialog_config_recFlow->resize(428, 319);
        buttonBox = new QDialogButtonBox(Dialog_config_recFlow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(60, 280, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(Dialog_config_recFlow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 19, 381, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_microName = new QLineEdit(gridLayoutWidget);
        lineEdit_microName->setObjectName(QStringLiteral("lineEdit_microName"));

        gridLayout->addWidget(lineEdit_microName, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_cmdInterval = new QLineEdit(gridLayoutWidget);
        lineEdit_cmdInterval->setObjectName(QStringLiteral("lineEdit_cmdInterval"));

        gridLayout->addWidget(lineEdit_cmdInterval, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_microInterval = new QLineEdit(gridLayoutWidget);
        lineEdit_microInterval->setObjectName(QStringLiteral("lineEdit_microInterval"));

        gridLayout->addWidget(lineEdit_microInterval, 2, 1, 1, 1);

        groupBox = new QGroupBox(Dialog_config_recFlow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 160, 401, 111));
        plainTextEdit_microCmdList = new QPlainTextEdit(groupBox);
        plainTextEdit_microCmdList->setObjectName(QStringLiteral("plainTextEdit_microCmdList"));
        plainTextEdit_microCmdList->setGeometry(QRect(10, 20, 361, 81));

        retranslateUi(Dialog_config_recFlow);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_config_recFlow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_config_recFlow, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_config_recFlow);
    } // setupUi

    void retranslateUi(QDialog *Dialog_config_recFlow)
    {
        Dialog_config_recFlow->setWindowTitle(QApplication::translate("Dialog_config_recFlow", "Dialog", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_microName->setToolTip(QApplication::translate("Dialog_config_recFlow", "<html><head/><body><p>\350\277\231\347\273\204\345\221\275\344\273\244\347\232\204\345\220\215\347\247\260</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Dialog_config_recFlow", "\345\256\217\345\220\215\347\247\260", 0));
        label_2->setText(QApplication::translate("Dialog_config_recFlow", "\346\214\207\344\273\244\351\227\264\351\232\224(ms)", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_cmdInterval->setToolTip(QApplication::translate("Dialog_config_recFlow", "<html><head/><body><p>\350\277\231\347\273\204\345\221\275\344\273\244\344\270\255\357\274\214cmd1 \344\270\216 cmd2\344\271\213\351\227\264\346\211\247\350\241\214\351\227\264\351\232\224</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("Dialog_config_recFlow", "\345\256\217\351\227\264\351\227\264\351\232\224(ms)", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_microInterval->setToolTip(QApplication::translate("Dialog_config_recFlow", "<html><head/><body><p>\346\257\217\347\273\204\345\221\275\344\273\244\346\211\247\350\241\214\347\232\204\346\227\266\351\227\264\351\227\264\351\232\224\343\200\202</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("Dialog_config_recFlow", "cmd list", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_config_recFlow: public Ui_Dialog_config_recFlow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CONFIG_RECFLOW_H
