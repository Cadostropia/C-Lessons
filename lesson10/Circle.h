#ifndef Circle_h
#define Circle_h

class Circle{
public:
    Circle();
    Circle(double recievedValue);
    double getRadius();
    void setRadius(double recievedValue);
    double getArea();
    double getDiameter();
    double getPerimeter();
private:
    double radius;
    const double pi=3.14;
};
#endif // Circle_h
