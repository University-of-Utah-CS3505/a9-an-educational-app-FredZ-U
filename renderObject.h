#ifndef RENDEROBJECT_H
#define RENDEROBJECT_H
#include <QPoint>
#include <QImage>
#include <QColor>


class RenderObject
{
public:
    RenderObject();
    RenderObject(QPoint location, QColor color, int size);
    bool hasTexture;
    QPoint getLocation();
    void setLocation(QPoint location);
    QColor getColor();
    void setColor(QColor color);
    int getSize();
    void setSize(int size);
    void setTexture(QPixmap*);
    const QPixmap& getTexture();
private:
    QPoint location;
    QColor color;
    int size;
    QPixmap* texture;
};

#endif // RENDEROBJECT_H
