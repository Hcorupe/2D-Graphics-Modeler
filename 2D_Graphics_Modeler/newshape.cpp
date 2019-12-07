#include "newshape.h"
#include "ui_newshape.h"

NewShape::NewShape(myStd::vector<int> ids, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewShape)
{
    ui->setupUi(this);

    // Hides ? button at top of window
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);

    shapeType = RECTANGLE;
    id = 0;
    sPoint.setX(0);
    sPoint.setY(0);
    length = 1;
    width  = 1;

    penWidth   = 1;
    penColor   = Qt::black;
    penStyle   = Qt::SolidLine;
    joinStyle  = Qt::MiterJoin;
    capStyle   = Qt::FlatCap;

    brushColor = Qt::black;
    brushStyle = Qt::SolidPattern;

    text       = "Text";
    pointSize  = 0;
    textColor  = Qt::black;
    fontFamily = "Comic Sans MS";
    fontStyle  = QFont::StyleNormal;
    fontWeight = QFont::Normal;
    alignment  = Qt::AlignLeft;

    idList = ids;

    // If shapeID 0 already taken, disable ok button
    if(ids.search(0))
    {
        ui->idTakenLabel->setText("Shape ID already taken.");
        ui->buttonBox->setEnabled(false);
        idTaken = true;
    }


}

NewShape::~NewShape()
{
    delete ui;
}

void NewShape::on_shapeTypeComboBox_currentIndexChanged(int index)
{

    switch(index)
    {
    case RECTANGLE:
        enablePen(true);
        enableBrush(true);
        enableStartPoint(true);
        enableDimensions(true);


        enableEndPoint(false);
        enableText(false);
        enablePoly(false);

        break;

    case SQUARE:
        enablePen(true);
        enableBrush(true);
        enableStartPoint(true);
        enableDimensions(true);

        enableWidth(false);
        enableEndPoint(false);
        enableText(false);
        enablePoly(false);

        break;

    case ELLIPSE:
        enablePen(true);
        enableBrush(true);
        enableStartPoint(true);
        enableDimensions(true);

        enableEndPoint(false);
        enableText(false);
        enablePoly(false);

        break;

    case CIRCLE:
        enablePen(true);
        enableBrush(true);
        enableStartPoint(true);
        enableDimensions(true);

        enableWidth(false);
        enableEndPoint(false);
        enableText(false);
        enablePoly(false);

        break;

    case LINE:
        enablePen(true);
        enableStartPoint(true);
        enableEndPoint(true);

        enableText(false);
        enableDimensions(false);
        enableBrush(false);
        enablePoly(false);

        break;

    case POLYLINE:
        enablePen(true);
        enablePoly(true);

        enableEndPoint(false);
        enableText(false);
        enableDimensions(false);
        enableBrush(false);
        ui->buttonBox->setEnabled(false);
        break;

    case POLYGON:
        enablePen(true);
        enableBrush(true);
        enablePoly(true);

        enableEndPoint(false);
        enableText(false);
        enableDimensions(false);
        ui->buttonBox->setEnabled(false);
        break;

    case TEXT:
        enableText(true);
        enableDimensions(true);

        enableEndPoint(false);
        enableBrush(false);
        enablePen(false);
        enablePoly(false);
        break;
    }
}

void NewShape::on_buttonBox_accepted()
{
    shapeType = SHAPE_TYPE(ui->shapeTypeComboBox->currentIndex());

    id = ui->shapeIDSpinBox->value();


    switch(shapeType)
    {

    case RECTANGLE:
        shape = new Rectangle(id,sPoint,length,width,penColor,
                              penWidth,penStyle,capStyle,
                              joinStyle,brushColor,brushStyle);
        break;

    case SQUARE:
        shape = new Square(id,sPoint,length,penColor,
                           penWidth,penStyle,capStyle,
                           joinStyle,brushColor,brushStyle);
        break;

    case ELLIPSE:
        shape = new Ellipse(id,sPoint,penColor,
                            penWidth,penStyle,capStyle,
                            joinStyle,brushColor,brushStyle,
                            length,width);
        break;

    case CIRCLE:

        shape = new Circle(id,sPoint,penColor,
                           penWidth,penStyle,capStyle,
                           joinStyle,brushColor,brushStyle,
                           length);
        break;

    case LINE:
        shape = new Line(id,sPoint,ePoint,penColor,penWidth,
                         penStyle,capStyle,joinStyle);
        break;

    case POLYLINE:
        shape = new Polyline(id,points,penColor,penWidth,
                             penStyle,capStyle,joinStyle);
        break;

    case POLYGON:
        shape = new Polygon(id,points,penColor,penWidth,
                            penStyle,capStyle,joinStyle,
                            brushColor,brushStyle);
        break;

    case TEXT:
        shape = new Text(id,sPoint,length,width,text,textColor,alignment,
                         pointSize,fontFamily,fontStyle,fontWeight);
        break;
    }

    QPoint point;
    point.setX(sPoint.x() - LABEL_OFFSET);
    point.setY(sPoint.y() + LABEL_OFFSET);

    Text* label = new Text(8,point,500,50,QString::number(id),Qt::black,
                          Qt::AlignLeft,10,"Sans Serif",QFont::StyleNormal,
                          QFont::Normal);

    emit sendShape(shape, label);

    this->close();

}

void NewShape::on_buttonBox_rejected()
{
    this->close();
}


void NewShape::enableDimensions(bool enable)
{
    ui->lSpinBox->setEnabled(enable);
    ui->wSpinBox->setEnabled(enable);
}

void NewShape::enableWidth(bool enable)
{
    ui->wSpinBox->setEnabled(enable);
}

void NewShape::enableStartPoint(bool enable)
{
    ui->xSpinBox->setEnabled(enable);
    ui->ySpinBox->setEnabled(enable);
}

void NewShape:: enableEndPoint(bool enable)
{
    ui->xEndSpinBox->setEnabled(enable);
    ui->yEndSpinBox->setEnabled(enable);
}

void NewShape::enableText(bool enable)
{
    ui->textColorComboBox->setEnabled(enable);
    ui->textEdit->setEnabled(enable);
    ui->fontStyleComboBox->setEnabled(enable);
    ui->fontFamilyComboBox->setEnabled(enable);
    ui->fontWeightComboBox->setEnabled(enable);
    ui->pointSizeSpinBox->setEnabled(enable);
    ui->alignmentComboBox->setEnabled(enable);
}

void NewShape::enablePen(bool enable)
{
    ui->penColorComboBox->setEnabled(enable);
    ui->penStyleComboBox->setEnabled(enable);
    ui->penJoinComboBox->setEnabled(enable);
    ui->capStyleComboBox->setEnabled(enable);
    ui->penWidthSpinBox->setEnabled(enable);
}

void NewShape::enableBrush(bool enable)
{
    ui->brushColorComboBox->setEnabled(enable);
    ui->brushStyleComboBox->setEnabled(enable);
}

void NewShape::enablePoly(bool enable)
{
    ui->addPointButton->setEnabled(enable);
}

Qt::GlobalColor NewShape::readColor(int current)
{

    Qt::GlobalColor color;

    switch(current)
    {
    case BLACK:
        color = Qt::black;
        break;

    case WHITE:
        color = Qt::white;
        break;

    case RED:
        color = Qt::red;
        break;

    case GREEN:
        color = Qt::green;
        break;

    case BLUE:
        color = Qt::blue;
        break;

    case CYAN:
        color = Qt::cyan;
        break;

    case MAGENTA:
        color = Qt::magenta;
        break;

    case YELLOW:
        color = Qt::yellow;
        break;

    case GRAY:
        color = Qt::gray;
        break;
    }

    return color;

}

void NewShape::on_shapeIDSpinBox_valueChanged(int arg1)
{
    if(idList.search(arg1))
    {
        ui->buttonBox->setEnabled(false);
        ui->idTakenLabel->setText("Shape ID already taken.");
        idTaken = true;
    }
    else if ((ui->shapeTypeComboBox->currentIndex() == POLYLINE && points.size() >= 2) ||
             (ui->shapeTypeComboBox->currentIndex() == POLYGON && points.size() >= 3))
    {
        idTaken = false;
        id = arg1;
        ui->idTakenLabel->clear();
        ui->buttonBox->setEnabled(true);
    }
    else
    {
        idTaken = false;
        id = arg1;
        ui->idTakenLabel->clear();
    }


}

void NewShape::on_xSpinBox_valueChanged(int arg1)
{
    sPoint.setX(arg1);
}

void NewShape::on_ySpinBox_valueChanged(int arg1)
{
    sPoint.setY(arg1);
}

void NewShape::on_lSpinBox_valueChanged(int arg1)
{
    length = arg1;
}

void NewShape::on_wSpinBox_valueChanged(int arg1)
{
    width = arg1;
}

void NewShape::on_xEndSpinBox_valueChanged(int arg1)
{
    ePoint.setX(arg1);
}

void NewShape::on_yEndSpinBox_valueChanged(int arg1)
{
    ePoint.setY(arg1);
}

void NewShape::on_penColorComboBox_currentIndexChanged(int index)
{
    penColor = readColor(index);
}

void NewShape::on_penStyleComboBox_currentIndexChanged(int index)
{
    switch(index)
    {

    case SOLID_LINE:
        penStyle = Qt::SolidLine;
        break;

    case DASH_LINE:
        penStyle = Qt::DashLine;
        break;

    case DOT_LINE:
        penStyle = Qt::DotLine;
        break;

    case DASH_DOT_LINE:
        penStyle = Qt::DashDotLine;
        break;

    case DASH_DOT_DOT_LINE:
        penStyle = Qt::DashDotDotLine;
        break;

    case NO_PEN:
        penStyle = Qt::NoPen;
    }
}

void NewShape::on_penJoinComboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case MITER:
        joinStyle = Qt::MiterJoin;
        break;

    case BEVEL:
        joinStyle = Qt::BevelJoin;
        break;

    case ROUND:
        joinStyle = Qt::RoundJoin;
    }
}

void NewShape::on_capStyleComboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case FLAT:
        capStyle = Qt::FlatCap;
        break;

    case SQUARE_CAP:
        capStyle = Qt::SquareCap;
        break;

    case ROUND_CAP:
        capStyle = Qt::RoundCap;
    }
}

void NewShape::on_penWidthSpinBox_valueChanged(int arg1)
{
    penWidth = arg1;
}

void NewShape::on_brushColorComboBox_currentIndexChanged(int index)
{
    brushColor = readColor(index);
}

void NewShape::on_brushStyleComboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case SOLID:
        brushStyle = Qt::SolidPattern;
        break;

    case HOR:
        brushStyle = Qt::HorPattern;
        break;

    case VER:
        brushStyle = Qt::VerPattern;
        break;

    case NO_BRUSH:
        brushStyle = Qt::NoBrush;
    }
}

void NewShape::on_textEdit_textChanged(const QString &arg1)
{
    text = arg1;
}

void NewShape::on_pointSizeSpinBox_valueChanged(int arg1)
{
    pointSize = arg1;
}

void NewShape::on_textColorComboBox_currentIndexChanged(int index)
{
    textColor = readColor(index);
}


void NewShape::on_fontFamilyComboBox_currentIndexChanged(const QString &arg1)
{
    fontFamily = arg1;
}

void NewShape::on_fontStyleComboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case NORMAL:
        fontStyle = QFont::StyleNormal;
        break;

    case ITALIC:
        fontStyle = QFont::StyleItalic;
        break;

    case OBLIQUE:
        fontStyle = QFont::StyleOblique;
    }
}

void NewShape::on_fontWeightComboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case NORMAL_W:
        fontWeight = QFont::Normal;
        break;

    case LIGHT:
        fontWeight = QFont::Light;
        break;

    case THIN:
        fontWeight = QFont::Thin;
        break;

    case BOLD:
        fontWeight = QFont::Bold;
    }
}

void NewShape::on_alignmentComboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case LEFT:
        alignment = Qt::AlignLeft;
        break;

    case RIGHT:
        alignment = Qt::AlignRight;
        break;

    case TOP:
        alignment = Qt::AlignTop;
        break;

    case BOTTOM:
        alignment = Qt::AlignBottom;
        break;

    case CENTER:
        alignment = Qt::AlignCenter;
    }
}

void NewShape::on_addPointButton_clicked()
{
    QPoint point = sPoint;
    points.push_back(point);

    ui->pointCountLabel->setText(QString::number(points.size()));

    if(ui->shapeTypeComboBox->currentIndex() == POLYLINE && points.size() >= 2 && !idTaken)
    {
        ui->buttonBox->setEnabled(true);
    }

    else if(ui->shapeTypeComboBox->currentIndex() == POLYGON && points.size() >= 3 && !idTaken)
    {
        ui->buttonBox->setEnabled(true);
    }

}
