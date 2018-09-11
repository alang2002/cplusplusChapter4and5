#include <iostream>
#include <time.h>
using namespace std;

int doorGame()
{
	int doorChoice;

	cout << "*************" << endl;
	cout << "* The Price *" << endl;
	cout << "* Is Right  *" << endl;
	cout << "*************" << endl;
	cout << "Welcome to The Price Is Right!" << endl;
	cout << "Please pick a door to choose from for a prize: " << endl;
	cout << "Door 1" << endl;
	cout << "Door 2" << endl;
	cout << "Door 3" << endl;
	cout << "Pick your door >> ";
	cin >> doorChoice;

	if (doorChoice > 3 || doorChoice < 1) {
		cout << "Restarting due to user error" << endl;
		doorGame();
	}
	else if (doorChoice == 1) {
		cout << "You won a piece of cheese!" << endl;
	}
	else if (doorChoice == 2) {
		cout << "You won a million dollars! ...In monopoly money!" << endl;
	}
	else if (doorChoice == 3) {
		cout << "You won nothing!" << endl;
	}

	return 0;
}

int randomNumGame()
{
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 10 + 1;

	cout << "Please enter a number 1 - 10 >> ";
	cin >> numChoice;
	
	if (numChoice == secret) {
		cout << "You're winner!" << endl;
	}
	else {
		cout << "You're lose!" << endl;
	}

	return 0;
}

int random100Game()
{
	int num100Choice;
	int secret100;
	srand(time(NULL));
	secret100 = rand() % 100 + 1;

	cout << "Please enter a number 1 - 100 >> ";
	cin >> num100Choice;

	if (num100Choice == secret100) {
		cout << "You big win!" << endl;
	}
	else {
		cout << "You big lose!" << endl;
	}
	return 0;
}

int main() {
	bool endGame = false;
	do {
		int gameChoice;
		cout << "Hello user, please choose which game you'd like to play (or none of these numbers to quit):" << endl;
		cout << "1 - Door Choice Game" << endl;
		cout << "2 - Random Number Game" << endl;
		cout << "3 - Random Number Game (100!)" << endl;
		cout << "Enter number here >> ";
		cin >> gameChoice;

		if (gameChoice == 1) {
			doorGame();
		}
		else if (gameChoice == 2) {
			randomNumGame();
		}
		else if (gameChoice == 3) {
			random100Game();
		}
		else if (gameChoice > 3 || gameChoice < 1) {
			cout << "Exiting" << endl;
			endGame = true;
		}
	} while (endGame == false);

	system("pause");
	return 0;
}