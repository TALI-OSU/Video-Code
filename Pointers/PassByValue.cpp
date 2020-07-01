/******************************************
 * Program: 
 * Author: TALI OSU
 * Description: A simple example of pass by value for comparison.
 * Video Link:
 * **************************************/

#include<iostream>

using namespace std;

int foo(int val) {
   val = 7;
   return val;
}

int main() {
   int num = 3;
   num = foo(num);
   cout << num << endl;
   return 0;
}
