#include <iostream>
using namespace std;
class Student
{
    private:
        int id;
        string name;
     public:
         Student(int studentID, string studentName){id = studentID;name = studentName;}
         int getId(){return id;}
         void setId (int student_id){id= student_id;}
         string getName(){return name;}
         void setName (string student_name){name= student_name;}
         void showV(){
             cout<<"id: "<<id<<" ";
             cout<<"name: "<<name<<" ";
             cout<<endl; }
};

Student* findStudent(Student* studentArr, const int studentSize, const int key)
{
    for(int i = 0; i<studentSize;++)
    {
        if((studentArr+i)-> getId()==key)
            return studentSize + i
    }
    return Null
}

int main(void)
{
    Student* student = new Student[5];
    cout<<"enter students id and name"<<endl;
    int id;
    string name;
    for(int i=0; i<5;i++)
    {
        cin>>id>>name;
        (students+i)->setId(id);
        (students+i)->setname(name);        
    }
    cout<<"Enter key: ";
    int key;
    cin>>key;
    if(findStudent(students,5,key)==NULL){cout<<"Not Found !!!";}
    else{cout<<"Enter key: }
    delete[] students;

}
