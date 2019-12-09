#include "savechanges.h"
#include "ui_savechanges.h"

SaveChanges::SaveChanges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveChanges)
{
    ui->setupUi(this);

    // Hides ? button at top of window
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

SaveChanges::~SaveChanges()
{
    delete ui;
}

void SaveChanges::on_buttonBox_accepted()
{
    this->done(0);
}


void SaveChanges::on_buttonBox_rejected()
{
    this->done(1);
}
