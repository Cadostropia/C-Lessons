#include <iostream>

using namespace std;

string calculate (int a, int b)
{
    string answer;
    if(a>b){
        answer= "A is biggest number";
    }
    else if(a<b){
         answer= "B is biggest number";
    }
    return answer;
}

int main()
{
    int newVar, newVar2;
    cout <<  "A: ";
    cin >>newVar;
    cout <<  "B: ";
    cin >>newVar2;
    cout <<calculate(newVar, newVar2);
    return 0;
}
/*

*/
