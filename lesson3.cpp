#include <iostream>

using namespace std;

void defaultChooser( int x= 1, int y= 2, int z= 3){
/*
default x =1
default y= 2
default z= 3

*/
}

int defaulter(int x, int y= 10, int z= 100)
{
    return x*y*z;
}

int main()
{
    cout<< defaulter(11, 4, 3)<<endl;
    cout<< defaulter(11, 4)<<endl;
    cout<< defaulter(11)<<endl;
}
/*

*/
