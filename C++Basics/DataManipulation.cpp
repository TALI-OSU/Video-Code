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
