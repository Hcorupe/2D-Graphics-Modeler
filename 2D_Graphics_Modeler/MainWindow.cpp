#include "MainWindow.h"
#include "login.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Login *login = new Login;
    login->show();

    connect(login, SIGNAL(accepted()), this, SLOT(show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

