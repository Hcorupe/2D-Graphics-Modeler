#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "SortingAlgs.h"        //for IdSort, AreaSort, PerimSort


MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{


    login = new Login;
    login->open();

    ui->setupUi(this);


    connect(login, SIGNAL(finished(int)), this, SLOT(show()));
    connect(login, SIGNAL(finished(int)), this, SLOT(disableEdit()));



    // Add shape ids to combobox
    for (int i = 0; i < ui->renderArea->shapes.size(); i++)
    {
        ui->idComboBox->addItem(QString::number((ui->renderArea->shapes[i]->getShapeId())));
    }

    for (int i = 0; i < ui->renderArea->shapes.size(); i++)
    {
        ui->shapeList->addItem(QString((QString::number((ui->renderArea->shapes[i]->getShapeId())))
                          + "     " + (QString((ui->renderArea->shapes[i]->GetShapeTypeString())))
                          + "     " + (QString::number((ui->renderArea->shapes[i]->GetArea())))
                          + "     " + (QString::number((ui->renderArea->shapes[i]->GetPerimeter())))));
    }

    //Add sort options to combobox
    ui->sortComboBox->addItem(QString(("ID")));
    ui->sortComboBox->addItem(QString(("Area")));
    ui->sortComboBox->addItem(QString(("Perimeter")));

    changed = false;
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

    if(ui->ySpinBox->isEnabled())
    {
        changed = true;
    }


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

    if(ui->xSpinBox->isEnabled())
    {
        changed = true;
    }
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

    changed = true;

}

void MainWindow::on_newShapeButton_clicked()
{

    // Create list of int shapeIDs to pass to New Shape window
    myStd::vector<int> ids;

    for(int i = 0; i < ui->renderArea->shapes.size(); i++)
    {
        ids.push_back(ui->renderArea->shapes[i]->getShapeId());
    }

    newShapeWindow = new NewShape(ids);
    connect(newShapeWindow, SIGNAL(sendShape(Shape*,Text*)), this, SLOT(receiveShape(Shape*,Text*)));
    newShapeWindow->show();
}

void MainWindow::receiveShape(Shape* shape, Text* text)
{
    ui->renderArea->shapes.push_back(shape);
    ui->renderArea->shapeLabels.push_back(text);

    ui->shapeList->addItem(QString(QString::number((shape->getShapeId())))
                      + "     " + (QString((shape->GetShapeTypeString())))
                      + "     " + (QString::number((shape->GetArea())))
                      + "     " + (QString::number((shape->GetPerimeter()))));

    ui->idComboBox->addItem(QString::number(shape->getShapeId()));

    ui->renderArea->update();

    ui->idComboBox->setCurrentIndex(ui->renderArea->shapes.size() - 1);

    changed = true;
}

void MainWindow::on_sortComboBox_currentIndexChanged(int index)
{
    if(ui->renderArea->shapes.size() > 0)
    {
        myStd::vector<Shape*> shapesForList(ui->renderArea->shapes);
        QListWidgetItem* deleteItem;

        switch(index)
        {
        case 0:
            IdSort(shapesForList, 0, shapesForList.size() - 1);
            break;
        case 1:
            AreaSort(shapesForList, 0, shapesForList.size() - 1);
            break;
        case 2:
            PerimSort(shapesForList, 0, shapesForList.size() - 1);
            break;
        default:
            break;
        }

        for (int i = 0; i < ui->renderArea->shapes.size(); i++)
        {
            ui->shapeList->addItem(QString(QString::number((shapesForList[i]->getShapeId())))
                              + "     " + (QString((shapesForList[i]->GetShapeTypeString())))
                              + "     " + (QString::number((shapesForList[i]->GetArea())))
                              + "     " + (QString::number((shapesForList[i]->GetPerimeter()))));
        }

        for(int i = 0; i <= shapesForList.size() - 1; i++)
        {
            deleteItem = ui->shapeList->takeItem(0);
            delete deleteItem;
        }
    }
}

void MainWindow::save()
{
    if(saveDialog->result() == 0)
    {
        // Save function goes here

//        Parser parser;
//        parser.setShapeList(ui->renderArea->shapes);

//        parser.save();

        std::cerr << "Changes saved"; //Remove when complete
    }

}


void MainWindow::closeEvent(QCloseEvent *event)
{
    if (changed)
    {
        saveDialog = new SaveChanges();
        connect(saveDialog, SIGNAL(finished(int)), this, SLOT(save()));

        saveDialog->show();
    }

    QWidget::closeEvent(event);
}


void MainWindow::on_commentBtn_clicked()
{

    count++;

    QString userComment;

    if(count == 4)
    {
        //ui->maxCmntWrning->setText("Max comment reached");

        count = 1;
    }


  ui->CommentDisp->setReadOnly(true);
  ui->commentDispTwo->setReadOnly(true);
  ui->commentDispThr->setReadOnly(true);


  switch (count)
  {
  case 1:   userComment = ui->cmntBox->toPlainText();
            ui->CommentDisp->setText(userComment);
        break;
  case 2:   userComment = ui->cmntBox->toPlainText();
            ui->commentDispTwo->setText(userComment);
      break;
  case 3:   userComment = ui->cmntBox->toPlainText();
            ui->commentDispThr->setText(userComment);
      break;
  }




}

 void MainWindow::on_EmailSndBtn_clicked(){}
