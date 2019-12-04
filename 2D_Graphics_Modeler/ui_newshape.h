/********************************************************************************
** Form generated from reading UI file 'newshape.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSHAPE_H
#define UI_NEWSHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
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
    QLabel *pointsLabel;
    QLabel *idTakenLabel;
    QLabel *pointCountLabel;

    void setupUi(QDialog *NewShape)
    {
        if (NewShape->objectName().isEmpty())
            NewShape->setObjectName(QStringLiteral("NewShape"));
        NewShape->setWindowModality(Qt::ApplicationModal);
        NewShape->resize(610, 615);
        NewShape->setModal(true);
        lSpinBox = new QSpinBox(NewShape);
        lSpinBox->setObjectName(QStringLiteral("lSpinBox"));
        lSpinBox->setGeometry(QRect(80, 128, 42, 22));
        lSpinBox->setMinimum(1);
        lSpinBox->setMaximum(500);
        lSpinBox->setValue(1);
        xLabel = new QLabel(NewShape);
        xLabel->setObjectName(QStringLiteral("xLabel"));
        xLabel->setGeometry(QRect(364, 110, 16, 20));
        penStyleLabel = new QLabel(NewShape);
        penStyleLabel->setObjectName(QStringLiteral("penStyleLabel"));
        penStyleLabel->setGeometry(QRect(28, 293, 41, 16));
        capStyleComboBox = new QComboBox(NewShape);
        capStyleComboBox->setObjectName(QStringLiteral("capStyleComboBox"));
        capStyleComboBox->setGeometry(QRect(246, 291, 80, 22));
        brushStyleLabel = new QLabel(NewShape);
        brushStyleLabel->setObjectName(QStringLiteral("brushStyleLabel"));
        brushStyleLabel->setGeometry(QRect(411, 293, 41, 16));
        brushColorComboBox = new QComboBox(NewShape);
        brushColorComboBox->setObjectName(QStringLiteral("brushColorComboBox"));
        brushColorComboBox->setGeometry(QRect(450, 251, 80, 22));
        brushStyleComboBox = new QComboBox(NewShape);
        brushStyleComboBox->setObjectName(QStringLiteral("brushStyleComboBox"));
        brushStyleComboBox->setGeometry(QRect(450, 291, 80, 22));
        sPointLabel = new QLabel(NewShape);
        sPointLabel->setObjectName(QStringLiteral("sPointLabel"));
        sPointLabel->setGeometry(QRect(288, 110, 71, 20));
        penColorComboBox = new QComboBox(NewShape);
        penColorComboBox->setObjectName(QStringLiteral("penColorComboBox"));
        penColorComboBox->setGeometry(QRect(67, 251, 101, 22));
        brushLabel = new QLabel(NewShape);
        brushLabel->setObjectName(QStringLiteral("brushLabel"));
        brushLabel->setGeometry(QRect(430, 213, 61, 20));
        brushLabel->setFrameShape(QFrame::Box);
        brushLabel->setFrameShadow(QFrame::Sunken);
        brushLabel->setAlignment(Qt::AlignCenter);
        penLabel = new QLabel(NewShape);
        penLabel->setObjectName(QStringLiteral("penLabel"));
        penLabel->setGeometry(QRect(150, 213, 61, 20));
        penLabel->setFrameShape(QFrame::Box);
        penLabel->setFrameShadow(QFrame::Sunken);
        penLabel->setAlignment(Qt::AlignCenter);
        yLabel = new QLabel(NewShape);
        yLabel->setObjectName(QStringLiteral("yLabel"));
        yLabel->setGeometry(QRect(430, 112, 16, 16));
        penStyleComboBox = new QComboBox(NewShape);
        penStyleComboBox->setObjectName(QStringLiteral("penStyleComboBox"));
        penStyleComboBox->setGeometry(QRect(67, 291, 101, 22));
        wSpinBox = new QSpinBox(NewShape);
        wSpinBox->setObjectName(QStringLiteral("wSpinBox"));
        wSpinBox->setGeometry(QRect(180, 128, 42, 22));
        wSpinBox->setMinimum(1);
        wSpinBox->setMaximum(500);
        wSpinBox->setValue(1);
        xSpinBox = new QSpinBox(NewShape);
        xSpinBox->setObjectName(QStringLiteral("xSpinBox"));
        xSpinBox->setGeometry(QRect(377, 110, 42, 22));
        xSpinBox->setMaximum(1000);
        brushColorLabel = new QLabel(NewShape);
        brushColorLabel->setObjectName(QStringLiteral("brushColorLabel"));
        brushColorLabel->setGeometry(QRect(410, 253, 41, 16));
        joinLabel = new QLabel(NewShape);
        joinLabel->setObjectName(QStringLiteral("joinLabel"));
        joinLabel->setGeometry(QRect(181, 254, 61, 16));
        penColorLabel = new QLabel(NewShape);
        penColorLabel->setObjectName(QStringLiteral("penColorLabel"));
        penColorLabel->setGeometry(QRect(27, 253, 71, 16));
        ySpinBox = new QSpinBox(NewShape);
        ySpinBox->setObjectName(QStringLiteral("ySpinBox"));
        ySpinBox->setGeometry(QRect(440, 110, 42, 22));
        ySpinBox->setMaximum(500);
        penJoinComboBox = new QComboBox(NewShape);
        penJoinComboBox->setObjectName(QStringLiteral("penJoinComboBox"));
        penJoinComboBox->setGeometry(QRect(246, 251, 80, 22));
        wLabel = new QLabel(NewShape);
        wLabel->setObjectName(QStringLiteral("wLabel"));
        wLabel->setGeometry(QRect(130, 130, 41, 16));
        lLabel = new QLabel(NewShape);
        lLabel->setObjectName(QStringLiteral("lLabel"));
        lLabel->setGeometry(QRect(30, 130, 41, 16));
        capLabel = new QLabel(NewShape);
        capLabel->setObjectName(QStringLiteral("capLabel"));
        capLabel->setGeometry(QRect(180, 292, 61, 16));
        shapeIDLabel = new QLabel(NewShape);
        shapeIDLabel->setObjectName(QStringLiteral("shapeIDLabel"));
        shapeIDLabel->setGeometry(QRect(230, 20, 61, 16));
        shapeTypeComboBox = new QComboBox(NewShape);
        shapeTypeComboBox->setObjectName(QStringLiteral("shapeTypeComboBox"));
        shapeTypeComboBox->setGeometry(QRect(100, 18, 111, 22));
        shapeTypeLabel = new QLabel(NewShape);
        shapeTypeLabel->setObjectName(QStringLiteral("shapeTypeLabel"));
        shapeTypeLabel->setGeometry(QRect(20, 20, 81, 16));
        xLabel_2 = new QLabel(NewShape);
        xLabel_2->setObjectName(QStringLiteral("xLabel_2"));
        xLabel_2->setGeometry(QRect(364, 140, 16, 20));
        sPointLabel_2 = new QLabel(NewShape);
        sPointLabel_2->setObjectName(QStringLiteral("sPointLabel_2"));
        sPointLabel_2->setGeometry(QRect(295, 140, 71, 20));
        yLabel_2 = new QLabel(NewShape);
        yLabel_2->setObjectName(QStringLiteral("yLabel_2"));
        yLabel_2->setGeometry(QRect(430, 142, 16, 16));
        xEndSpinBox = new QSpinBox(NewShape);
        xEndSpinBox->setObjectName(QStringLiteral("xEndSpinBox"));
        xEndSpinBox->setEnabled(false);
        xEndSpinBox->setGeometry(QRect(377, 140, 42, 22));
        xEndSpinBox->setMaximum(1000);
        yEndSpinBox = new QSpinBox(NewShape);
        yEndSpinBox->setObjectName(QStringLiteral("yEndSpinBox"));
        yEndSpinBox->setEnabled(false);
        yEndSpinBox->setGeometry(QRect(440, 140, 42, 22));
        yEndSpinBox->setMaximum(500);
        textLabel = new QLabel(NewShape);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(280, 387, 61, 20));
        textLabel->setFrameShape(QFrame::Box);
        textLabel->setFrameShadow(QFrame::Sunken);
        textLabel->setAlignment(Qt::AlignCenter);
        textEdit = new QLineEdit(NewShape);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(121, 427, 161, 22));
        textLabel_2 = new QLabel(NewShape);
        textLabel_2->setObjectName(QStringLiteral("textLabel_2"));
        textLabel_2->setGeometry(QRect(81, 430, 55, 16));
        penWidthSpinBox = new QSpinBox(NewShape);
        penWidthSpinBox->setObjectName(QStringLiteral("penWidthSpinBox"));
        penWidthSpinBox->setGeometry(QRect(177, 323, 42, 22));
        penWidthSpinBox->setMaximum(20);
        penWidthSpinBox->setValue(1);
        label = new QLabel(NewShape);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 325, 41, 16));
        textColorComboBox = new QComboBox(NewShape);
        textColorComboBox->setObjectName(QStringLiteral("textColorComboBox"));
        textColorComboBox->setEnabled(false);
        textColorComboBox->setGeometry(QRect(120, 458, 121, 22));
        textColorLabel = new QLabel(NewShape);
        textColorLabel->setObjectName(QStringLiteral("textColorLabel"));
        textColorLabel->setGeometry(QRect(75, 460, 71, 16));
        pointSizeSpinBox = new QSpinBox(NewShape);
        pointSizeSpinBox->setObjectName(QStringLiteral("pointSizeSpinBox"));
        pointSizeSpinBox->setEnabled(false);
        pointSizeSpinBox->setGeometry(QRect(300, 525, 42, 22));
        pointSizeSpinBox->setMinimum(1);
        pointSizeSpinBox->setMaximum(50);
        pointSizeSpinBox->setValue(1);
        label_2 = new QLabel(NewShape);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 525, 71, 20));
        fontFamilyComboBox = new QComboBox(NewShape);
        fontFamilyComboBox->setObjectName(QStringLiteral("fontFamilyComboBox"));
        fontFamilyComboBox->setEnabled(false);
        fontFamilyComboBox->setGeometry(QRect(380, 427, 121, 22));
        label_3 = new QLabel(NewShape);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 429, 71, 16));
        fontStyleComboBox = new QComboBox(NewShape);
        fontStyleComboBox->setObjectName(QStringLiteral("fontStyleComboBox"));
        fontStyleComboBox->setEnabled(false);
        fontStyleComboBox->setGeometry(QRect(381, 458, 121, 22));
        label_4 = new QLabel(NewShape);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 460, 71, 16));
        fontWeightComboBox = new QComboBox(NewShape);
        fontWeightComboBox->setObjectName(QStringLiteral("fontWeightComboBox"));
        fontWeightComboBox->setEnabled(false);
        fontWeightComboBox->setGeometry(QRect(381, 488, 121, 22));
        label_5 = new QLabel(NewShape);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(298, 488, 81, 20));
        dimensionsLabel = new QLabel(NewShape);
        dimensionsLabel->setObjectName(QStringLiteral("dimensionsLabel"));
        dimensionsLabel->setGeometry(QRect(270, 70, 81, 20));
        dimensionsLabel->setFrameShape(QFrame::Box);
        dimensionsLabel->setFrameShadow(QFrame::Sunken);
        dimensionsLabel->setAlignment(Qt::AlignCenter);
        line = new QFrame(NewShape);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 43, 588, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        shapeIDSpinBox = new QSpinBox(NewShape);
        shapeIDSpinBox->setObjectName(QStringLiteral("shapeIDSpinBox"));
        shapeIDSpinBox->setGeometry(QRect(296, 17, 71, 22));
        shapeIDSpinBox->setMaximum(10000);
        line_2 = new QFrame(NewShape);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(8, 195, 591, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(NewShape);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(9, 365, 590, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(NewShape);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(8, 553, 591, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(NewShape);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(0, 50, 20, 512));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(NewShape);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(590, 50, 20, 512));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        buttonBox = new QDialogButtonBox(NewShape);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(190, 575, 193, 28));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        alignmentComboBox = new QComboBox(NewShape);
        alignmentComboBox->setObjectName(QStringLiteral("alignmentComboBox"));
        alignmentComboBox->setEnabled(false);
        alignmentComboBox->setGeometry(QRect(120, 488, 121, 22));
        label_6 = new QLabel(NewShape);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 492, 71, 16));
        addPointButton = new QPushButton(NewShape);
        addPointButton->setObjectName(QStringLiteral("addPointButton"));
        addPointButton->setEnabled(false);
        addPointButton->setGeometry(QRect(494, 107, 93, 28));
        clearPointsButton = new QPushButton(NewShape);
        clearPointsButton->setObjectName(QStringLiteral("clearPointsButton"));
        clearPointsButton->setEnabled(false);
        clearPointsButton->setGeometry(QRect(494, 138, 93, 28));
        pointsLabel = new QLabel(NewShape);
        pointsLabel->setObjectName(QStringLiteral("pointsLabel"));
        pointsLabel->setEnabled(true);
        pointsLabel->setGeometry(QRect(500, 175, 51, 20));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pointsLabel->setFont(font);
        pointsLabel->setAlignment(Qt::AlignCenter);
        idTakenLabel = new QLabel(NewShape);
        idTakenLabel->setObjectName(QStringLiteral("idTakenLabel"));
        idTakenLabel->setGeometry(QRect(390, 20, 161, 16));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        idTakenLabel->setFont(font1);
        pointCountLabel = new QLabel(NewShape);
        pointCountLabel->setObjectName(QStringLiteral("pointCountLabel"));
        pointCountLabel->setGeometry(QRect(549, 177, 41, 16));

        retranslateUi(NewShape);

        QMetaObject::connectSlotsByName(NewShape);
    } // setupUi

    void retranslateUi(QDialog *NewShape)
    {
        NewShape->setWindowTitle(QApplication::translate("NewShape", "New Shape", Q_NULLPTR));
        xLabel->setText(QApplication::translate("NewShape", "X", Q_NULLPTR));
        penStyleLabel->setText(QApplication::translate("NewShape", "Style:", Q_NULLPTR));
        capStyleComboBox->clear();
        capStyleComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Flat", Q_NULLPTR)
         << QApplication::translate("NewShape", "Square", Q_NULLPTR)
         << QApplication::translate("NewShape", "Round", Q_NULLPTR)
        );
        brushStyleLabel->setText(QApplication::translate("NewShape", "Style:", Q_NULLPTR));
        brushColorComboBox->clear();
        brushColorComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Black", Q_NULLPTR)
         << QApplication::translate("NewShape", "White", Q_NULLPTR)
         << QApplication::translate("NewShape", "Red", Q_NULLPTR)
         << QApplication::translate("NewShape", "Green", Q_NULLPTR)
         << QApplication::translate("NewShape", "Blue", Q_NULLPTR)
         << QApplication::translate("NewShape", "Cyan", Q_NULLPTR)
         << QApplication::translate("NewShape", "Magenta", Q_NULLPTR)
         << QApplication::translate("NewShape", "Yellow", Q_NULLPTR)
         << QApplication::translate("NewShape", "Gray", Q_NULLPTR)
        );
        brushStyleComboBox->clear();
        brushStyleComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Solid", Q_NULLPTR)
         << QApplication::translate("NewShape", "Hor", Q_NULLPTR)
         << QApplication::translate("NewShape", "Ver", Q_NULLPTR)
         << QApplication::translate("NewShape", "No Brush", Q_NULLPTR)
        );
        sPointLabel->setText(QApplication::translate("NewShape", "Start Point:", Q_NULLPTR));
        penColorComboBox->clear();
        penColorComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Black", Q_NULLPTR)
         << QApplication::translate("NewShape", "White", Q_NULLPTR)
         << QApplication::translate("NewShape", "Red", Q_NULLPTR)
         << QApplication::translate("NewShape", "Green", Q_NULLPTR)
         << QApplication::translate("NewShape", "Blue", Q_NULLPTR)
         << QApplication::translate("NewShape", "Cyan", Q_NULLPTR)
         << QApplication::translate("NewShape", "Magenta", Q_NULLPTR)
         << QApplication::translate("NewShape", "Yellow", Q_NULLPTR)
         << QApplication::translate("NewShape", "Gray", Q_NULLPTR)
        );
        brushLabel->setText(QApplication::translate("NewShape", "Brush", Q_NULLPTR));
        penLabel->setText(QApplication::translate("NewShape", "Pen", Q_NULLPTR));
        yLabel->setText(QApplication::translate("NewShape", "Y", Q_NULLPTR));
        penStyleComboBox->clear();
        penStyleComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Solid Line", Q_NULLPTR)
         << QApplication::translate("NewShape", "Dash Line", Q_NULLPTR)
         << QApplication::translate("NewShape", "Dot Line", Q_NULLPTR)
         << QApplication::translate("NewShape", "Dash Dot Line", Q_NULLPTR)
         << QApplication::translate("NewShape", "Dash Dot Dot Line", Q_NULLPTR)
         << QApplication::translate("NewShape", "No Pen", Q_NULLPTR)
        );
        brushColorLabel->setText(QApplication::translate("NewShape", "Color:", Q_NULLPTR));
        joinLabel->setText(QApplication::translate("NewShape", "Join Style:", Q_NULLPTR));
        penColorLabel->setText(QApplication::translate("NewShape", "Color:", Q_NULLPTR));
        penJoinComboBox->clear();
        penJoinComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Miter", Q_NULLPTR)
         << QApplication::translate("NewShape", "Bevel", Q_NULLPTR)
         << QApplication::translate("NewShape", "Round", Q_NULLPTR)
        );
        wLabel->setText(QApplication::translate("NewShape", "Width:", Q_NULLPTR));
        lLabel->setText(QApplication::translate("NewShape", "Length:", Q_NULLPTR));
        capLabel->setText(QApplication::translate("NewShape", "Cap Style:", Q_NULLPTR));
        shapeIDLabel->setText(QApplication::translate("NewShape", "Shape ID:", Q_NULLPTR));
        shapeTypeComboBox->clear();
        shapeTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Rectangle", Q_NULLPTR)
         << QApplication::translate("NewShape", "Square", Q_NULLPTR)
         << QApplication::translate("NewShape", "Ellipse", Q_NULLPTR)
         << QApplication::translate("NewShape", "Circle", Q_NULLPTR)
         << QApplication::translate("NewShape", "Line", Q_NULLPTR)
         << QApplication::translate("NewShape", "Polyline", Q_NULLPTR)
         << QApplication::translate("NewShape", "Polygon", Q_NULLPTR)
         << QApplication::translate("NewShape", "Text", Q_NULLPTR)
        );
        shapeTypeLabel->setText(QApplication::translate("NewShape", "Shape Type:", Q_NULLPTR));
        xLabel_2->setText(QApplication::translate("NewShape", "X", Q_NULLPTR));
        sPointLabel_2->setText(QApplication::translate("NewShape", "End Point:", Q_NULLPTR));
        yLabel_2->setText(QApplication::translate("NewShape", "Y", Q_NULLPTR));
        textLabel->setText(QApplication::translate("NewShape", "Text", Q_NULLPTR));
        textLabel_2->setText(QApplication::translate("NewShape", "Text:", Q_NULLPTR));
        label->setText(QApplication::translate("NewShape", "Width:", Q_NULLPTR));
        textColorComboBox->clear();
        textColorComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Black", Q_NULLPTR)
         << QApplication::translate("NewShape", "White", Q_NULLPTR)
         << QApplication::translate("NewShape", "Red", Q_NULLPTR)
         << QApplication::translate("NewShape", "Green", Q_NULLPTR)
         << QApplication::translate("NewShape", "Blue", Q_NULLPTR)
         << QApplication::translate("NewShape", "Cyan", Q_NULLPTR)
         << QApplication::translate("NewShape", "Magenta", Q_NULLPTR)
         << QApplication::translate("NewShape", "Yellow", Q_NULLPTR)
         << QApplication::translate("NewShape", "Gray", Q_NULLPTR)
        );
        textColorLabel->setText(QApplication::translate("NewShape", "Color:", Q_NULLPTR));
        label_2->setText(QApplication::translate("NewShape", "Point Size:", Q_NULLPTR));
        fontFamilyComboBox->clear();
        fontFamilyComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Comic Sans MS", Q_NULLPTR)
         << QApplication::translate("NewShape", "Courier", Q_NULLPTR)
         << QApplication::translate("NewShape", "Helvetica", Q_NULLPTR)
         << QApplication::translate("NewShape", "Times", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("NewShape", "Font Family:", Q_NULLPTR));
        fontStyleComboBox->clear();
        fontStyleComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Normal", Q_NULLPTR)
         << QApplication::translate("NewShape", "Italic", Q_NULLPTR)
         << QApplication::translate("NewShape", "Oblique", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("NewShape", "Font Style:", Q_NULLPTR));
        fontWeightComboBox->clear();
        fontWeightComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Normal", Q_NULLPTR)
         << QApplication::translate("NewShape", "Thin", Q_NULLPTR)
         << QApplication::translate("NewShape", "Light", Q_NULLPTR)
         << QApplication::translate("NewShape", "Bold", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("NewShape", "Font Weight:", Q_NULLPTR));
        dimensionsLabel->setText(QApplication::translate("NewShape", "Dimensions", Q_NULLPTR));
        alignmentComboBox->clear();
        alignmentComboBox->insertItems(0, QStringList()
         << QApplication::translate("NewShape", "Left", Q_NULLPTR)
         << QApplication::translate("NewShape", "Right", Q_NULLPTR)
         << QApplication::translate("NewShape", "Top", Q_NULLPTR)
         << QApplication::translate("NewShape", "Bottom", Q_NULLPTR)
         << QApplication::translate("NewShape", "Center", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("NewShape", "Alignment:", Q_NULLPTR));
        addPointButton->setText(QApplication::translate("NewShape", "Add Point", Q_NULLPTR));
        clearPointsButton->setText(QApplication::translate("NewShape", "Clear Points", Q_NULLPTR));
        pointsLabel->setText(QApplication::translate("NewShape", "Points:", Q_NULLPTR));
        idTakenLabel->setText(QString());
        pointCountLabel->setText(QApplication::translate("NewShape", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewShape: public Ui_NewShape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSHAPE_H
