#include <iostream>
#include <vector>
#include "Circle.h"
using namespace std;

int main(void)
{
    Circle circle;
    double a;
    int b;

    cout<<"How many values do you want to enter?\n\nValue amount: ";
    cin>>b;
    cout<<"----------------------------------------";
    vector<int> valuesVector(b);
    for(int i=0; i<b; i++)
    {
        if(i==0){cout<<endl;}
        cout<<"Enter a value ";
        cin>>a;
        valuesVector[i]=a;
        if(i==b-1){cout<<"----------------------------------------";}
    }

    for(int i=0; i<b; i++)
    {
        if(i==0){cout<<endl;}
        circle.setRadius(valuesVector[i]);
        cout<<i+1<<". value radius is "<<circle.getRadius()<<endl;
        cout<<i+1<<". value diameter is "<<circle.getDiameter()<<endl;
        cout<<i+1<<". value area is "<<circle.getArea()<<endl;
        cout<<i+1<<". value perimeter is "<<circle.getPerimeter()<<endl;
        if(i!=b-1){cout<<endl;}
    }



}
