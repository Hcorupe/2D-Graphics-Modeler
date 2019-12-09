#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "login.h"
#include "renderarea.h"
#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "ellipse.h"
#include "circle.h"
#include "line.h"
#include "polygon.h"
#include "polyline.h"
#include "text.h"
#include "vector.h"
#include <iostream>
#include "newshape.h"
#include "savechanges.h"
#include "parser.h"


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
    SaveChanges* saveDialog;
    NewShape* newShapeWindow;
    Shape* selectedShape;
    Text* selectedShapeLabel;
    bool changed;

private slots:
    void disableEdit();
    void save();

    void on_idComboBox_currentIndexChanged(int index);
    void on_xSpinBox_valueChanged(int arg1);
    void on_ySpinBox_valueChanged(int arg1);
    void on_deleteShapeButton_clicked();
    void on_newShapeButton_clicked();
    void receiveShape(Shape* shape, Text* text);
    void on_sortComboBox_currentIndexChanged(int index);
    void closeEvent(QCloseEvent *event);
};
#endif // MAINWINDOW_H
