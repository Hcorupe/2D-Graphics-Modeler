/********************************************************************************
** Form generated from reading UI file 'newshape.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSHAPE_H
#define UI_NEWSHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NewShape
{
public:
    QSpinBox *lSpinBox;
    QLabel *xLabel;
    QLabel *penStyleLabel;
    QComboBox *capStyleComboBox;
    QLabel *brushStyleLabel;
    QComboBox *brushColorComboBox;
    QComboBox *brushStyleComboBox;
    QLabel *sPointLabel;
    QComboBox *penColorComboBox;
    QLabel *brushLabel;
    QLabel *penLabel;
    QLabel *yLabel;
    QComboBox *penStyleComboBox;
    QSpinBox *wSpinBox;
    QSpinBox *xSpinBox;
    QLabel *brushColorLabel;
    QLabel *joinLabel;
    QLabel *penColorLabel;
    QSpinBox *ySpinBox;
    QComboBox *penJoinComboBox;
    QLabel *wLabel;
    QLabel *lLabel;
    QLabel *capLabel;
    QLabel *shapeIDLabel;
    QComboBox *shapeTypeComboBox;
    QLabel *shapeTypeLabel;
    QLabel *xLabel_2;
    QLabel *sPointLabel_2;
    QLabel *yLabel_2;
    QSpinBox *xEndSpinBox;
    QSpinBox *yEndSpinBox;
    QLabel *textLabel;
    QLineEdit *textEdit;
    QLabel *textLabel_2;
    QSpinBox *penWidthSpinBox;
    QLabel *label;
    QComboBox *textColorComboBox;
    QLabel *textColorLabel;
    QSpinBox *pointSizeSpinBox;
    QLabel *label_2;
    QComboBox *fontFamilyComboBox;
    QLabel *label_3;
    QComboBox *fontStyleComboBox;
    QLabel *label_4;
    QComboBox *fontWeightComboBox;
    QLabel *label_5;
    QLabel *dimensionsLabel;
    QFrame *line;
    QSpinBox *shapeIDSpinBox;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QDialogButtonBox *buttonBox;
    QComboBox *alignmentComboBox;
    QLabel *label_6;
    QPushButton *addPointButton;
    QPushButton *clearPointsButton;
    QLabel *pointAddedLabel;
    QLabel *idTakenLabel;

    void setupUi(QDialog *NewShape)
    {
        if (NewShape->objectName().isEmpty())
            NewShape->setObjectName(QString::fromUtf8("NewShape"));
        NewShape->setWindowModality(Qt::ApplicationModal);
        NewShape->resize(610, 615);
        NewShape->setModal(true);
        lSpinBox = new QSpinBox(NewShape);
        lSpinBox->setObjectName(QString::fromUtf8("lSpinBox"));
        lSpinBox->setGeometry(QRect(80, 128, 42, 22));
        lSpinBox->setMinimum(1);
        lSpinBox->setMaximum(500);
        lSpinBox->setValue(1);
        xLabel = new QLabel(NewShape);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setGeometry(QRect(364, 110, 16, 20));
        penStyleLabel = new QLabel(NewShape);
        penStyleLabel->setObjectName(QString::fromUtf8("penStyleLabel"));
        penStyleLabel->setGeometry(QRect(28, 293, 41, 16));
        capStyleComboBox = new QComboBox(NewShape);
        capStyleComboBox->addItem(QString());
        capStyleComboBox->addItem(QString());
        capStyleComboBox->addItem(QString());
        capStyleComboBox->setObjectName(QString::fromUtf8("capStyleComboBox"));
        capStyleComboBox->setGeometry(QRect(246, 291, 80, 22));
        brushStyleLabel = new QLabel(NewShape);
        brushStyleLabel->setObjectName(QString::fromUtf8("brushStyleLabel"));
        brushStyleLabel->setGeometry(QRect(411, 293, 41, 16));
        brushColorComboBox = new QComboBox(NewShape);
        brushColorComboBox->addItem(QString());
        brushColorComboBox->addItem(QString());
        brushColorComboBox->addItem(QString());
        brushColorComboBox->addItem(QString());
        brushColorComboBox->addItem(QString());
        brushColorComboBox->addItem(QString());
        brushColorComboBox->addItem(QString());
        brushColorComboBox->addItem(QString());
        brushColorComboBox->addItem(QString());
        brushColorComboBox->setObjectName(QString::fromUtf8("brushColorComboBox"));
        brushColorComboBox->setGeometry(QRect(450, 251, 80, 22));
        brushStyleComboBox = new QComboBox(NewShape);
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->setObjectName(QString::fromUtf8("brushStyleComboBox"));
        brushStyleComboBox->setGeometry(QRect(450, 291, 80, 22));
        sPointLabel = new QLabel(NewShape);
        sPointLabel->setObjectName(QString::fromUtf8("sPointLabel"));
        sPointLabel->setGeometry(QRect(288, 110, 71, 20));
        penColorComboBox = new QComboBox(NewShape);
        penColorComboBox->addItem(QString());
        penColorComboBox->addItem(QString());
        penColorComboBox->addItem(QString());
        penColorComboBox->addItem(QString());
        penColorComboBox->addItem(QString());
        penColorComboBox->addItem(QString());
        penColorComboBox->addItem(QString());
        penColorComboBox->addItem(QString());
        penColorComboBox->addItem(QString());
        penColorComboBox->setObjectName(QString::fromUtf8("penColorComboBox"));
        penColorComboBox->setGeometry(QRect(67, 251, 101, 22));
        brushLabel = new QLabel(NewShape);
        brushLabel->setObjectName(QString::fromUtf8("brushLabel"));
        brushLabel->setGeometry(QRect(430, 213, 61, 20));
        brushLabel->setFrameShape(QFrame::Box);
        brushLabel->setFrameShadow(QFrame::Sunken);
        brushLabel->setAlignment(Qt::AlignCenter);
        penLabel = new QLabel(NewShape);
        penLabel->setObjectName(QString::fromUtf8("penLabel"));
        penLabel->setGeometry(QRect(150, 213, 61, 20));
        penLabel->setFrameShape(QFrame::Box);
        penLabel->setFrameShadow(QFrame::Sunken);
        penLabel->setAlignment(Qt::AlignCenter);
        yLabel = new QLabel(NewShape);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        yLabel->setGeometry(QRect(430, 112, 16, 16));
        penStyleComboBox = new QComboBox(NewShape);
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->setObjectName(QString::fromUtf8("penStyleComboBox"));
        penStyleComboBox->setGeometry(QRect(67, 291, 101, 22));
        wSpinBox = new QSpinBox(NewShape);
        wSpinBox->setObjectName(QString::fromUtf8("wSpinBox"));
        wSpinBox->setGeometry(QRect(180, 128, 42, 22));
        wSpinBox->setMinimum(1);
        wSpinBox->setMaximum(500);
        wSpinBox->setValue(1);
        xSpinBox = new QSpinBox(NewShape);
        xSpinBox->setObjectName(QString::fromUtf8("xSpinBox"));
        xSpinBox->setGeometry(QRect(377, 110, 42, 22));
        xSpinBox->setMaximum(1000);
        brushColorLabel = new QLabel(NewShape);
        brushColorLabel->setObjectName(QString::fromUtf8("brushColorLabel"));
        brushColorLabel->setGeometry(QRect(410, 253, 41, 16));
        joinLabel = new QLabel(NewShape);
        joinLabel->setObjectName(QString::fromUtf8("joinLabel"));
        joinLabel->setGeometry(QRect(181, 254, 61, 16));
        penColorLabel = new QLabel(NewShape);
        penColorLabel->setObjectName(QString::fromUtf8("penColorLabel"));
        penColorLabel->setGeometry(QRect(27, 253, 71, 16));
        ySpinBox = new QSpinBox(NewShape);
        ySpinBox->setObjectName(QString::fromUtf8("ySpinBox"));
        ySpinBox->setGeometry(QRect(440, 110, 42, 22));
        ySpinBox->setMaximum(500);
        penJoinComboBox = new QComboBox(NewShape);
        penJoinComboBox->addItem(QString());
        penJoinComboBox->addItem(QString());
        penJoinComboBox->addItem(QString());
        penJoinComboBox->setObjectName(QString::fromUtf8("penJoinComboBox"));
        penJoinComboBox->setGeometry(QRect(246, 251, 80, 22));
        wLabel = new QLabel(NewShape);
        wLabel->setObjectName(QString::fromUtf8("wLabel"));
        wLabel->setGeometry(QRect(130, 130, 41, 16));
        lLabel = new QLabel(NewShape);
        lLabel->setObjectName(QString::fromUtf8("lLabel"));
        lLabel->setGeometry(QRect(30, 130, 41, 16));
        capLabel = new QLabel(NewShape);
        capLabel->setObjectName(QString::fromUtf8("capLabel"));
        capLabel->setGeometry(QRect(180, 292, 61, 16));
        shapeIDLabel = new QLabel(NewShape);
        shapeIDLabel->setObjectName(QString::fromUtf8("shapeIDLabel"));
        shapeIDLabel->setGeometry(QRect(230, 20, 61, 16));
        shapeTypeComboBox = new QComboBox(NewShape);
        shapeTypeComboBox->addItem(QString());
        shapeTypeComboBox->addItem(QString());
        shapeTypeComboBox->addItem(QString());
        shapeTypeComboBox->addItem(QString());
        shapeTypeComboBox->addItem(QString());
        shapeTypeComboBox->addItem(QString());
        shapeTypeComboBox->addItem(QString());
        shapeTypeComboBox->addItem(QString());
        shapeTypeComboBox->setObjectName(QString::fromUtf8("shapeTypeComboBox"));
        shapeTypeComboBox->setGeometry(QRect(100, 18, 111, 22));
        shapeTypeLabel = new QLabel(NewShape);
        shapeTypeLabel->setObjectName(QString::fromUtf8("shapeTypeLabel"));
        shapeTypeLabel->setGeometry(QRect(20, 20, 81, 16));
        xLabel_2 = new QLabel(NewShape);
        xLabel_2->setObjectName(QString::fromUtf8("xLabel_2"));
        xLabel_2->setGeometry(QRect(364, 140, 16, 20));
        sPointLabel_2 = new QLabel(NewShape);
        sPointLabel_2->setObjectName(QString::fromUtf8("sPointLabel_2"));
        sPointLabel_2->setGeometry(QRect(295, 140, 71, 20));
        yLabel_2 = new QLabel(NewShape);
        yLabel_2->setObjectName(QString::fromUtf8("yLabel_2"));
        yLabel_2->setGeometry(QRect(430, 142, 16, 16));
        xEndSpinBox = new QSpinBox(NewShape);
        xEndSpinBox->setObjectName(QString::fromUtf8("xEndSpinBox"));
        xEndSpinBox->setEnabled(false);
        xEndSpinBox->setGeometry(QRect(377, 140, 42, 22));
        xEndSpinBox->setMaximum(1000);
        yEndSpinBox = new QSpinBox(NewShape);
        yEndSpinBox->setObjectName(QString::fromUtf8("yEndSpinBox"));
        yEndSpinBox->setEnabled(false);
        yEndSpinBox->setGeometry(QRect(440, 140, 42, 22));
        yEndSpinBox->setMaximum(500);
        textLabel = new QLabel(NewShape);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        textLabel->setGeometry(QRect(280, 387, 61, 20));
        textLabel->setFrameShape(QFrame::Box);
        textLabel->setFrameShadow(QFrame::Sunken);
        textLabel->setAlignment(Qt::AlignCenter);
        textEdit = new QLineEdit(NewShape);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(121, 427, 161, 22));
        textLabel_2 = new QLabel(NewShape);
        textLabel_2->setObjectName(QString::fromUtf8("textLabel_2"));
        textLabel_2->setGeometry(QRect(81, 430, 55, 16));
        penWidthSpinBox = new QSpinBox(NewShape);
        penWidthSpinBox->setObjectName(QString::fromUtf8("penWidthSpinBox"));
        penWidthSpinBox->setGeometry(QRect(177, 323, 42, 22));
        penWidthSpinBox->setMaximum(20);
        penWidthSpinBox->setValue(1);
        label = new QLabel(NewShape);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 325, 41, 16));
        textColorComboBox = new QComboBox(NewShape);
        textColorComboBox->addItem(QString());
        textColorComboBox->addItem(QString());
        textColorComboBox->addItem(QString());
        textColorComboBox->addItem(QString());
        textColorComboBox->addItem(QString());
        textColorComboBox->addItem(QString());
        textColorComboBox->addItem(QString());
        textColorComboBox->addItem(QString());
        textColorComboBox->addItem(QString());
        textColorComboBox->setObjectName(QString::fromUtf8("textColorComboBox"));
        textColorComboBox->setEnabled(false);
        textColorComboBox->setGeometry(QRect(120, 458, 121, 22));
        textColorLabel = new QLabel(NewShape);
        textColorLabel->setObjectName(QString::fromUtf8("textColorLabel"));
        textColorLabel->setGeometry(QRect(75, 460, 71, 16));
        pointSizeSpinBox = new QSpinBox(NewShape);
        pointSizeSpinBox->setObjectName(QString::fromUtf8("pointSizeSpinBox"));
        pointSizeSpinBox->setEnabled(false);
        pointSizeSpinBox->setGeometry(QRect(300, 525, 42, 22));
        pointSizeSpinBox->setMinimum(-1);
        pointSizeSpinBox->setMaximum(50);
        label_2 = new QLabel(NewShape);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 525, 71, 20));
        fontFamilyComboBox = new QComboBox(NewShape);
        fontFamilyComboBox->addItem(QString());
        fontFamilyComboBox->addItem(QString());
        fontFamilyComboBox->addItem(QString());
        fontFamilyComboBox->addItem(QString());
        fontFamilyComboBox->setObjectName(QString::fromUtf8("fontFamilyComboBox"));
        fontFamilyComboBox->setEnabled(false);
        fontFamilyComboBox->setGeometry(QRect(380, 427, 121, 22));
        label_3 = new QLabel(NewShape);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 429, 71, 16));
        fontStyleComboBox = new QComboBox(NewShape);
        fontStyleComboBox->addItem(QString());
        fontStyleComboBox->addItem(QString());
        fontStyleComboBox->addItem(QString());
        fontStyleComboBox->setObjectName(QString::fromUtf8("fontStyleComboBox"));
        fontStyleComboBox->setEnabled(false);
        fontStyleComboBox->setGeometry(QRect(381, 458, 121, 22));
        label_4 = new QLabel(NewShape);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 460, 71, 16));
        fontWeightComboBox = new QComboBox(NewShape);
        fontWeightComboBox->addItem(QString());
        fontWeightComboBox->addItem(QString());
        fontWeightComboBox->addItem(QString());
        fontWeightComboBox->addItem(QString());
        fontWeightComboBox->setObjectName(QString::fromUtf8("fontWeightComboBox"));
        fontWeightComboBox->setEnabled(false);
        fontWeightComboBox->setGeometry(QRect(381, 488, 121, 22));
        label_5 = new QLabel(NewShape);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(298, 488, 81, 20));
        dimensionsLabel = new QLabel(NewShape);
        dimensionsLabel->setObjectName(QString::fromUtf8("dimensionsLabel"));
        dimensionsLabel->setGeometry(QRect(270, 70, 81, 20));
        dimensionsLabel->setFrameShape(QFrame::Box);
        dimensionsLabel->setFrameShadow(QFrame::Sunken);
        dimensionsLabel->setAlignment(Qt::AlignCenter);
        line = new QFrame(NewShape);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 43, 588, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        shapeIDSpinBox = new QSpinBox(NewShape);
        shapeIDSpinBox->setObjectName(QString::fromUtf8("shapeIDSpinBox"));
        shapeIDSpinBox->setGeometry(QRect(296, 17, 71, 22));
        shapeIDSpinBox->setMaximum(10000);
        line_2 = new QFrame(NewShape);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(8, 195, 591, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(NewShape);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(9, 365, 590, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(NewShape);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(8, 553, 591, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(NewShape);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 50, 20, 512));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(NewShape);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(590, 50, 20, 512));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        buttonBox = new QDialogButtonBox(NewShape);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(190, 575, 193, 28));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        alignmentComboBox = new QComboBox(NewShape);
        alignmentComboBox->addItem(QString());
        alignmentComboBox->addItem(QString());
        alignmentComboBox->addItem(QString());
        alignmentComboBox->addItem(QString());
        alignmentComboBox->addItem(QString());
        alignmentComboBox->setObjectName(QString::fromUtf8("alignmentComboBox"));
        alignmentComboBox->setEnabled(false);
        alignmentComboBox->setGeometry(QRect(120, 488, 121, 22));
        label_6 = new QLabel(NewShape);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 492, 71, 16));
        addPointButton = new QPushButton(NewShape);
        addPointButton->setObjectName(QString::fromUtf8("addPointButton"));
        addPointButton->setEnabled(false);
        addPointButton->setGeometry(QRect(494, 107, 93, 28));
        clearPointsButton = new QPushButton(NewShape);
        clearPointsButton->setObjectName(QString::fromUtf8("clearPointsButton"));
        clearPointsButton->setEnabled(false);
        clearPointsButton->setGeometry(QRect(494, 138, 93, 28));
        pointAddedLabel = new QLabel(NewShape);
        pointAddedLabel->setObjectName(QString::fromUtf8("pointAddedLabel"));
        pointAddedLabel->setEnabled(true);
        pointAddedLabel->setGeometry(QRect(479, 175, 121, 20));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        pointAddedLabel->setFont(font);
        pointAddedLabel->setAlignment(Qt::AlignCenter);
        idTakenLabel = new QLabel(NewShape);
        idTakenLabel->setObjectName(QString::fromUtf8("idTakenLabel"));
        idTakenLabel->setGeometry(QRect(390, 20, 161, 16));
        idTakenLabel->setFont(font);

        retranslateUi(NewShape);

        QMetaObject::connectSlotsByName(NewShape);
    } // setupUi

    void retranslateUi(QDialog *NewShape)
    {
        NewShape->setWindowTitle(QApplication::translate("NewShape", "New Shape", nullptr));
        xLabel->setText(QApplication::translate("NewShape", "X", nullptr));
        penStyleLabel->setText(QApplication::translate("NewShape", "Style:", nullptr));
        capStyleComboBox->setItemText(0, QApplication::translate("NewShape", "Flat", nullptr));
        capStyleComboBox->setItemText(1, QApplication::translate("NewShape", "Square", nullptr));
        capStyleComboBox->setItemText(2, QApplication::translate("NewShape", "Round", nullptr));

        brushStyleLabel->setText(QApplication::translate("NewShape", "Style:", nullptr));
        brushColorComboBox->setItemText(0, QApplication::translate("NewShape", "Black", nullptr));
        brushColorComboBox->setItemText(1, QApplication::translate("NewShape", "White", nullptr));
        brushColorComboBox->setItemText(2, QApplication::translate("NewShape", "Red", nullptr));
        brushColorComboBox->setItemText(3, QApplication::translate("NewShape", "Green", nullptr));
        brushColorComboBox->setItemText(4, QApplication::translate("NewShape", "Blue", nullptr));
        brushColorComboBox->setItemText(5, QApplication::translate("NewShape", "Cyan", nullptr));
        brushColorComboBox->setItemText(6, QApplication::translate("NewShape", "Magenta", nullptr));
        brushColorComboBox->setItemText(7, QApplication::translate("NewShape", "Yellow", nullptr));
        brushColorComboBox->setItemText(8, QApplication::translate("NewShape", "Gray", nullptr));

        brushStyleComboBox->setItemText(0, QApplication::translate("NewShape", "Solid", nullptr));
        brushStyleComboBox->setItemText(1, QApplication::translate("NewShape", "Hor", nullptr));
        brushStyleComboBox->setItemText(2, QApplication::translate("NewShape", "Ver", nullptr));
        brushStyleComboBox->setItemText(3, QApplication::translate("NewShape", "No Brush", nullptr));

        sPointLabel->setText(QApplication::translate("NewShape", "Start Point:", nullptr));
        penColorComboBox->setItemText(0, QApplication::translate("NewShape", "Black", nullptr));
        penColorComboBox->setItemText(1, QApplication::translate("NewShape", "White", nullptr));
        penColorComboBox->setItemText(2, QApplication::translate("NewShape", "Red", nullptr));
        penColorComboBox->setItemText(3, QApplication::translate("NewShape", "Green", nullptr));
        penColorComboBox->setItemText(4, QApplication::translate("NewShape", "Blue", nullptr));
        penColorComboBox->setItemText(5, QApplication::translate("NewShape", "Cyan", nullptr));
        penColorComboBox->setItemText(6, QApplication::translate("NewShape", "Magenta", nullptr));
        penColorComboBox->setItemText(7, QApplication::translate("NewShape", "Yellow", nullptr));
        penColorComboBox->setItemText(8, QApplication::translate("NewShape", "Gray", nullptr));

        brushLabel->setText(QApplication::translate("NewShape", "Brush", nullptr));
        penLabel->setText(QApplication::translate("NewShape", "Pen", nullptr));
        yLabel->setText(QApplication::translate("NewShape", "Y", nullptr));
        penStyleComboBox->setItemText(0, QApplication::translate("NewShape", "Solid Line", nullptr));
        penStyleComboBox->setItemText(1, QApplication::translate("NewShape", "Dash Line", nullptr));
        penStyleComboBox->setItemText(2, QApplication::translate("NewShape", "Dot Line", nullptr));
        penStyleComboBox->setItemText(3, QApplication::translate("NewShape", "Dash Dot Line", nullptr));
        penStyleComboBox->setItemText(4, QApplication::translate("NewShape", "Dash Dot Dot Line", nullptr));
        penStyleComboBox->setItemText(5, QApplication::translate("NewShape", "No Pen", nullptr));

        brushColorLabel->setText(QApplication::translate("NewShape", "Color:", nullptr));
        joinLabel->setText(QApplication::translate("NewShape", "Join Style:", nullptr));
        penColorLabel->setText(QApplication::translate("NewShape", "Color:", nullptr));
        penJoinComboBox->setItemText(0, QApplication::translate("NewShape", "Miter", nullptr));
        penJoinComboBox->setItemText(1, QApplication::translate("NewShape", "Bevel", nullptr));
        penJoinComboBox->setItemText(2, QApplication::translate("NewShape", "Round", nullptr));

        wLabel->setText(QApplication::translate("NewShape", "Width:", nullptr));
        lLabel->setText(QApplication::translate("NewShape", "Length:", nullptr));
        capLabel->setText(QApplication::translate("NewShape", "Cap Style:", nullptr));
        shapeIDLabel->setText(QApplication::translate("NewShape", "Shape ID:", nullptr));
        shapeTypeComboBox->setItemText(0, QApplication::translate("NewShape", "Rectangle", nullptr));
        shapeTypeComboBox->setItemText(1, QApplication::translate("NewShape", "Square", nullptr));
        shapeTypeComboBox->setItemText(2, QApplication::translate("NewShape", "Ellipse", nullptr));
        shapeTypeComboBox->setItemText(3, QApplication::translate("NewShape", "Circle", nullptr));
        shapeTypeComboBox->setItemText(4, QApplication::translate("NewShape", "Line", nullptr));
        shapeTypeComboBox->setItemText(5, QApplication::translate("NewShape", "Polyline", nullptr));
        shapeTypeComboBox->setItemText(6, QApplication::translate("NewShape", "Polygon", nullptr));
        shapeTypeComboBox->setItemText(7, QApplication::translate("NewShape", "Text", nullptr));

        shapeTypeLabel->setText(QApplication::translate("NewShape", "Shape Type:", nullptr));
        xLabel_2->setText(QApplication::translate("NewShape", "X", nullptr));
        sPointLabel_2->setText(QApplication::translate("NewShape", "End Point:", nullptr));
        yLabel_2->setText(QApplication::translate("NewShape", "Y", nullptr));
        textLabel->setText(QApplication::translate("NewShape", "Text", nullptr));
        textLabel_2->setText(QApplication::translate("NewShape", "Text:", nullptr));
        label->setText(QApplication::translate("NewShape", "Width:", nullptr));
        textColorComboBox->setItemText(0, QApplication::translate("NewShape", "Black", nullptr));
        textColorComboBox->setItemText(1, QApplication::translate("NewShape", "White", nullptr));
        textColorComboBox->setItemText(2, QApplication::translate("NewShape", "Red", nullptr));
        textColorComboBox->setItemText(3, QApplication::translate("NewShape", "Green", nullptr));
        textColorComboBox->setItemText(4, QApplication::translate("NewShape", "Blue", nullptr));
        textColorComboBox->setItemText(5, QApplication::translate("NewShape", "Cyan", nullptr));
        textColorComboBox->setItemText(6, QApplication::translate("NewShape", "Magenta", nullptr));
        textColorComboBox->setItemText(7, QApplication::translate("NewShape", "Yellow", nullptr));
        textColorComboBox->setItemText(8, QApplication::translate("NewShape", "Gray", nullptr));

        textColorLabel->setText(QApplication::translate("NewShape", "Color:", nullptr));
        label_2->setText(QApplication::translate("NewShape", "Point Size:", nullptr));
        fontFamilyComboBox->setItemText(0, QApplication::translate("NewShape", "Comic Sans MS", nullptr));
        fontFamilyComboBox->setItemText(1, QApplication::translate("NewShape", "Courier", nullptr));
        fontFamilyComboBox->setItemText(2, QApplication::translate("NewShape", "Helvetica", nullptr));
        fontFamilyComboBox->setItemText(3, QApplication::translate("NewShape", "Times", nullptr));

        label_3->setText(QApplication::translate("NewShape", "Font Family:", nullptr));
        fontStyleComboBox->setItemText(0, QApplication::translate("NewShape", "Normal", nullptr));
        fontStyleComboBox->setItemText(1, QApplication::translate("NewShape", "Italic", nullptr));
        fontStyleComboBox->setItemText(2, QApplication::translate("NewShape", "Oblique", nullptr));

        label_4->setText(QApplication::translate("NewShape", "Font Style:", nullptr));
        fontWeightComboBox->setItemText(0, QApplication::translate("NewShape", "Normal", nullptr));
        fontWeightComboBox->setItemText(1, QApplication::translate("NewShape", "Thin", nullptr));
        fontWeightComboBox->setItemText(2, QApplication::translate("NewShape", "Light", nullptr));
        fontWeightComboBox->setItemText(3, QApplication::translate("NewShape", "Bold", nullptr));

        label_5->setText(QApplication::translate("NewShape", "Font Weight:", nullptr));
        dimensionsLabel->setText(QApplication::translate("NewShape", "Dimensions", nullptr));
        alignmentComboBox->setItemText(0, QApplication::translate("NewShape", "Left", nullptr));
        alignmentComboBox->setItemText(1, QApplication::translate("NewShape", "Right", nullptr));
        alignmentComboBox->setItemText(2, QApplication::translate("NewShape", "Top", nullptr));
        alignmentComboBox->setItemText(3, QApplication::translate("NewShape", "Bottom", nullptr));
        alignmentComboBox->setItemText(4, QApplication::translate("NewShape", "Center", nullptr));

        label_6->setText(QApplication::translate("NewShape", "Alignment:", nullptr));
        addPointButton->setText(QApplication::translate("NewShape", "Add Point", nullptr));
        clearPointsButton->setText(QApplication::translate("NewShape", "Clear Points", nullptr));
        pointAddedLabel->setText(QString());
        idTakenLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewShape: public Ui_NewShape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSHAPE_H
