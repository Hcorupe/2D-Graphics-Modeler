/********************************************************************************
** Form generated from reading UI file 'savechanges.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVECHANGES_H
#define UI_SAVECHANGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SaveChanges
{
public:
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveChanges)
    {
        if (SaveChanges->objectName().isEmpty())
            SaveChanges->setObjectName(QStringLiteral("SaveChanges"));
        SaveChanges->resize(245, 133);
        SaveChanges->setModal(true);
        label = new QLabel(SaveChanges);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(16, 40, 221, 16));
        buttonBox = new QDialogButtonBox(SaveChanges);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 80, 193, 28));
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);

        retranslateUi(SaveChanges);

        QMetaObject::connectSlotsByName(SaveChanges);
    } // setupUi

    void retranslateUi(QDialog *SaveChanges)
    {
        SaveChanges->setWindowTitle(QApplication::translate("SaveChanges", "Save Changes", Q_NULLPTR));
        label->setText(QApplication::translate("SaveChanges", "Would you like to save your changes?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SaveChanges: public Ui_SaveChanges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVECHANGES_H
