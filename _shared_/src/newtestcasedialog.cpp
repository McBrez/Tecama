#include "newtestcasedialog.h"
#include "ui_newtestcasedialog.h"

NewTestcaseDialog::NewTestcaseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewTestcaseDialog)
{
    ui->setupUi(this);
}

NewTestcaseDialog::~NewTestcaseDialog()
{
    delete ui;
}
