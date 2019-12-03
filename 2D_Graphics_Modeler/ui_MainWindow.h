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
    QLabel *yLabel;
    QPushButton *newShapeButton;
    QPushButton *deleteShapeButton;
    RenderArea *renderArea;
    QComboBox *sortComboBox;
    QLabel *sortLabel;
    QWidget *ReportsTab;
    QWidget *ReviewTab;
    QWidget *ContactTab;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1037, 612);
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
        sortComboBox = new QComboBox(MainTab);
        sortComboBox->addItem(QString());
        sortComboBox->addItem(QString());
        sortComboBox->addItem(QString());
        sortComboBox->addItem(QString());
        sortComboBox->setObjectName(QString::fromUtf8("sortComboBox"));
        sortComboBox->setGeometry(QRect(590, 540, 201, 22));
        sortLabel = new QLabel(MainTab);
        sortLabel->setObjectName(QString::fromUtf8("sortLabel"));
        sortLabel->setGeometry(QRect(630, 520, 111, 16));
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
        yLabel->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        newShapeButton->setText(QApplication::translate("MainWindow", "New Shape", nullptr));
        deleteShapeButton->setText(QApplication::translate("MainWindow", "Delete Shape", nullptr));
        sortComboBox->setItemText(0, QApplication::translate("MainWindow", "...", nullptr));
        sortComboBox->setItemText(1, QApplication::translate("MainWindow", "ID", nullptr));
        sortComboBox->setItemText(2, QApplication::translate("MainWindow", "Area", nullptr));
        sortComboBox->setItemText(3, QApplication::translate("MainWindow", "Perimeter", nullptr));

        sortLabel->setText(QApplication::translate("MainWindow", "Sort Shape List By:", nullptr));
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
