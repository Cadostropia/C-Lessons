#include <iostream>

using namespace std;
struct Employee
{
    string name;
    int id;
    float salary;
    float hoursWorked;
};
takeEmployeeInformation(Employee* emp, int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<"Enter name ";
        cin>>emp[i].name;

        cout<<"Enter id ";
        cin>>emp[i].id;

        cout<<"Enter salary ";
        cin>>emp[i].salary;

        cout<<"Enter hoursWorked ";
        cin>>emp[i].hoursWorked;
    }
}

displayEmployeeInformation(Employee* emp, int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<i+1<<". employee name: "<<emp[i].name<<endl;
        cout<<i+1<<". employee id: "<<emp[i].id<<endl;
        cout<<i+1<<". employee salary: "<<emp[i].salary<<endl;
        cout<<i+1<<". employee hoursWorked: "<<emp[i].hoursWorked<<endl;
        cout<<"--------------------"<<endl;
    }

}

int main(void)
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    Employee *employee = new Employee[n];

    takeEmployeeInformation(employee,n);
    displayEmployeeInformation(employee,n);

    delete[] employee;
}
