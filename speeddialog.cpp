#include "speeddialog.h"
#include "ui_speeddialog.h"

SpeedDialog::SpeedDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpeedDialog)
{
    ui->setupUi(this);
}

SpeedDialog::~SpeedDialog()
{
    delete ui;
}
