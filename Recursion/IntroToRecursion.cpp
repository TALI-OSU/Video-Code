/******************************************
 * Program: 
 * Author: TALI OSU
 * Description: An example of using recursion to sum numbers.
 * Video Link:
 * **************************************/

#include <iostream>
using namespace std;

// 3 -> 3+2+1 -> 6

int sum(int num) {
    if(num == 1) {
        return 1;
    }
    return num + sum(num-1);
}

int main() {
    int startNum = 0;
    cout << "Please enter a number to find the sum of the natural numbers: " << endl;
    cin >> startNum;
    cout << sum(startNum) << endl;
    return 0;
}