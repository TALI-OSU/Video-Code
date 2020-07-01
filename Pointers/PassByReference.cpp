/******************************************
 * Program: 
 * Author: TALI OSU
 * Description: A simple example of Pass by Reference for comparison.
 * Video Link:
 * **************************************/

#include<iostream>

using namespace std;

void foo(int &val) {
   cout << &val << endl;
   val = 7;
}

int main() {
   int num = 3;
   foo(num);
   cout << num << endl;
   return 0;
}