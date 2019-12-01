#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <string>

namespace login
{
    const std::string ADMIN_USERNAME = "admin";     // Administrator username
    const std::string ADMIN_PASSWORD = "admin"; // Administrator password

    const std::string USERNAME = "user"; // Normal user username
    const std::string PASSWORD = "pass"; // Normal user password

}

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginButton_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
