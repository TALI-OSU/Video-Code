#include <iostream>
using namespace std;

/* SWITCH STATEMENTS *

** Constant values are needed in the condition order for switch to be valid (expressions also work)
** Breaks should be used to avoid “falling through”
** Default statements are optional, but strongly recommended

*/

int main(){
    int choice = 0;

    cout << "Which of the following would you like? " << endl;
    cout << "[1] Get a book recommendation" << endl; 
    cout << "[2] Get a movie recommendation" << endl; 
    cout << "[3] Get a study tip" << endl;
    cout << "Enter your choice [1-3]: ";
    cin >> choice;

    /* What will the output be? */
    switch (choice) {
        case 1:  
            cout << "Book: The Calculating Stars (Science Fiction)" << endl;
            break; 
        case 2: 
            cout << "Movie: Hidden Figures (Drama & History)" << endl;
            break; 
        case 3: 
            cout << "Take short breaks when studying!" << endl;
            break; 
        default:  
            cout << "You entered an invalid choice." << endl;
            break; 
    }
    return 0;
}
