/*
Write a class Address with data members (string building, string street, string city ,int pin)
Implement constructors, getters, setters, accept(), and display() methods.
Test the class functunalities by creating the object of class and calling all the functions.
*/

#include <iostream>
using namespace std;

class Address {
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address() {
        building = "";
        street = "";
        city = "";
        pin = 0;
    }

    Address(string b, string s, string c, int p) {
        building = b;
        street = s;
        city = c;
        pin = p;
    }

    string getBuilding() {
        return building;
    }

    string getStreet() {
        return street;
    }

    string getCity() {
        return city;
    }

    int getPin() {
        return pin;
    }

    void setBuilding(string b){
        building = b;
    }

    void setStreet(string s){
        street = s;
    }

    void setCity(string c){
        city = c;
    }

    void setPin(int p){
        pin = p;
    }

    void accept() {
        cout<<"Enter Building: ";
        cin>>building;
        cout<<"Enter Street: ";
        cin>>street;
        cout<<"Enter City: ";
        cin>>city;
        cout<<"Enter Pin Code: ";
        cin>>pin;
    }

    void display() {
        cout<<"Address Details:" << endl;
        cout<<"Building: "<<building<<endl;
        cout<<"Street: "<<street<<endl;
        cout<<"City: "<<city<<endl;
        cout<<"Pin: "<<pin<<endl;
    }
};

int main() {
    Address address1;
    cout<<"Input address details:\n";
    address1.accept();
    
    cout<<"\nAddress details:\n";
    address1.display();

    return 0;
}
