//
// Created by devlwkyan on 04/02/19.
//

#include <iostream>
#include "FBullCowGame.h"

FBullCowGame::FBullCowGame() { Reset(); }

int FBullCowGame::GetCurrentTry() const { return CurrentTry; }
bool FBullCowGame::IsGameWon() const { return false;  }

void FBullCowGame::Reset() {
    constexpr int MAX_TRIES = 8;
    MaxTry = MAX_TRIES;
    CurrentTry = 1;
}

bool FBullCowGame::CheckGuessValidity(std::string) {
    return false;
}

int FBullCowGame::GetMaxTries() const { return  MaxTry; }
