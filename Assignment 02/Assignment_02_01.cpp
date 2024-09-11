#include <iostream>
using namespace std;

struct Date{
    int day;
    int month;
    int year;

    void initDate(){
        day = 1;
        month = 1;
        year = 1900;
    }

    void printDateOnConsole(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

    void acceptDateFromConsole(){
        cout<<"Enter date: ";
        cin>>this->day>>this->month>>this->year;
    }

    bool isLeapYear(int year){
        if (year%4 == 0 || year%400 == 0)
        {
            return true;
        }
        else
        return false;
        
    }
};

int main(){
    struct Date d1;
    d1.acceptDateFromConsole();
    d1.printDateOnConsole();
    bool check = d1.isLeapYear(d1.year);
    // cout<<check;
    if (check)
    {
        cout<<d1.year<<" is a leap year.";
    }
    else
    {
        cout<<d1.year<<" isn't a leap year.";
    }
    
}