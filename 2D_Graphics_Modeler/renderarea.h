#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "ellipse.h"
#include "circle.h"
#include "line.h"
#include "polyline.h"
#include "polygon.h"
#include "text.h"


class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);
    myStd::vector<Shape*> shapes;
    myStd::vector<Text*> shapeLabels;

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:



};

#endif // RENDERAREA_H
