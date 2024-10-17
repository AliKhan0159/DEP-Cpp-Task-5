#include <iostream>
#include <string>

using namespace std;

// Function prototypes
void intro();
void forest();
void cave();
void village();
void gameOver();
void victory();

int main() {
	// Start the game
	intro();
	return 0;
}

// Game Introduction
void intro() {
	int choice;
	cout << "Welcome to the Adventure Game!\n";
	cout << "You are standing at the edge of a mysterious forest.\n";
	cout << "Where would you like to go?\n";
	cout << "1. Enter the forest\n";
	cout << "2. Explore the cave\n";
	cout << "3. Visit the nearby village\n";
	cout << "Enter 1, 2, or 3: ";

	cin >> choice;

	// Validate input and redirect based on choice
	while (cin.fail() || choice < 1 || choice > 3) {
		cin.clear();  // Clear error flags
		cin.ignore(1000, '\n');  // Discard bad input
		cout << "Please enter a valid option (1, 2, or 3): ";
		cin >> choice;
	}

	// Route to different game paths
	switch (choice) {
	case 1:
		forest();
		break;
	case 2:
		cave();
		break;
	case 3:
		village();
		break;
	}
}

// Forest Path
void forest() {
	cout << "\nYou enter the dark, dense forest.\n";
	cout << "You hear rustling behind you. Do you:\n";
	cout << "1. Investigate the sound\n";
	cout << "2. Run back to the village\n";

	int choice;
	cin >> choice;

	if (choice == 1) {
		cout << "A wild beast appears, but you manage to scare it away!\n";
		victory();
	}
	else {
		cout << "You flee, but trip and are caught by the beast...\n";
		gameOver();
	}
}

// Cave Path
void cave() {
	cout << "\nYou approach a large cave, the entrance covered in strange symbols.\n";
	cout << "Do you:\n";
	cout << "1. Enter the cave\n";
	cout << "2. Leave\n";

	int choice;
	cin >> choice;

	if (choice == 1) {
		cout << "You find ancient treasures inside the cave!\n";
		victory();
	}
	else {
		cout << "You leave, missing out on a great adventure.\n";
		gameOver();
	}
}

// Village Path
void village() {
	cout << "\nYou walk into a quiet village, where the locals greet you warmly.\n";
	cout << "Do you:\n";
	cout << "1. Stay and explore\n";
	cout << "2. Leave the village\n";

	int choice;
	cin >> choice;

	if (choice == 1) {
		cout << "You discover the villagers' secrets and help them solve a mystery.\n";
		victory();
	}
	else {
		cout << "You leave the village, wondering what could have been.\n";
		gameOver();
	}
}

// Game Over Function
void gameOver() {
	char playAgain;
	cout << "\nGame Over! Do you want to play again? (y/n): ";
	cin >> playAgain;

	if (playAgain == 'y' || playAgain == 'Y') {
		intro();  // Restart the game
	}
	else {
		cout << "Thanks for playing!\n";
		exit(0);
	}
}

// Victory Function
void victory() {
	char playAgain;
	cout << "\nCongratulations! You've completed the adventure.\n";
	cout << "Do you want to play again? (y/n): ";
	cin >> playAgain;

	if (playAgain == 'y' || playAgain == 'Y') {
		intro();  // Restart the game
	}
	else {
		cout << "Thanks for playing!\n";
		exit(0);
	}
}