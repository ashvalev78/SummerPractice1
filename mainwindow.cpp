#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText(ui->lineEdit->text());
}

void MainWindow::on_sayhi_button_clicked()
{
    QMessageBox msgBox;
    QWidget::setWindowTitle("Здравствуй, " + ui->name_line->text() + "!");
    msgBox.setText("Здравствуй, " + ui->name_line->text() + "!");
    msgBox.exec();

}
