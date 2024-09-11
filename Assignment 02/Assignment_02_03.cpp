/*Q3. Create a namespace NStudent. Create the Student class(created as per Q2) inside namespace.
Create the object of student and perform accept and display student.*/



#include <iostream>
using namespace std;

namespace NStudent{
    
    class student{
    int rollno;
    string name;
    float marks;

    public:
    void initStudent(){
        rollno = 0;
        name = "";
        marks = 0.0;
    }

    void acceptStudentFromConsole(){
        cout<<"Enter Roll No: ";
        cin>>this->rollno;
        cout<<"Enter Name: ";
        cin>>this->name;
        cout<<"Enter Marks: ";
        cin>>this->marks;
    }
    
    void printStudentOnConsole(){
        cout<<"Student details:\n";
        cout<<"Roll No: "<<rollno<<"\nName: "<<name<<"\nMarks: "<<marks<<endl;
    }
};    
}

int main(){
    NStudent::student s1;
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();
    return 0;
}