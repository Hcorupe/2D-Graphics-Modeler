
#ifndef PARSER_H_
#define PARSER_H_


#include<iostream>
#include<fstream>
#include"vector.h"

using namespace std;

class Parser
{
    ifstream fin;
    ofstream fout;

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


public:
	Parser();
	~Parser();


	void skipLine();
	int  readShapeId();
	void readShapeType();
	void readLineDimensions();
	void readPolyDimensions();
	void readRectangleDimensions();
	void readSquareDimensions();
	void readEllipseDimensions();
	void readCircleDimensions();
	void readTextDimensions();
	void readPenColor();
	void readPenWidth();
	void readPenStyle();
	void readPenCapStyle();
	void readPenJoinStyle();
	void readBrushColor();
	void readBrushStyle();
    void readTextString();
    void readTextColor();
    void readTextAlignment();
    int  readTextSize();
    void readTextFamily();
    void readTextStyle();
    void readTextWeight();


	void outputEmptyLine() const;
	void outputShapeId() const;
	void outputShapeType() const;
	void outputLineDimensions() const;
	void outputPolyDimensions() const;
	void outputRectangleDimensions() const;
	void outputSquareDimensions() const;
	void outputEllipseDimensions() const;
	void outputCircleDimensions() const;
	void outputTextDimensions() const;
	void outputPenColor() const;
	void outputPenWidth() const;
	void outputPenStyle() const;
	void outputPenCapStyle() const;
	void outputPenJoinStyle() const;
	void outputBrushColor() const;
	void outputBrushStyle() const;
    void outputTextString() const;
    void outputTextColor() const;
    void outputTextAlignment() const;
    void outputTextSize() const;
    void outputTextFamily() const;
    void outputTextStyle() const;
    void outputTextWeight() const;


private:
    int id;
    string shapeType;
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
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
