
#ifndef PARSER_H_
#define PARSER_H_

#include <QCoreApplication>
#include<QPoint>
#include<QFont>

#include<iostream>
#include<fstream>

#include"shape.h"
#include"line.h"
#include"polyline.h"
#include"polygon.h"
#include"rectangle.h"
#include"square.h"
#include"ellipse.h"
#include"circle.h"
#include"text.h"

#include"vector.h"
#include<cassert>


using namespace std;

const int COMMA = 1;
const int SHAPE_ID = 9;
const int SHAPE_TYPE = 11;
const int SHAPE_DIMENSIONS = 17;
const int PEN_COLOR = 10;
const int PEN_WIDTH = 10;
const int PEN_STYLE = 10;
const int PEN_CAP_STYLE = 13;
const int PEN_JOIN_STYLE = 14;
const int BRUSH_COLOR = 12;
const int BRUSH_STYLE = 12;
const int TEXT_STRING = 12;
const int TEXT_COLOR = 11;
const int TEXT_ALIGNMENT = 15;
const int TEXT_SIZE = 15;
const int TEXT_FAMILY = 16;
const int TEXT_STYLE = 15;
const int TEXT_WEIGHT = 16;


class Parser
{



public:
    //! Default constructor
	Parser();
    //! Destructor
	~Parser();

//*********MUTATORS********************MUTATORS********************MUTATORS********************MUTATORS********************MUTATORS***********

    //! skipLine skips a line in input file
    void skipLine() ;

    //! readShapeID reads shapeID from file
	int  readShapeId();

    //! readShapeType reads shape type from file
    SHAPE readShapeType();

    //! readLineDimensions reads point vector from file
    void readLineDimensions();

    //! readPolyDimensions reads point vector from file
    void readPolyDimensions();

    //! readRectangleDimensions reads rect dimensions from file
    void readRectangleDimensions();

    //! readSquareDimensions reads square dimensions from file
    void readSquareDimensions();

    //! readEllipseDimensions reads ellipse dimensions from file
    void readEllipseDimensions();

    //! readCircleDimensions reads circle dimensions from file
    void readCircleDimensions();

    //! readTextDimensions reads text dimensions from file
    void readTextDimensions();


    //! readPenColor reads in pen color from file
    Qt::GlobalColor readPenColor();

    //! readPenWidth reads pen width from file
    int readPenWidth();

    //! readPenStyle reads pen style from file
    Qt::PenStyle readPenStyle();

    //! readPenCapStyle reads pen cap style from file
    Qt::PenCapStyle readPenCapStyle();

    //! readPenJoinStyle reads pen join style from file
    Qt::PenJoinStyle readPenJoinStyle();

    //! readBrushColor reads brush color from file
    Qt::GlobalColor readBrushColor();

    //! readBrushStyle reads brush style from file
    Qt::BrushStyle readBrushStyle();

    //! readTextString reads text message from file
    string readTextString();

    //! readTextColor reads text color from file
    Qt::GlobalColor readTextColor();

    //! readTextAlignment reads text alignment from file
    Qt::AlignmentFlag readTextAlignment();

    //! readTextSize reads text size from file
    int  readTextSize();

    //! readTextFamily reads text family from file
    string readTextFamily();

    //! readTextStyle reads text style from file
    QFont::Style readTextStyle();

    //! readTextWeight reads text weight from file
    QFont::Weight readTextWeight();

    //! readShape reads entire shape from file
    myStd::vector<Shape*> load();


    void shapeIn(Shape* curr);







//********ACCESSORS****************ACCESSORS****************ACCESSORS****************ACCESSORS****************ACCESSORS********************************ACCESSORS********************************ACCESSORS****************

    //! fileOpened returns true if input file is open
    bool fileOpened() const;

    //! shapeTypeIn gets a SHAPE enum and returns the string format of it
    string shapeTypeIn(SHAPE type) const;

    //! colorIn gets a Qt color variable and returns the string format of it
    string colorIn(Qt::GlobalColor color) const;

    //! penStyleIn gets a Qt penStyle variable and returns the string format of it
    string penStyleIn(Qt::PenStyle pStyle) const;

    //! penCapStyleIn gets a Qt penCapStyle variable and returns the string format of it
    string penCapStyleIn(Qt::PenCapStyle pCapStyle) const;

    //! penJoinStyleIn gets a Qt penJoinStyle variable and returns the string format of it
    string penJoinStyleIn(Qt::PenJoinStyle pJoinStyle) const;

    //! brushStyleIn gets a Qt brushStyleIn variable and returns the string format of it
    string brushStyleIn(Qt::BrushStyle bStyle) const;

    //! textAlignIn gets a Qt AlignmentFlag variable and returns the string format of it
    string textAlignmentIn(Qt::AlignmentFlag txtAlign) const;

    //! textStyleIn gets a QFont Style variable and returns the string format of it
    string textStyleIn(QFont::Style txtStyle) const;

    //! textWeightIn gets a QFont Weight variable and returns the string format of it
    string textWeightIn(QFont::Weight txtWeight) const;



    //! outputEmptyLine ouputs an empty line to file
    void outputEmptyLine() ;

    //! outputShapeId outputs shapeID to file
    void outputShapeId() ;

    //! outputShapeType outputs shape type to file
    void outputShapeType() ;

    //! outputLineDimensions outputs line dimensions to file
    void outputLineDimensions() ;

    //! outputPolyDimensions outputs polyline/polygon dimentions to file
    void outputPolyDimensions() ;

    //! outputRectangleDimensions outputs rect dimensions to file
    void outputRectangleDimensions() ;

    //! outputSquareDimensions outputs square dimensions to file
    void outputSquareDimensions() ;

    //! outputEllipseDimensions outputs ellipse dimensions to file
    void outputEllipseDimensions() ;

    //! outputCircleDimensions outputs circle dimensions to file
    void outputCircleDimensions() ;

    //! outputTextDimensions outputs text dimensions to file
    void outputTextDimensions() ;

    //! outputPenColor outputs pen color to file
    void outputPenColor() ;

    //! outputPenWidth outputs pen width to file
    void outputPenWidth() ;

    //! outputPenStyle outputs pen style to file
    void outputPenStyle() ;

    //! outputPenCapStyle outputs pen cap style to file
    void outputPenCapStyle() ;

    //! outputPenJoinStyle outputs pen join style to file
    void outputPenJoinStyle() ;

    //! outputBrushColor outputs brush color to file
    void outputBrushColor() ;

    //! outputBrushStyle outputs brush style to file
    void outputBrushStyle() ;

    //! outputTextString outputs text message to file
    void outputTextString() ;

    //! outputTextColor outputs text color to file
    void outputTextColor() ;

    //! outputTextAlignment outputs text alignment to file
    void outputTextAlignment() ;

    //! outputTextSize outputs text size to file
    void outputTextSize() ;

    //! outputTextFamily outputs text family to file
    void outputTextFamily() ;

    //! outputTextStyle outputs text style to file
    void outputTextStyle() ;

    //! outputTextWeight outputs text weight to file
    void outputTextWeight() ;

    //! print ouputs information to file in the format of the type specified.
    void print(SHAPE type) ;






private:
    ifstream fin;
    ofstream fout;


    myStd::vector<Shape*> list;
    int id;
    string shapeType;
    myStd::vector<QPoint> pointList;
    int l, w;
    int a, b;
    int r;
    string penColor;
    int    penWidth;
    string penStyle;
    string penCapStyle;
    string penJoinStyle;
    string brushColor;
    string brushStyle;
    string textString;
    string textColor;
    string textAlignment;
    int    textSize;
    string textFamily;
    string textStyle;
    string textWeight;

};





#endif /* PARSER_H_ */
