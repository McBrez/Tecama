// Qt headers
#include <QFileDialog>
#include <QMessageBox>

// Project headers
#include <mainwindow.h>
#include <newprojectdialog.h>
#include <ui_mainwindow.h>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_actionabout_Qt_triggered() { QMessageBox::aboutQt(this); }

void MainWindow::on_actionOpen_Project_triggered() {
  QString fileName = QFileDialog::getOpenFileName(
      this, tr("Open testcase project"), "", tr("sl3 files (*.sl3)"));
}

void MainWindow::on_actionNew_Project_triggered() {
  NewProjectDialog* newProjectDialog = new NewProjectDialog(this);
  newProjectDialog->show();
}
