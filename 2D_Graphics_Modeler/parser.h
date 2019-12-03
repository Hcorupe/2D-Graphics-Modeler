
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

enum SHAPE
{
    LINE,
    POLYLINE,
    POLYGON,
    RECTANGLE,
    SQUARE,
    ELLIPSE,
    CIRCLE,
    TEXT
};

class Parser
{
    ifstream fin;
    ofstream fout;


public:
    //! Default constructor
	Parser();
    //! Destructor
	~Parser();


    //! skipLine skips a line in input file
    void skipLine();

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
    myStd::vector<Shape*> readShape();



    //! outputEmptyLine ouputs an empty line to file
	void outputEmptyLine() const;

    //! outputShapeId outputs shapeID to file
	void outputShapeId() const;

    //! outputShapeType outputs shape type to file
	void outputShapeType() const;

    //! outputLineDimensions outputs line dimensions to file
	void outputLineDimensions() const;

    //! outputPolyDimensions outputs polyline/polygon dimentions to file
	void outputPolyDimensions() const;

    //! outputRectangleDimensions outputs rect dimensions to file
	void outputRectangleDimensions() const;

    //! outputSquareDimensions outputs square dimensions to file
	void outputSquareDimensions() const;

    //! outputEllipseDimensions outputs ellipse dimensions to file
	void outputEllipseDimensions() const;

    //! outputCircleDimensions outputs circle dimensions to file
	void outputCircleDimensions() const;

    //! outputTextDimensions outputs text dimensions to file
	void outputTextDimensions() const;

    //! outputPenColor outputs pen color to file
	void outputPenColor() const;

    //! outputPenWidth outputs pen width to file
	void outputPenWidth() const;

    //! outputPenStyle outputs pen style to file
	void outputPenStyle() const;

    //! outputPenCapStyle outputs pen cap style to file
	void outputPenCapStyle() const;

    //! outputPenJoinStyle outputs pen join style to file
	void outputPenJoinStyle() const;

    //! outputBrushColor outputs brush color to file
	void outputBrushColor() const;

    //! outputBrushStyle outputs brush style to file
	void outputBrushStyle() const;

    //! outputTextString outputs text message to file
    void outputTextString() const;

    //! outputTextColor outputs text color to file
    void outputTextColor() const;

    //! outputTextAlignment outputs text alignment to file
    void outputTextAlignment() const;

    //! outputTextSize outputs text size to file
    void outputTextSize() const;

    //! outputTextFamily outputs text family to file
    void outputTextFamily() const;

    //! outputTextStyle outputs text style to file
    void outputTextStyle() const;

    //! outputTextWeight outputs text weight to file
    void outputTextWeight() const;

    //! fileOpened returns true if input file is open
    bool fileOpened() const;



private:
    myStd::vector<Shape*> list;
    int id;
    string shapeType;
    myStd::vector<QPoint> pointList;
    int l, w;
    int a, b;
    int r;
    string penColor;
    int penWidth;
    string penStyle;
    string penCapStyle;
    string penJoinStyle;
    string brushColor;
    string brushStyle;
    string textString;
    string textColor;
    string textAlignment;
    int textSize;
    string textFamily;
    string textStyle;
    string textWeight;

};





#endif /* PARSER_H_ */
