/*
Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type Date.
Implement above classes. Test all functionalities in main().
*/


#include <iostream>
using namespace std;

class Date{
    int day;
    int month;
    int year;

public:
    //constructor
    Date(){
        day = 0;
        month = 0;
        year = 0;
    }
    Date(int day, int month, int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void display(){
        cout<<day<<"/"<<month<<"/"<<year;
    }
};

class Person{
    string name;
    string address;
    Date birthdate;

public:
    Person(string name, string address, Date birthdate){
        this->name = name;
        this->address = address;
        this->birthdate = birthdate;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        birthdate.display();
    }
};

int main(){
    Date birthdate(15, 02, 2002);
    Person p("Indrajeet", "Bazar Peth", birthdate);
    p.display();

    return 0;
}