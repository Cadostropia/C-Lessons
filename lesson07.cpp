#include <iostream>
using namespace std;

class Student{
     private:
        int id;
        string name;
     public:
         Student(int studentID, string studentName)
         {
             id = studentID;
             name = studentName;
         }

         int getId(){return id;}
         void setId (int student_id){id= student_id;}

         string getName(){return name;}
         void setName (int student_name){name= student_name;}

         void startV()
         {
             cout<<">> initial case: "<<endl;
         }
         void showV()
         {
             cout<<"id: "<<id<<" ";
             cout<<"name: "<<name<<" ";
             cout<<endl;
         }
         void finishV()
         {
             cout<<endl;
             cout<<">> after swapping the ids of S and R: "<<endl;
         }
};

void swapStudentIds(Student& S1, Student& S2)
{
    int temp= S1.getId();
    S1.setId(S2.getId());
    S2.setId(temp);
}


int main(void)
{
    Student S(123, "student_S"), R(789,"student_R");

    S.startV();
    S.showV();
    R.showV();

    swapStudentIds(S,R);
    S.finishV();
    S.showV();
    R.showV();
}
