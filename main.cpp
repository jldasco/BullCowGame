// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

constexpr int Number_Of_Turns = 5;
void PrintIntro() {
	// introduce the game
	cout << "Welcome to Bulls and Cows, a fun word game." << "\n";
	//can also do std::cout << std::endl;
	cout << "Can you guess the " << Number_Of_Turns;
	cout << " letter isogram I'm thinking of? \n";
	cout << endl;
	return;
}

string GetGuessAndPrintBack() {
	//get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	//cin >> Guess;
	//getline will allow you to take in two words. so if you type in "donkey kong" it will input both words
	getline(cin, Guess);

	// repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;

	cout << endl;
	return Guess;
}

void PlayGame() {
	//loop for the number of turns guessing
	for (int i = 1; i <= Number_Of_Turns; i++) {
		GetGuessAndPrintBack();
	}
}

bool AskToPlayAgain() {
	cout << "Do you want to play the game again? (y/n) ";
	string Response = "";
	getline(cin, Response);
	return  (Response[0] == 'y') || (Response[0] == 'Y');
}

//The entry point to the application
int main()
{
	bool bPlayAgain = false;


	do {
		//introduce the game
		PrintIntro();

		//play the game
		PlayGame();

		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
	
	
	

	return 0;//exits the app
}

