/*
Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.
*/


#include <iostream>
using namespace std;

class Box {
    double length;
    double width;
    double height;

public:    
    Box() {
        length = 0;
        width = 0;
        height = 0;
    }

    Box(double side) {
        length = width = height = side;
    }

    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    double calculateVolume() {
        return length * width * height;
    }

    void setValues(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
};

int main() {
    int choice;
    double side, length, width, height;
    Box box;  

    do {
        cout<<"1. Calculate Volume with default values\n";
        cout<<"2. Calculate Volume with same value for length, width, and height\n";
        cout<<"3. Calculate Volume with different values for length, width, and height\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1: {
                box.setValues(1, 1, 1);  
                cout<<"Volume of the box(default values): "<<box.calculateVolume()<<endl;
                break;
            }
            case 2: {
                cout<<"Enter the value for length, width, and height: ";
                cin>>side;

                box = Box(side);  
                cout<<"Volume of the box (equal sides): "<<box.calculateVolume()<<endl;
                break;
            }
            case 3: {
                cout<<"Enter the length: ";
                cin>>length;
                cout<<"Enter the width: ";
                cin>>width;
                cout<<"Enter the height: ";
                cin>>height;

                box = Box(length, width, height); 
                cout<<"Volume of the box(different sides): "<<box.calculateVolume()<<endl;
                break;
            }
            case 4: {
                cout<<"Exiting program...\n";
                break;
            }
            default: {
                cout<<"Invalid choice.\n";
            }
        }
    } while(choice != 4);

    return 0;
}
