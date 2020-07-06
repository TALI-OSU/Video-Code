/******************************************
 * Program: Loops (2) - Do While
 * Author: TALI OSU
 * Description: An introduction to do while loops
 * Video Link: 
 * ***************************************/

#include <iostream>
using namespace std;

int main() {

    /* dividend / divisor = result */

    float dividend = 0;
    float divisor = 0;
    float result = 0;

    cout << "This program will perform division" << endl;
    cout << "Enter the first number: " << endl; 
    cin >> dividend;

    /* will run AT LEAST ONCE & until user enters a valid choice */
    do {
        cout << "Enter the number to divide by (can't be 0): " << endl; 
        cin >> divisor;
    } while (divisor == 0);
    /* if divisor is invalid, loop again */
    /* if divisor is valid, loop will end and continue program */

    result = dividend / divisor;
    cout << dividend << " / "  << divisor << " = " << result << endl;

    return 0;

}
