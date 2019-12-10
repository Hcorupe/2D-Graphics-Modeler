/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
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
    QLabel *yLabel;
    QPushButton *newShapeButton;
    QPushButton *deleteShapeButton;
    RenderArea *renderArea;
    QWidget *ReportsTab;
    QListWidget *shapeList;
    QComboBox *sortComboBox;
    QLabel *sortLabel;
    QLabel *listLabel;
    QWidget *ReviewTab;
    QWidget *ContactTab;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1037, 612);
        tabWidget = new QTabWidget(MainWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 40, 1041, 621));
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
        moveLabel->setGeometry(QRect(219, 520, 81, 16));
        xSpinBox = new QSpinBox(MainTab);
        xSpinBox->setObjectName(QString::fromUtf8("xSpinBox"));
        xSpinBox->setGeometry(QRect(200, 540, 42, 22));
        xSpinBox->setMaximum(1000);
        ySpinBox = new QSpinBox(MainTab);
        ySpinBox->setObjectName(QString::fromUtf8("ySpinBox"));
        ySpinBox->setGeometry(QRect(270, 540, 42, 22));
        ySpinBox->setMaximum(500);
        xLabel = new QLabel(MainTab);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setGeometry(QRect(181, 542, 21, 16));
        yLabel = new QLabel(MainTab);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        yLabel->setGeometry(QRect(251, 542, 21, 16));
        newShapeButton = new QPushButton(MainTab);
        newShapeButton->setObjectName(QString::fromUtf8("newShapeButton"));
        newShapeButton->setGeometry(QRect(330, 538, 93, 28));
        deleteShapeButton = new QPushButton(MainTab);
        deleteShapeButton->setObjectName(QString::fromUtf8("deleteShapeButton"));
        deleteShapeButton->setGeometry(QRect(440, 538, 93, 28));
        renderArea = new RenderArea(MainTab);
        renderArea->setObjectName(QString::fromUtf8("renderArea"));
        renderArea->setGeometry(QRect(20, 10, 1000, 500));
        renderArea->setMinimumSize(QSize(1000, 500));
        renderArea->setAutoFillBackground(false);
        tabWidget->addTab(MainTab, QString());
        ReportsTab = new QWidget();
        ReportsTab->setObjectName(QString::fromUtf8("ReportsTab"));
        shapeList = new QListWidget(ReportsTab);
        shapeList->setObjectName(QString::fromUtf8("shapeList"));
        shapeList->setGeometry(QRect(20, 50, 571, 511));
        sortComboBox = new QComboBox(ReportsTab);
        sortComboBox->setObjectName(QString::fromUtf8("sortComboBox"));
        sortComboBox->setGeometry(QRect(750, 170, 201, 31));
        sortLabel = new QLabel(ReportsTab);
        sortLabel->setObjectName(QString::fromUtf8("sortLabel"));
        sortLabel->setGeometry(QRect(790, 140, 111, 16));
        listLabel = new QLabel(ReportsTab);
        listLabel->setObjectName(QString::fromUtf8("listLabel"));
        listLabel->setGeometry(QRect(20, 26, 161, 21));
        tabWidget->addTab(ReportsTab, QString());
        ReviewTab = new QWidget();
        ReviewTab->setObjectName(QString::fromUtf8("ReviewTab"));
        tabWidget->addTab(ReviewTab, QString());
        ContactTab = new QWidget();
        ContactTab->setObjectName(QString::fromUtf8("ContactTab"));
        label = new QLabel(ContactTab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 240, 301, 61));
        label_2 = new QLabel(ContactTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 150, 481, 221));
        tabWidget->addTab(ContactTab, QString());
        label_2->raise();
        label->raise();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "2D Graphics Modeler", nullptr));
        idLabel->setText(QApplication::translate("MainWindow", "Shape ID", nullptr));
        moveLabel->setText(QApplication::translate("MainWindow", "Move Shape", nullptr));
        xLabel->setText(QApplication::translate("MainWindow", "X:", nullptr));
        yLabel->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        newShapeButton->setText(QApplication::translate("MainWindow", "New Shape", nullptr));
        deleteShapeButton->setText(QApplication::translate("MainWindow", "Delete Shape", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(MainTab), QApplication::translate("MainWindow", "2D Graphics Render", nullptr));
        sortLabel->setText(QApplication::translate("MainWindow", "Sort Shape List By:", nullptr));
        listLabel->setText(QApplication::translate("MainWindow", "  ID  Type  Area  Perimeter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ReportsTab), QApplication::translate("MainWindow", "Reports", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ReviewTab), QApplication::translate("MainWindow", "Reviews", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#aa0000;\">THE TEAM WITH NO NAME</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/new/logo.png\"/></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ContactTab), QApplication::translate("MainWindow", "Contact Us", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
