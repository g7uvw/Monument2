#include "transferlengthdialog.h"
#include "ui_transferlengthdialog.h"

TransferLengthDialog::TransferLengthDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransferLengthDialog)
{
    ui->setupUi(this);
}

TransferLengthDialog::~TransferLengthDialog()
{
    delete ui;
}
