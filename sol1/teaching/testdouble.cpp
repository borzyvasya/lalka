#include "std_lib_facilities.h"



int main() {
	vector<string> disliked {"Broccoli", "Bread", "Soup", "Candies", "Pork"};


	for (string temp; cin >> temp;) {
		for (int i = 0; i < disliked.size(); i++) {
			if (disliked[i] == temp)
				cout << "BLEEP\n";
		}
	}
	

	return 0;
}