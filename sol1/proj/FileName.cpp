#include "std_lib_facilities.h"


int main() {
	vector<string> names { "Joe", "Barbara", "Alex" };
	vector<int> scores {17, 22, 34 };
	int i = 0;
	for (i = 0; i < names.size(); ++i)
		cout << "name: " << names[i] << ", score: " << scores[i] << "\n";

	string enterName; cin >> enterName;
	for (i = 0; i < names.size(); ++i) {
		if (names[i] == enterName) {
			cout << scores[i] << "\n\n";

		}
	}

	int enterScore = 0; cin >> enterScore;
	for (i = 0; i < scores.size(); ++i) {
		if (scores[i] == enterScore) {
			cout << names[i] << "\n";
		}
	}

	return 0;
}