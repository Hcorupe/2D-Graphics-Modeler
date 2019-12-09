#ifndef SAVECHANGES_H
#define SAVECHANGES_H

#include <QDialog>

namespace Ui {
class SaveChanges;
}

class SaveChanges : public QDialog
{
    Q_OBJECT

public:
    explicit SaveChanges(QWidget *parent = nullptr);
    ~SaveChanges();

private slots:
    void on_buttonBox_accepted();



    void on_buttonBox_rejected();

private:
    Ui::SaveChanges *ui;
};

#endif // SAVECHANGES_H
