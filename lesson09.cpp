#include <iostream>

using namespace std;
struct Point
{
    int x;
    int y;
    string name;
};
void display (Point p)
{
    cout<<"x: "<<p.x<<endl;
    cout<<"y: "<<p.y<<endl;
    cout<<"name: "<<p.name<<endl;
}
void display2 (Point *p)
{
    cout<<"x: "<<p->x<<endl;
    cout<<"y: "<<p->y<<endl;
    cout<<"name: "<<p->name<<endl;
}

int main(void)
{
//    Point point1;
//    point1.x=4;
//    point1.y=7;
//    point1.name="Ali";
    int deneme{4};


    Point point1;
    Point *point2 = &point1;
    point2->x=9;
    point2->y=11;
    point2->name="mehmet";

    display(point1);
    display2(point2);

    (*point2).x=4;
}
