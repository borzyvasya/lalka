#include "std_lib_facilities.h"


void printName(string name, vector<string> vecnames, vector<int> vecscores) {
	for (int i = 0; i < vecnames.size(); ++i) {
		if (vecnames[i] == name) {
			cout << vecscores[i] << "\n";
			return;
		}
	}
	cout << "name not found\n";
}

void printScore(int score, vector<string> vecnames, vector<int> vecscores) {
	for (int i = 0; i < vecscores.size(); ++i) {
		if (vecscores[i] == score) {
			cout << vecnames[i] << "\n";
			return;
		}
	}
	cout << "score not found\n";
}

int main() {
	vector<string> names { "Joe", "Barbara", "Alex" };
	vector<int> scores {17, 22, 34};

	for (int i = 0; i < names.size(); ++i)
		cout << "name: " << names[i] << ", score: " << scores[i] << "\n";

	string enterName; cin >> enterName;
	printName(enterName, names, scores);

	int enterScore; cin >> enterScore;
	printScore(enterScore, names, scores);

	return 0;
}