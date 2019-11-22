#include "MainWindow.h"
#include "login.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{

    login = new Login;
    login->show();

    ui->setupUi(this);



    connect(login, SIGNAL(finished(int)), this, SLOT(show()));
    connect(login, SIGNAL(finished(int)), this, SLOT(disableEdit()));


}

void MainWindow::disableEdit()
{
       // Disable editing forms if user is not admin
       if(login->result() == 0)
       {
           ui->MainTab->findChild<QWidget*>("xSpinBox")->setDisabled(true);
           ui->MainTab->findChild<QWidget*>("ySpinBox")->setDisabled(true);
           ui->MainTab->findChild<QWidget*>("newShapeButton")->setDisabled(true);
           ui->MainTab->findChild<QWidget*>("deleteShapeButton")->setDisabled(true);

       }

}

MainWindow::~MainWindow()
{
    delete ui;
    delete login;
}

