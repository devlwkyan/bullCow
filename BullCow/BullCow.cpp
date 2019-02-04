#include "pch.h"
#include <iostream>
#include <string>

void Introduce();
std::string Guessing();
std::string output_Guess( std::string x );
bool askToPlayAgain();

int main()
{
	Introduce();
	bool bPlayAgain = false;
	do {
		Guessing();
		bPlayAgain = askToPlayAgain();
	} while (bPlayAgain);
}


void Introduce() {
	constexpr int WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n"
		<< "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of? \n";
	return;
}


std::string Guessing() {
	std::string Guess = "";
	// get a guess from the player
	std::cout << "Entre your guess: ";
	std::getline( std::cin, Guess );
	output_Guess( Guess );
	
	return Guess;
}


std::string output_Guess( std::string x ) {
	std::cout << "Your guess was: " << x << std::endl;
	return x;
}


bool askToPlayAgain() {
	std::string response = "";
	std::cout << "Do you want to play again? [y]/[n]: ";
	std::getline(std::cin, response);
	if (response[0] == 'y' || response[0] == 'Y') {
		Guessing();
		return true;
	}
	else {
		return false;
	}
}


