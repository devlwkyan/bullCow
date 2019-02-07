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
//    std::cout << BCGame.GetCurrentTry() << std::endl << std::endl;
    Introduce();
    Guessing();
    // TODO summary of game

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
    BCGame.Reset();
    int MaxTries =  BCGame.GetMaxTries();
    int CurrentTry = BCGame.GetCurrentTry();
    std::cout << "Max numbers of tries: " << MaxTries << std::endl;
    std::string Guess;
    // get a guess from the player
    bool playAgain;
    //TODO change to while-loop after validating guessing
    for (int i = 1 ; i < MaxTries; ++i) {
        std::cout << "Try: " << CurrentTry << ". Enter your guess: ";
        // TODO: check whether the guessing is valid
        std::getline(std::cin, Guess);
        // TODO submit valid guess to the game -> output_Guess
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


