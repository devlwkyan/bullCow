#include "pch.h"
#include <iostream>
#include <string>
#include "FBullCowGame.h"

void Introduce();
std::string Guessing();
std::string output_Guess(std::string x);
bool askToPlayAgain();

FBullCowGame BCGame;

int main() {
    Introduce();
    Guessing();
}

void Introduce() {
    constexpr int WORD_LENGTH = 9;
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n"
              << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of? \n";
}

std::string output_Guess(std::string x) {
    std::cout << "Your guess was: " << x << std::endl;
    return x;
}

std::string Guessing() {
    int MaxTries =  BCGame.GetMaxTries();
    int CurrentTry = BCGame.GetCurrentTry();
    std::cout << "Max numbers of tries: " << MaxTries << std::endl;
    std::string Guess;
    // get a guess from the player
    bool playAgain;
    for (int i = 1 ; i < MaxTries; ++i) {
        std::cout << "Try: " << CurrentTry << ". Enter your guess: ";
        std::getline(std::cin, Guess);
        output_Guess(Guess);
        playAgain = askToPlayAgain();
        if (!playAgain)
            break;
    }
    return Guess;
}

bool askToPlayAgain() {
    std::string response;
    std::cout << "Do you want to play again? [y]/[n]: ";
    std::getline(std::cin, response);
    if (response[0] == 'y' || response[0] == 'Y')
        Guessing();
    return false;
}


