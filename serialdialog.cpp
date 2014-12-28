#include "serialdialog.h"
#include "ui_serialdialog.h"
#include "motor.h"

SerialDialog::SerialDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SerialDialog)
{

    ui->setupUi(this);
    update_serial_box();


}


SerialDialog::~SerialDialog()
{
    delete ui;
}





void SerialDialog::on_Serial_comboBox_currentIndexChanged(int index)
{
    if (index != -1) {
       QStringList list = ui->Serial_comboBox->itemData(index).toStringList();
        ui->Serial_Name->setText(tr("Name: %1").arg(list.at(0)));
        ui->Serial_Details->setText(tr("Description: %1").arg(list.at(1)));
        ui->Serial_Manufacturer->setText(tr("Manufacturer: %1").arg(list.at(2)));
        ui->Serial_Location->setText(tr("Location: %1").arg(list.at(4)));
        }
}

void SerialDialog::update_serial_box()
{
    ui->Serial_comboBox->clear();
    static const QString blankString = QObject::tr("N/A");
    QString description;
    QString manufacturer;
    QString serialNumber;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        QStringList list;
        description = info.description();
        manufacturer = info.manufacturer();
        serialNumber = info.serialNumber();
        list << info.portName()
             << (!description.isEmpty() ? description : blankString)
             << (!manufacturer.isEmpty() ? manufacturer : blankString)
             << (!serialNumber.isEmpty() ? serialNumber : blankString)
             << info.systemLocation()
             << (info.vendorIdentifier() ? QString::number(info.vendorIdentifier(), 16) : blankString)
             << (info.productIdentifier() ? QString::number(info.productIdentifier(), 16) : blankString);

        ui->Serial_comboBox->addItem(list.first(), list);
    }

}

void SerialDialog::updateSettings()
{
    currentSettings.name = ui->Serial_comboBox->currentText();
    currentSettings.baudRate = 9600;
    currentSettings.stringBaudRate = QString::number(currentSettings.baudRate);

    currentSettings.dataBits = static_cast<QSerialPort::DataBits>(8);
    currentSettings.stringDataBits = "8";

    currentSettings.parity = static_cast<QSerialPort::Parity>(0); //0 = odd, 1 = even
    currentSettings.stringParity = "odd";

    currentSettings.stopBits = static_cast<QSerialPort::StopBits>(1);
    currentSettings.stringStopBits = "1";

    currentSettings.flowControl = static_cast<QSerialPort::FlowControl>(0);

    currentSettings.localEchoEnabled = false;
}

SerialDialog::Settings SerialDialog::settings() const
{
    return currentSettings;
}
