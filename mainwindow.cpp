#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "diametersdialog.h"
#include "speeddialog.h"
#include "transferlengthdialog.h"
#include "messages.h"
#include "motor.h"
#include "serialdialog.h"

MainWindow::system_statuses system_status;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   system_status = unconfigured;
   ui->setupUi(this);
   if (system_status == unconfigured)
        this->setWindowTitle(Apptitle + Unconfigured);
   else
       this->setWindowTitle(Apptitle);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //should save current position and cause the new distances to be computed when
    //we restart

    ui->pushButton->setText("Run");
    statusBar()->showMessage("STOPPED!");
}


void MainWindow::on_actionSet_Spool_Sizes_triggered()
{
    DiametersDialog  *ddialog = new DiametersDialog;
    ddialog->setWindowTitle("Set Spool Diameters");
    ddialog->show();
}


void MainWindow::on_actionSet_Transfer_Speed_triggered()
{
    SpeedDialog  *sdialog = new SpeedDialog;
    sdialog->setWindowTitle("Set Transfer Speed");
    sdialog->show();
}

void MainWindow::on_actionSet_Transfer_Length_triggered()
{
    TransferLengthDialog *trdialog = new TransferLengthDialog;
    trdialog->setWindowTitle("Set Wire Transfer length");
    trdialog->show();
}



void MainWindow::on_pushButton_savetoppos_clicked()
{
    ui->pushButton_gototoppos->setEnabled(true);
}


void MainWindow::on_pushButton_gototoppos_clicked()
{
    statusBar()->showMessage("Moving to saved top position");
}

void MainWindow::on_pushButton_gotosavepos_clicked()
{
    statusBar()->showMessage("Moving back to earlier saved position");
}

void MainWindow::on_pushButton_gotobottompos_clicked()
{
    statusBar()->showMessage("Moving to saved bottom position");
}

void MainWindow::on_pushButton_savebottompos_clicked()
{
     ui->pushButton_gotobottompos->setEnabled(true);
}

void MainWindow::on_pushButton_savecurpos_clicked()
{
     ui->pushButton_gotosavepos->setEnabled(true);
}

void MainWindow::on_pushButton_lockfreetop_clicked()
{
    ui->pushButton_lockfreetop->setText("Free Top Motor");
}

void MainWindow::on_pushButton_lockfreebottom_clicked()
{
    ui->pushButton_lockfreebottom->setText("Free Bottom Motor");
}

void MainWindow::on_actionSetup_Communications_triggered()
{
    SerialDialog *serdialog = new SerialDialog;
    serdialog->show();
}
