#ifndef DIALOG_CONFIG_RECFLOW_H
#define DIALOG_CONFIG_RECFLOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class Dialog_config_recFlow;
}

class Dialog_config_recFlow : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_config_recFlow(QWidget *parent = 0, int recFlowIdx = 0);
    ~Dialog_config_recFlow();

private slots:
    void on_buttonBox_accepted();

private:
    void initDialogConfigRecFlow();

private:
    Ui::Dialog_config_recFlow *ui;

    MainWindow* dialogConfig_parent;
    int recFlowInfos_idx;
    REC_FLOW_INFOS_s recFlowInfo_copy;
};

#endif // DIALOG_CONFIG_RECFLOW_H
