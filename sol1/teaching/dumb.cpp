#include "std_lib_facilities.h"


void calc(double value1, char action, double value2) {
	switch (action) {
		case '+':
			cout << value1 << " + " << value2 << " = " << value1 + value2 << "\n";
			break;

		case '-':
			cout << value1 << " - " << value2 << " = " << value1 - value2 << "\n";
			break;

		case '*':
			cout << value1 << " * " << value2 << " = " << value1 * value2 << "\n";
			break;

		case '/':
			cout << value1 << " / " << value2 << " = " << value1 / value2 << "\n";
			break;

		default:
			cout << "wrong action..." << '\n';
	}

}



int main() 
{
	vector<string> values { "zero", "one", "two", "three", "four", 
							"five", "six", "seven", "eight", "nine" };


	string v1, v2;
	char action;
	while (cin >> v1 >> action >> v2) {
		if ((v1.size() == 1 && isdigit(v1[0])) &&
			(v2.size() == 1 && isdigit(v2[0]))) {
			int digit1 = v1[0] - '0';
			int digit2 = v2[0] - '0';

			if ((digit1 >= 0 && digit1 <= 9) &&
				(digit2 >= 0 && digit2 <= 9)) {
				calc(digit1, action, digit2);
			}
			else cout << "invalid digit\n";
		}

		else {
			for (int i = 0; i < values.size(); ++i) {
				for (int j = 0; j < values.size(); ++j) {
					if (v1 == values[i] && v2 == values[j]) {
						calc(i, action, j);
						break;
					}
				}
			}
		}
	}

	return 0;
}