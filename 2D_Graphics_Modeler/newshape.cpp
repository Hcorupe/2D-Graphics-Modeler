#include "newshape.h"
#include "ui_newshape.h"

NewShape::NewShape(QWidget *parent) :
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

        break;

    case SQUARE:
        enablePen(true);
        enableBrush(true);
        enableStartPoint(true);
        enableDimensions(true);

        enableWidth(false);
        enableEndPoint(false);
        enableText(false);

        break;

    case ELLIPSE:
        enablePen(true);
        enableBrush(true);
        enableStartPoint(true);
        enableDimensions(true);

        enableEndPoint(false);
        enableText(false);

        break;

    case CIRCLE:
        enablePen(true);
        enableBrush(true);
        enableStartPoint(true);
        enableDimensions(true);

        enableWidth(false);
        enableEndPoint(false);
        enableText(false);

        break;

    case LINE:
        enablePen(true);
        enableStartPoint(true);
        enableEndPoint(true);

        enableText(false);
        enableDimensions(false);
        enableBrush(false);

        break;

    case POLYLINE:
        enablePen(true);

        enableEndPoint(false);
        enableText(false);
        enableDimensions(false);
        enableBrush(false);
        break;

    case POLYGON:
        enablePen(true);
        enableBrush(true);

        enableEndPoint(false);
        enableText(false);
        enableDimensions(false);
        break;

    case TEXT:
        enableText(true);
        enableDimensions(true);

        enableEndPoint(false);
        enableBrush(false);
        enablePen(false);
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
        break;

    case POLYLINE:
        break;

    case POLYGON:
        break;

    case TEXT:
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
    id = arg1;
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
