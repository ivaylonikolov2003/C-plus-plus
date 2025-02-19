#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
	char player, computer;

	player = getUserChoice();
	cout << "Your choice: ";
	showChoice(player);

	computer = getComputerChoice();
	cout << "Computer's choice: ";
	showChoice(computer);

	chooseWinner(player, computer);

	return 0;
}

char getUserChoice() {
	char player;
	cout << "Rock-Paper-Scissors-Game" << endl;
	do
	{
		cout << "Choose one of the following" << endl;
		cout << "************************" << endl;
		cout << "r for Rock" << endl;
		cout << "p for Paper" << endl;
		cout << "s for Scissors" << endl;
		cin >> player;

	} while (player != 'r' && player != 'p' && player != 's');
	

	return player;

}
char getComputerChoice() {

	srand(time(0));
	int num = rand() % 3 + 1;

	switch (num)
	{
	case 1: return 'r';
	case 2: return 'p';
	case 3: return 's';
	default:
		break;
	}

	return 0;
}
void showChoice(char choice) {

	switch (choice)
	{
	case 'r': cout << "Rock\n";
				break;
	case 'p': cout << "Paper\n";
				break;
	case 's': cout << "Scissors\n";
				break;
	default:
		break;
	}

}
void chooseWinner(char player, char computer) {

	switch (player)
	{
	case 'r':
		if (computer == 'r') {
			cout << "TIE!\n";
		}
		else if (computer == 'p') {
			cout << "LOSE!\n";
		}
		else
		{
			cout << "WIN!\n";
		}
		break;
	case 'p':
		if (computer == 'r') {
			cout << "WIN!\n";
		}
		else if (computer == 'p') {
			cout << "TIE!\n";
		}
		else
		{
			cout << "LOSE!\n";
		}
		break;
	case 's':
		if (computer == 'r') {
			cout << "LOSE!\n";
		}
		else if (computer == 'p') {
			cout << "WIN!\n";
		}
		else
		{
			cout << "TIE!\n";
		}
		break;
		
	default:
		break;
	}
}