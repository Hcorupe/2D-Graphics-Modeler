#include "MainWindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{



    login = new Login;
    login->show();

    ui->setupUi(this);


    connect(login, SIGNAL(finished(int)), this, SLOT(show()));
    connect(login, SIGNAL(finished(int)), this, SLOT(disableEdit()));



    // Add shape ids to combobox
    for (int i = 0; i < ui->renderArea->shapes.size(); i++)
    {
        ui->idComboBox->addItem(QString::number((ui->renderArea->shapes[i]->getShapeId())));
    }






}

void MainWindow::disableEdit()
{
       // Disable editing forms if user is not admin
       if(login->result() == 0)
       {
           ui->MainTab->findChild<QWidget*>("xSpinBox")->setDisabled(true);
           ui->MainTab->findChild<QWidget*>("ySpinBox")->setDisabled(true);
           ui->MainTab->findChild<QWidget*>("newShapeButton")->setDisabled(true);
           ui->MainTab->findChild<QWidget*>("deleteShapeButton")->setDisabled(true);

       }

}

MainWindow::~MainWindow()
{
    delete ui;
    delete login;
}


// Change selected shape depending on combobox selected
void MainWindow::on_idComboBox_currentIndexChanged(int index)
{
    selectedShape = ui->renderArea->shapes[index];
    selectedShapeLabel = ui->renderArea->shapeLabels[index];
    ui->xSpinBox->setValue(selectedShape->getStartPoint().x());
    ui->ySpinBox->setValue(selectedShape->getStartPoint().y());
}

void MainWindow::on_xSpinBox_valueChanged(int arg1)
{

    // Move shape x-value
    QPoint newPoint(selectedShape->getStartPoint());
    newPoint.setX(arg1);

    selectedShape->move(newPoint);

    // Move shape label x-value
    newPoint = selectedShapeLabel->getStartPoint();
    newPoint.setX(arg1 - LABEL_OFFSET);
    selectedShapeLabel->setStartPoint(newPoint);

    ui->renderArea->update();

}

void MainWindow::on_ySpinBox_valueChanged(int arg1)
{
    // Move shape y-value
    QPoint newPoint(selectedShape->getStartPoint());
    newPoint.setY(arg1);

    selectedShape->move(newPoint);

    // Move shape label y-value
    newPoint = selectedShapeLabel->getStartPoint();
    newPoint.setY(arg1 + LABEL_OFFSET);
    selectedShapeLabel->setStartPoint(newPoint);

    ui->renderArea->update();
}

void MainWindow::on_deleteShapeButton_clicked()
{
    for (int i = 0; i < ui->renderArea->shapes.size(); i++)
    {

        if (ui->renderArea->shapes[i] == selectedShape)
        {
            // Erase shape from shape vect
            ui->renderArea->shapes.erase(&(ui->renderArea->shapes[i]));
            // Erase shape label
            ui->renderArea->shapeLabels.erase(&(ui->renderArea->shapeLabels[i]));
        }
    }

    ui->idComboBox->removeItem(ui->idComboBox->currentIndex());

    ui->renderArea->update();
}

void MainWindow::on_newShapeButton_clicked()
{
    newShapeWindow = new NewShape;
    connect(newShapeWindow, SIGNAL(sendShape(Shape*,Text*)), this, SLOT(receiveShape(Shape*,Text*)));
    newShapeWindow->show();
}

void MainWindow::receiveShape(Shape* shape, Text* text)
{
    ui->renderArea->shapes.push_back(shape);
    ui->renderArea->shapeLabels.push_back(text);

    ui->idComboBox->addItem(QString::number(shape->getShapeId()));

    ui->renderArea->update();
}
