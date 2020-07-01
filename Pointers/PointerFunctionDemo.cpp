/******************************************
 * Program: 
 * Author: TALI OSU
 * Description: An introduction to using pointers with functions.
 * Video Link:
 * **************************************/

#include <iostream>
using namespace std;

void addTen(float *a, float *b) {
  *a += 10;
  *b += 10;
}

int main() {
  float num1 = 5.5;
  float num2 = 88.9;
  addTen(&num1, &num2);
  cout << num1 << endl;
  cout << num2 << endl;
  return 0;
}