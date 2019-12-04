/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1037, 612);
        tabWidget = new QTabWidget(MainWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1041, 621));
        MainTab = new QWidget();
        MainTab->setObjectName(QStringLiteral("MainTab"));
        idComboBox = new QComboBox(MainTab);
        idComboBox->setObjectName(QStringLiteral("idComboBox"));
        idComboBox->setGeometry(QRect(20, 540, 141, 22));
        idLabel = new QLabel(MainTab);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setGeometry(QRect(60, 520, 55, 16));
        moveLabel = new QLabel(MainTab);
        moveLabel->setObjectName(QStringLiteral("moveLabel"));
        moveLabel->setGeometry(QRect(219, 520, 81, 16));
        xSpinBox = new QSpinBox(MainTab);
        xSpinBox->setObjectName(QStringLiteral("xSpinBox"));
        xSpinBox->setGeometry(QRect(200, 540, 42, 22));
        xSpinBox->setMaximum(1000);
        ySpinBox = new QSpinBox(MainTab);
        ySpinBox->setObjectName(QStringLiteral("ySpinBox"));
        ySpinBox->setGeometry(QRect(270, 540, 42, 22));
        ySpinBox->setMaximum(500);
        xLabel = new QLabel(MainTab);
        xLabel->setObjectName(QStringLiteral("xLabel"));
        xLabel->setGeometry(QRect(181, 542, 21, 16));
        yLabel = new QLabel(MainTab);
        yLabel->setObjectName(QStringLiteral("yLabel"));
        yLabel->setGeometry(QRect(251, 542, 21, 16));
        newShapeButton = new QPushButton(MainTab);
        newShapeButton->setObjectName(QStringLiteral("newShapeButton"));
        newShapeButton->setGeometry(QRect(330, 538, 93, 28));
        deleteShapeButton = new QPushButton(MainTab);
        deleteShapeButton->setObjectName(QStringLiteral("deleteShapeButton"));
        deleteShapeButton->setGeometry(QRect(440, 538, 93, 28));
        renderArea = new RenderArea(MainTab);
        renderArea->setObjectName(QStringLiteral("renderArea"));
        renderArea->setGeometry(QRect(20, 10, 1000, 500));
        renderArea->setMinimumSize(QSize(1000, 500));
        renderArea->setAutoFillBackground(false);
        sortComboBox = new QComboBox(MainTab);
        sortComboBox->setObjectName(QStringLiteral("sortComboBox"));
        sortComboBox->setGeometry(QRect(590, 540, 201, 22));
        sortLabel = new QLabel(MainTab);
        sortLabel->setObjectName(QStringLiteral("sortLabel"));
        sortLabel->setGeometry(QRect(630, 520, 111, 16));
        tabWidget->addTab(MainTab, QString());
        ReportsTab = new QWidget();
        ReportsTab->setObjectName(QStringLiteral("ReportsTab"));
        tabWidget->addTab(ReportsTab, QString());
        ReviewTab = new QWidget();
        ReviewTab->setObjectName(QStringLiteral("ReviewTab"));
        tabWidget->addTab(ReviewTab, QString());
        ContactTab = new QWidget();
        ContactTab->setObjectName(QStringLiteral("ContactTab"));
        tabWidget->addTab(ContactTab, QString());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "2D Graphics Modeler", Q_NULLPTR));
        idLabel->setText(QApplication::translate("MainWindow", "Shape ID", Q_NULLPTR));
        moveLabel->setText(QApplication::translate("MainWindow", "Move Shape", Q_NULLPTR));
        xLabel->setText(QApplication::translate("MainWindow", "X:", Q_NULLPTR));
        yLabel->setText(QApplication::translate("MainWindow", "Y:", Q_NULLPTR));
        newShapeButton->setText(QApplication::translate("MainWindow", "New Shape", Q_NULLPTR));
        deleteShapeButton->setText(QApplication::translate("MainWindow", "Delete Shape", Q_NULLPTR));
        sortComboBox->clear();
        sortComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "...", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Area", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Perimeter", Q_NULLPTR)
        );
        sortLabel->setText(QApplication::translate("MainWindow", "Sort Shape List By:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(MainTab), QApplication::translate("MainWindow", "2D Graphics Render", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ReportsTab), QApplication::translate("MainWindow", "Reports", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ReviewTab), QApplication::translate("MainWindow", "Reviews", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ContactTab), QApplication::translate("MainWindow", "Contact Us", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
