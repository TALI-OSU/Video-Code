/******************************************
 * Program: C++ Basics (4) - Data Manipulation
 * Author: TALI OSU
 * Description: How to initialize variables and use arithmetic operators to modify their values.
 * Video Link:
 * **************************************/

#include <iostream>
using namespace std;
 
int main() {
    int width = 0;
    int length = 0;
    int area = 0;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;

    area = width * length;
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
 }
