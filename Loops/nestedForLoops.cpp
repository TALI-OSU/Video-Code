#include<iostream>
using namespace std;

int main() {
    // nested for loops are like a calendar
    // you enter into a year, then you must live all twelve months in that you year
    // you enter a month, then you have to live all the days in the month to enter the next month
    // once a month is over, your day count starts back at zero (you start a month at the beginning)
    // once a year is over, your month count starts back at zero (you always start a year in January)
    
    for(int year=0; year<2; year++) {
        for(int month=0; month<12; month++) {
            for(int day=0; day<30; day++) {
                cout << "Today is day " << day << " month " << month << " year " << year << endl;
            }
        }
    }

    return 0;
}