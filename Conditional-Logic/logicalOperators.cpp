#include <iostream>
using namespace std;

int main() {
    bool true_var = true;
    bool false_var = false;

    // && and
    // || or

    bool other_var = true_var || false_var;
    cout << other_var << endl;

    // ! not
    bool opposite = !true_var;
    cout << opposite << endl;

    return 0;
}
