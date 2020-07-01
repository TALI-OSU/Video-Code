/******************************************
 * Program: Loops (9) - Test Your Knowledge
 * Author: TALI OSU
 * Description: A coding challenge to test your knowlege of loops. The challenge is to build a sum calculator.
 * Video Link: 
 * ***************************************/

#include <iostream>

using namespace std;

int main() {
	
	int num_amount;
	int temp;
	int sum;
	int run_again = 1;

	while(run_again != 0) {
		cout << "Enter the amount of numbers you would like to add: ";
		cin >> num_amount;

		if (num_amount < 0) {
			cout << "Cannot add a negative amount of numbers." << endl;
			continue;
		}

		sum = 0;

		for (int i=0; i<num_amount; i++) {
			cout << "Enter a number: ";
			cin >> temp;
			sum += temp;
		}

		cout << "Your final number is " << sum << endl;
		cout << "Would you like to do another add? (type 0 if no)" << endl;
		cin >> run_again;
	}


	return 0;
}
