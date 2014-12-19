#include "diametersdialog.h"
#include "ui_diametersdialog.h"

DiametersDialog::DiametersDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiametersDialog)
{
    ui->setupUi(this);
}

DiametersDialog::~DiametersDialog()
{
    delete ui;
}
