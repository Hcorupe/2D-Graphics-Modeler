#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include "shape.h"
#include "rectangle.h"


class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

signals:

public slots:
};

#endif // RENDERAREA_H
