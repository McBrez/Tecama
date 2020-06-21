#ifndef NEWTESTCASEDIALOG_H
#define NEWTESTCASEDIALOG_H

#include <QDialog>

namespace Ui {
class NewTestcaseDialog;
}

class NewTestcaseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewTestcaseDialog(QWidget *parent = nullptr);
    ~NewTestcaseDialog();

private:
    Ui::NewTestcaseDialog *ui;
};

#endif // NEWTESTCASEDIALOG_H
