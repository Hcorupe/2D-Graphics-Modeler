#include "login.h"
#include "MainWindow.h"
#include "ui_login.h"



Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    // Hides ? button at top of window
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

Login::~Login()
{
    delete ui;
}

void Login::on_loginButton_clicked()
{
    if (ui->userEdit->text() == QString::fromStdString(login::USERNAME) &&
        ui->passwordEdit->text() == QString::fromStdString(login::PASSWORD))
    {
        this->done(0);
    }

    else if (ui->userEdit->text() == QString::fromStdString(login::ADMIN_USERNAME) &&
             ui->passwordEdit->text() == QString::fromStdString(login::ADMIN_PASSWORD))
    {
        this->done(1);
    }

    else
    {
        ui->label->setText("Invalid username or password.");
    }
}


