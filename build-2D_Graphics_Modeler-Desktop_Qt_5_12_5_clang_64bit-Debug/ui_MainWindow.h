/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *MainTab;
    QComboBox *idComboBox;
    QLabel *idLabel;
    QLabel *moveLabel;
    QSpinBox *xSpinBox;
    QSpinBox *ySpinBox;
    QLabel *xLabel;
    QLabel *label;
    QPushButton *newShapeButton;
    QPushButton *deleteShapeButton;
    RenderArea *renderArea;
    QWidget *ReportsTab;
    QWidget *ReviewTab;
    QWidget *ContactTab;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1037, 619);
        tabWidget = new QTabWidget(MainWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1041, 621));
        MainTab = new QWidget();
        MainTab->setObjectName(QString::fromUtf8("MainTab"));
        idComboBox = new QComboBox(MainTab);
        idComboBox->setObjectName(QString::fromUtf8("idComboBox"));
        idComboBox->setGeometry(QRect(20, 540, 141, 22));
        idLabel = new QLabel(MainTab);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        idLabel->setGeometry(QRect(60, 520, 55, 16));
        moveLabel = new QLabel(MainTab);
        moveLabel->setObjectName(QString::fromUtf8("moveLabel"));
        moveLabel->setGeometry(QRect(210, 520, 81, 16));
        xSpinBox = new QSpinBox(MainTab);
        xSpinBox->setObjectName(QString::fromUtf8("xSpinBox"));
        xSpinBox->setGeometry(QRect(200, 540, 42, 22));
        ySpinBox = new QSpinBox(MainTab);
        ySpinBox->setObjectName(QString::fromUtf8("ySpinBox"));
        ySpinBox->setGeometry(QRect(270, 540, 42, 22));
        xLabel = new QLabel(MainTab);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setGeometry(QRect(180, 540, 21, 16));
        label = new QLabel(MainTab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 540, 21, 16));
        newShapeButton = new QPushButton(MainTab);
        newShapeButton->setObjectName(QString::fromUtf8("newShapeButton"));
        newShapeButton->setGeometry(QRect(330, 540, 93, 28));
        deleteShapeButton = new QPushButton(MainTab);
        deleteShapeButton->setObjectName(QString::fromUtf8("deleteShapeButton"));
        deleteShapeButton->setGeometry(QRect(430, 540, 93, 28));
        renderArea = new RenderArea(MainTab);
        renderArea->setObjectName(QString::fromUtf8("renderArea"));
        renderArea->setGeometry(QRect(20, 10, 1000, 500));
        renderArea->setMinimumSize(QSize(1000, 500));
        tabWidget->addTab(MainTab, QString());
        ReportsTab = new QWidget();
        ReportsTab->setObjectName(QString::fromUtf8("ReportsTab"));
        tabWidget->addTab(ReportsTab, QString());
        ReviewTab = new QWidget();
        ReviewTab->setObjectName(QString::fromUtf8("ReviewTab"));
        tabWidget->addTab(ReviewTab, QString());
        ContactTab = new QWidget();
        ContactTab->setObjectName(QString::fromUtf8("ContactTab"));
        tabWidget->addTab(ContactTab, QString());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "2D Graphics Modeler", nullptr));
        idLabel->setText(QApplication::translate("MainWindow", "Shape ID", nullptr));
        moveLabel->setText(QApplication::translate("MainWindow", "Move Shape", nullptr));
        xLabel->setText(QApplication::translate("MainWindow", "X:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        newShapeButton->setText(QApplication::translate("MainWindow", "New Shape", nullptr));
        deleteShapeButton->setText(QApplication::translate("MainWindow", "Delete Shape", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(MainTab), QApplication::translate("MainWindow", "2D Graphics Render", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ReportsTab), QApplication::translate("MainWindow", "Reports", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ReviewTab), QApplication::translate("MainWindow", "Reviews", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ContactTab), QApplication::translate("MainWindow", "Contact Us", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
