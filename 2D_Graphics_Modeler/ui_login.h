/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            Login->setObjectName(QStringLiteral("Login"));
        Login->setWindowModality(Qt::WindowModal);
        Login->resize(400, 300);
        Login->setModal(true);
        userLabel = new QLabel(Login);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setGeometry(QRect(50, 120, 71, 16));
        passwordLabel = new QLabel(Login);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setGeometry(QRect(50, 160, 61, 16));
        loginButton = new QPushButton(Login);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(180, 190, 93, 28));
        titleLabel = new QLabel(Login);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(160, 70, 131, 16));
        titleLabel->setScaledContents(false);
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 230, 211, 20));
        userEdit = new QLineEdit(Login);
        userEdit->setObjectName(QStringLiteral("userEdit"));
        userEdit->setGeometry(QRect(130, 110, 191, 31));
        passwordEdit = new QLineEdit(Login);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(130, 150, 191, 31));
        passwordEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "2D Graphics Login", Q_NULLPTR));
        userLabel->setText(QApplication::translate("Login", "Username:", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("Login", "Password:", Q_NULLPTR));
        loginButton->setText(QApplication::translate("Login", "Login", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("Login", "2D Graphics Modeler", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
