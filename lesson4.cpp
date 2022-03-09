#include <iostream>

using namespace std;

void example( const int x, const int y, int& sum, int& product)
{
    sum= x+y;
    product =x*y;

}

int main()
{
    int s,p,c =10;
    double r,t = 3.2;
    example(c,t,s,p);
    cout<< s<< endl;
    cout<< p<< endl;
    cout<< c<< endl;
    cout<< t<< endl;
    return 0;
}
/*

*/
