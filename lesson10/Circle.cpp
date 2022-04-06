#include "Circle.h"

Circle::Circle()
{
    radius = 0;
}
Circle::Circle(double recievedValue)
{
    radius=recievedValue ;
}
void Circle::setRadius(double recievedValue) {
    radius = recievedValue;
}
double Circle::getRadius() {
    return radius;
}


double Circle::getArea()
{
    return pi*radius*radius;
}

double Circle::getDiameter()
{
    return 2*radius;
}

double Circle::getPerimeter()
{
    return  pi*radius*2;
}

