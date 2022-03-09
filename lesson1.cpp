#include <iostream>

using namespace std;

string calculate (int a)
{
    string answer;
    if(90<a<100){answer = "A";}
    else if(80<a<89){answer = "B";}
    else if(70<a<79){answer = "C";}
    else if(60<a<69){answer = "D";}
    else if(0<a<59){answer = "F";}
    return answer;
}

int main()
{
    int newVar;
    cout << "Please enter the value: ";
    cin >> newVar;
    string newVar2 = calculate(newVar);
    cout << newVar2 << endl;
    return 0;
}
