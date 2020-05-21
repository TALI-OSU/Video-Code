#include <iostream>
using namespace std;

int main() {

    // For loops and while loops can do the same thing.
    // Both of these loops are printing the values 0-9
    // We don't want to use for loops and while loops in the same way though
    int counter = 0;
    while(counter < 10) {
        cout << counter << endl;
        counter++;
    }

    for(int i=0; i<10; i++) {
        cout << i << endl;
    }


    // A while loop should be used when we don't know when the loop will terminate
    int num = 0;
    while(num != 10) {
        cout << "Please enter the number 10: ";
        cin >> num;
    }

    // A for loop should be used when we know when it will end
    // It will run a set amount of times
    cout << "The even numbers between 0-20 are: ";
    for(int i=0; i<21; i+=2) {
        cout << i << " ";
    }
    cout << endl;

    // This is also a proper use of a for loop because before the loop begins the program will know how many times the loop will run
    int end = 0;
    cout << "Please enter an ending value: ";
    cin >> end;
    for(int i=0; i<end; i+=2) {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}