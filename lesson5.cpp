#include <iostream>

using namespace std;
void swapIntegers(int& i1, int& i2){
    int temp = i1;
    i1=i2;
    i2= temp;
}
void swapIntegerPoints(int* p1, int* p2){
    int temp = *p1;
    *p1=*p2;
    *p2=temp;

}

int main()
{
    int a, b, *c =&a,*d=&b;
    cout<<"Start of function"<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"&a: "<<c<<endl;
    cout<<"&b: "<<d<<endl;
    cout<<endl;
    swapIntegers(a,b);
    cout<<"Start of swapIntegers"<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"&a: "<<c<<endl;
    cout<<"&b: "<<d<<endl;
    cout<<endl;
    swapIntegerPoints(c,d);
    cout<<"Start of swapIntegerPoints"<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"&a: "<<c<<endl;
    cout<<"&b: "<<d<<endl;
    return 0;
}
