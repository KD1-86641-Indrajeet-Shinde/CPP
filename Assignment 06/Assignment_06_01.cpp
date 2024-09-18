/*
Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type Date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.
Employee class should be inherited from Person.
Implement following classes. Test all functionalities in main().
(Note - Perform the Association and Inheritance in the above case.)
*/

#include <iostream>
using namespace std;

class Date{
    int day, month, year;

public:

void acceptDate(){
    cin>>day>>month>>year;
}

int getDay(){
    return day;
}
int getMonth(){
    return month;
}
int getYear(){
    return year;
}

void display(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;

}
};

class Person{

public:
    string name; 
    string address;
    Date birthdate;

public:

void acceptDetails(){
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter address: "<<endl;
    cin>>address;

    cout<<"Enter birthdate: "<<endl;
    birthdate.acceptDate();
}

void printDetalis(){
    cout<<name<<endl;
    cout<<address<<endl;
    cout<<birthdate.getDay()<<"/"<<birthdate.getMonth()<<"/"<<birthdate.getYear()<<endl;
}
};

class Employee : Person{
    int id;
    float salary;
    string dept;
    Date joindate;

public:

    void acceptDetails(){

        Person::acceptDetails();

        cout<<"Enter id: "<<endl;
        cin>>id;

        cout<<"Enter salary: "<<endl;
        cin>>salary;

        cout<<"Enter Dept: "<<endl;
        cin>>dept;

        cout<<"Enter joining date: "<<endl;
        joindate.acceptDate();
    }

    void printDetails(){
        // cout<<name<<endl;
        // cout<<address<<endl;
        // cout<<birthdate<<endl;
        Person::printDetalis();
        cout<<dept<<endl;
        cout<<id<<endl;
        cout<<salary<<endl;
        joindate.display();


    }
};

int main(){
    Person p;
    p.acceptDetails();
    p.printDetalis();

    Employee e;
    e.acceptDetails();
    e.printDetails();
}