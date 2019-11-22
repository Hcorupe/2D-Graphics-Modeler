/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *userLabel;
    QLabel *passwordLabel;
    QPushButton *loginButton;
    QLabel *titleLabel;
    QLabel *label;
    QLineEdit *userEdit;
    QLineEdit *passwordEdit;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->setWindowModality(Qt::WindowModal);
        Login->resize(400, 300);
        Login->setModal(true);
        userLabel = new QLabel(Login);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setGeometry(QRect(50, 120, 71, 16));
        passwordLabel = new QLabel(Login);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(50, 160, 61, 16));
        loginButton = new QPushButton(Login);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(180, 190, 93, 28));
        titleLabel = new QLabel(Login);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(160, 70, 131, 16));
        titleLabel->setScaledContents(false);
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 230, 211, 20));
        userEdit = new QLineEdit(Login);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));
        userEdit->setGeometry(QRect(130, 110, 191, 31));
        passwordEdit = new QLineEdit(Login);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setGeometry(QRect(130, 150, 191, 31));
        passwordEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "2D Graphics Login", nullptr));
        userLabel->setText(QApplication::translate("Login", "Username:", nullptr));
        passwordLabel->setText(QApplication::translate("Login", "Password:", nullptr));
        loginButton->setText(QApplication::translate("Login", "Login", nullptr));
        titleLabel->setText(QApplication::translate("Login", "2D Graphics Modeler", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
