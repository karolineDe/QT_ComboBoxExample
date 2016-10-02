#include "comboboxdialog.h"
#include "ui_comboboxdialog.h"

#include <QMessageBox>

ComboBoxDialog::ComboBoxDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComboBoxDialog)
{
    ui->setupUi(this);

    // Fill the items of the combobox
    for(int i = 0; i < 10; i++)
    {
        ui->comboBox->addItem("item " + QString::number(i));
    }
}

ComboBoxDialog::~ComboBoxDialog()
{
    delete ui;
}


// Message popup when the button is clicked
void ComboBoxDialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Item selection", ui->comboBox->currentText());
}
