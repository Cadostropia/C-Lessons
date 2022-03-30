#include <iostream>
//template<typename identifier> function_declaration;
using namespace std;
template<typename T>
T sum(T a, T b){return a+b;}
int main()
{
    cout<<sum<int>(94,71)<<endl;
    cout<<sum<double>(94.58,71.68)<<endl;
    cout<<sum<string>("Hello ", "Oradaki")<<endl;
}
