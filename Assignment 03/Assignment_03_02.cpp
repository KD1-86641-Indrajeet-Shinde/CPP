/*
Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total
*/

#include <iostream>
using namespace std;

class Tollbooth{
    unsigned totalcars;
    unsigned int totalpaycars;
    unsigned int totoalnopaycars;
    double totalmoney;

public:
    Tollbooth(){
        totalcars = 0;
        totalpaycars = 0;
        totoalnopaycars = 0;
        totalmoney = 0.0;
    }

    void paycar(){
        totalcars++;
        totalpaycars++;
        totalmoney += 0.5; //totalmoney = totalmoney + 0.5
    }

    void nopaycars(){
        totalcars++;
        totoalnopaycars++;
    }

    void printOnConsole(){
        cout<<"Total cars passed: "<<totalcars<<endl;
        cout<<"Total paying cars: "<<totalpaycars<<endl;
        cout<<"Total non-paying cars: "<<totoalnopaycars<<endl;
        cout<<"Total money collected: "<<totalmoney<<endl;
    }
};

int main(){
    Tollbooth tb;

    int choice;

    while (true) {
        cout<<"1. Paying Car\n";
        cout<<"2. Non-paying Car\n";
        cout<<"3. Show Total\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1:
                tb.paycar();
                break;

            case 2:
                tb.nopaycars();
                break;

            case 3:
                tb.printOnConsole();
                break;

            case 4:
                return 0;

            default:
                cout<<"Invalid choice.\n";
        }
    }
    
    return 0;
}

