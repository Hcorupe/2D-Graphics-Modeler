#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "login.h"
#include "renderarea.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Login* login;
    Shape* selectedShape;
    Text* selectedShapeLabel;

private slots:
    void disableEdit();

    void on_idComboBox_currentIndexChanged(int index);
    void on_xSpinBox_valueChanged(int arg1);
    void on_ySpinBox_valueChanged(int arg1);
    void on_deleteShapeButton_clicked();
    void on_newShapeButton_clicked();
};
#endif // MAINWINDOW_H
