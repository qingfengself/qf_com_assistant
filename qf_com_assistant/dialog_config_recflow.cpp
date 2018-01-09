#include "dialog_config_recflow.h"
#include "ui_dialog_config_recflow.h"

#include "mainwindow.h"

Dialog_config_recFlow::Dialog_config_recFlow(QWidget *parent, int recFlowIdx) :
    QDialog(parent),
    ui(new Ui::Dialog_config_recFlow),
    recFlowInfos_idx(recFlowIdx)
{
    ui->setupUi(this);

    initDialogConfigRecFlow();
}

Dialog_config_recFlow::~Dialog_config_recFlow()
{
    delete ui;
}

/***************************************************
 * private functions
 * *************************************************/

void Dialog_config_recFlow::initDialogConfigRecFlow()
{
    dialogConfig_parent = (MainWindow*)this->parent();
    recFlowInfo_copy = dialogConfig_parent->getRecFlowInfos(recFlowInfos_idx);

    ui->lineEdit_microName->setText(recFlowInfo_copy.recFlow_name);
    ui->lineEdit_cmdInterval->setText(QString("%1").arg(recFlowInfo_copy.recFlow_cmdDelayTime));
    ui->lineEdit_microInterval->setText(QString("%1").arg(recFlowInfo_copy.recFlow_groupDelayTime));

    ui->plainTextEdit_microCmdList->appendPlainText(QString("total cmds : %1").arg(recFlowInfo_copy.recFlow_cmds.size()));
    for (auto it=recFlowInfo_copy.recFlow_cmds.cbegin(); it!=recFlowInfo_copy.recFlow_cmds.cend(); it++) {
        ui->plainTextEdit_microCmdList->appendPlainText(dialogConfig_parent->hexByteArrayToString(*it));
    }

}

void Dialog_config_recFlow::on_buttonBox_accepted()
{
    recFlowInfo_copy.recFlow_name = ui->lineEdit_microName->text();
    recFlowInfo_copy.recFlow_cmdDelayTime = ui->lineEdit_cmdInterval->text().toInt();
    recFlowInfo_copy.recFlow_groupDelayTime = ui->lineEdit_microInterval->text().toInt();
    dialogConfig_parent->setRecFlowInfos(recFlowInfo_copy);
}
