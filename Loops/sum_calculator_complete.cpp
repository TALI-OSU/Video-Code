#include <iostream>

using namespace std;

int main() {
	int num_amount;
	bool run_again = true;
	int sum;
	int temp;

	while(run_again) {
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
