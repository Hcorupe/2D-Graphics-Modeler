/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
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
    QTextEdit *cmntBox;
    QLabel *cmntLabel;
    QLabel *othrCmntLabel;
    QPushButton *commentBtn;
    QTextEdit *commentDisp;
    QTextEdit *commentDispTwo;
    QTextEdit *commentDispThr;
    QWidget *ContactTab;
    QLabel *label;
    QLabel *label_2;
    QLabel *EmailLabel;
    QPushButton *EmailSndBtn;
    QTextEdit *EmailBox;

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
        renderArea->setGeometry(QRect(0, -10, 1000, 500));
        renderArea->setMinimumSize(QSize(1000, 500));
        renderArea->setAutoFillBackground(false);
        tabWidget->addTab(MainTab, QString());
        ReportsTab = new QWidget();
        ReportsTab->setObjectName(QStringLiteral("ReportsTab"));
        shapeList = new QListWidget(ReportsTab);
        shapeList->setObjectName(QStringLiteral("shapeList"));
        shapeList->setGeometry(QRect(20, 50, 571, 511));
        sortComboBox = new QComboBox(ReportsTab);
        sortComboBox->setObjectName(QStringLiteral("sortComboBox"));
        sortComboBox->setGeometry(QRect(750, 170, 201, 31));
        sortLabel = new QLabel(ReportsTab);
        sortLabel->setObjectName(QStringLiteral("sortLabel"));
        sortLabel->setGeometry(QRect(790, 140, 111, 16));
        listLabel = new QLabel(ReportsTab);
        listLabel->setObjectName(QStringLiteral("listLabel"));
        listLabel->setGeometry(QRect(20, 26, 161, 21));
        tabWidget->addTab(ReportsTab, QString());
        ReviewTab = new QWidget();
        ReviewTab->setObjectName(QStringLiteral("ReviewTab"));
        cmntBox = new QTextEdit(ReviewTab);
        cmntBox->setObjectName(QStringLiteral("cmntBox"));
        cmntBox->setGeometry(QRect(460, 190, 351, 111));
        cmntLabel = new QLabel(ReviewTab);
        cmntLabel->setObjectName(QStringLiteral("cmntLabel"));
        cmntLabel->setGeometry(QRect(460, 160, 111, 17));
        othrCmntLabel = new QLabel(ReviewTab);
        othrCmntLabel->setObjectName(QStringLiteral("othrCmntLabel"));
        othrCmntLabel->setGeometry(QRect(20, 70, 101, 17));
        commentBtn = new QPushButton(ReviewTab);
        commentBtn->setObjectName(QStringLiteral("commentBtn"));
        commentBtn->setGeometry(QRect(730, 310, 80, 25));
        commentDisp = new QTextEdit(ReviewTab);
        commentDisp->setObjectName(QStringLiteral("commentDisp"));
        commentDisp->setGeometry(QRect(20, 100, 351, 101));
        commentDispTwo = new QTextEdit(ReviewTab);
        commentDispTwo->setObjectName(QStringLiteral("commentDispTwo"));
        commentDispTwo->setGeometry(QRect(20, 200, 351, 101));
        commentDispThr = new QTextEdit(ReviewTab);
        commentDispThr->setObjectName(QStringLiteral("commentDispThr"));
        commentDispThr->setGeometry(QRect(20, 300, 351, 101));
        tabWidget->addTab(ReviewTab, QString());
        ContactTab = new QWidget();
        ContactTab->setObjectName(QStringLiteral("ContactTab"));
        label = new QLabel(ContactTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(630, 160, 291, 81));
        label_2 = new QLabel(ContactTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(620, 70, 371, 231));
        EmailLabel = new QLabel(ContactTab);
        EmailLabel->setObjectName(QStringLiteral("EmailLabel"));
        EmailLabel->setGeometry(QRect(60, 70, 81, 17));
        EmailSndBtn = new QPushButton(ContactTab);
        EmailSndBtn->setObjectName(QStringLiteral("EmailSndBtn"));
        EmailSndBtn->setGeometry(QRect(370, 270, 80, 25));
        EmailBox = new QTextEdit(ContactTab);
        EmailBox->setObjectName(QStringLiteral("EmailBox"));
        EmailBox->setGeometry(QRect(60, 90, 391, 171));
        tabWidget->addTab(ContactTab, QString());
        label_2->raise();
        label->raise();
        EmailLabel->raise();
        EmailSndBtn->raise();
        EmailBox->raise();

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
        tabWidget->setTabText(tabWidget->indexOf(MainTab), QApplication::translate("MainWindow", "2D Graphics Render", Q_NULLPTR));
        sortLabel->setText(QApplication::translate("MainWindow", "Sort Shape List By:", Q_NULLPTR));
        listLabel->setText(QApplication::translate("MainWindow", "  ID  Type  Area  Perimeter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ReportsTab), QApplication::translate("MainWindow", "Reports", Q_NULLPTR));
        cmntLabel->setText(QApplication::translate("MainWindow", "Leave a comment", Q_NULLPTR));
        othrCmntLabel->setText(QApplication::translate("MainWindow", "Other coments", Q_NULLPTR));
        commentBtn->setText(QApplication::translate("MainWindow", "Comment", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ReviewTab), QApplication::translate("MainWindow", "Reviews", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#aa0000;\">THE TEAM WITH NO NAME</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/new/logo.png\"/></p></body></html>", Q_NULLPTR));
        EmailLabel->setText(QApplication::translate("MainWindow", "Contact Us!", Q_NULLPTR));
        EmailSndBtn->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ContactTab), QApplication::translate("MainWindow", "Contact Us", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
