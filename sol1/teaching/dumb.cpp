#include "std_lib_facilities.h"


void deterWinner(char player, char ai) {
	if ((player == 'R' && ai == 'S') ||
		(player == 'S' && ai == 'P') ||
		(player == 'P' && ai == 'R')) {
		cout << "You won!\n";
	}
	else if (player == ai) cout << "Tie!\n";
	else cout << "ai won!\n";
}

void validateLoop(char player) {
	if (player != 'R' && player != 'P' && player != 'S')
		cout << "Invalid input!\n";
}

int main() {
	vector<char> ai_moves {'R', 'R', 'S', 'P', 'S', 'P'};
	char player = 0;
	int ai_moves_index = 0;
	char playAgain = 0;
	//for (char aimoves = 0; cin >> aimoves;) ai_moves.push_back(aimoves);


	do {
		cin >> player;
		if (player != 'R' && player != 'P' && player != 'S') {
			cout << "Invalid input!\n";
			continue;
		}

		char ai_choice = ai_moves[ai_moves_index];

		cout << "u chose: " << player << "\n";
		cout << "ai chose: " << ai_choice << "\n";

		deterWinner(player, ai_choice);

		ai_moves_index = (ai_moves_index + 1) % ai_moves.size();
		
		cout << "Wanna play again? (Y or N): ";
		cin >> playAgain;

	} while (playAgain == 'Y' || playAgain == 'y');

	cout << "\nThanks for game!\n";



	return 0;
}