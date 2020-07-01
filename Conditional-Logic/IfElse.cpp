/********************************************
 * Program: Conditional Logic (1) - If/Else
 * Author: TALI OSU
 * Description: An introduction to the if, else, and if else statements
 * Video Link:
 * *****************************************/

#include <iostream>

using namespace std;

int main() {
    int myVariable = 5;

    if (myVariable == 1) {
        cout << "The if statement runs!" << endl;
    }
    else if (myVariable == 0) {
        cout << "The if else statement runs!" << endl;
    }
    else if (myVariable == 5) {
        cout << "The if else statement runs!" << endl;
    }
    else {
        cout << "The car is going elsewhere!" << endl;
    }

    return 0;
}
