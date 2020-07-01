/******************************************
 * Program: 
 * Author: TALI OSU
 * Description: An introduction to pointers, their purpose, and their syntax.
 * Video Link:
 * **************************************/

#include <iostream>
using namespace std;

int main() {
    int num = 8;
    int *intPtr = NULL;

    intPtr = &num;
    cout << "what intPtr holds: " << intPtr << endl;
    cout << "the address of num: " << &num << endl;

    *intPtr = 10;
    cout << "dereferenced intPtr: " << *intPtr << endl;
    cout << "num: " << num << endl;

    return 0;
}