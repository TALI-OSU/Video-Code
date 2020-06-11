/******************************************
 * Program: Loops (7) - Continue and Break
 * Author: TALI OSU
 * Description: An introduction to continue and break statements in the context of for loops.
 * Video Link: 
 * ***************************************/

#include <iostream>

using namespace std;

int main() {

	int sum = 0;

	// Loop 10 times starting at 1
	for (int i = 1; i < 11; i++) {
		if (i == 4) {
			break;
		}
		sum += i; // Equivalent to: sum = sum + i
	}

	// Print final sum
	cout << "Sum: " << sum << endl;

	return 0;
}

