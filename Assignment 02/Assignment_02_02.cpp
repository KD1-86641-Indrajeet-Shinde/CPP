/*Q2. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent(); // to initialize the student object with default values for data members (0,” ”,0);
void printStudentOnConsole();
void acceptStudentFromConsole();*/



#include <iostream>
using namespace std;

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

int main(){
    student s1;
    int choice;
    
    do
    {
        cout<<"1. Initialize Student\n";
        cout<<"2. Accept Student\n";
        cout<<"3. Print Student\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            s1.initStudent();
            break;
        case 2:
            s1.acceptStudentFromConsole();
            break;    
        case 3:
            s1.printStudentOnConsole();
            break;
        default:
            cout<<"Invalid Choice";        
        }
    } while (choice != 4);
    return 0;
}