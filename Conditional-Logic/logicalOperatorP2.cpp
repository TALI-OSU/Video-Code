#include <iostream>
using namespace std;

int main() {

    // more practice with and and or logical operators
    bool true_var = true;
    bool false_var = false;

    if(true_var && true_var) {
        cout << "This is very true" << endl;
    }

    if(true_var || false_var) {
        cout << "This is also very true" << endl;
    }

    if(true_var && false_var) {
        cout << "This is also very very true" << endl;
    }

    // the less than, greater than, less than equal to, and greater than equal to
    int num1 = 1;
    int num2 = 2;

    if(num1 < num2) {
        cout << "num1 is less than num2" << endl;
    }
    
    if(num2 > num1) {
        cout << "num2 is greater than num1" << endl;
    }

    if(num1 <= 1) {
        cout << "num1 is less than or equal to 1" << endl;
    }
    //not in the video, but an example of greater than equal to
    if(num1 >= 0) {
        cout << "num1 is greater than or equal to 0" << endl;
    }

    // check for equality and for non-equality
    if(num1 == 1) {
        cout << "num1 is one" << endl;
    }

    if(num2 != 3) {
        cout << "num2 is not equal to three" << endl;
    }

    // tying everything together
    if(num1 == 1 && !false_var) {
        cout << "The first if is true" << endl;
    }
    else if(num2 != 4 || num2 > 7 ) {
        cout << "The else if is true" << endl;
    }
    else {
        cout << "We fell into the else" << endl;
    }

    return 0;
}