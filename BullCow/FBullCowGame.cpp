//
// Created by devlwkyan on 04/02/19.
//

#include "FBullCowGame.h"

int FBullCowGame::GetMaxTries() const { return MaxTry; }
int FBullCowGame::GetCurrentTry() const { return CurrentTry; }
bool FBullCowGame::IsGameWon() const { }

void FBullCowGame::Reset() {
}

bool FBullCowGame::CheckGuessValidity(std::string) {
    return false;
}
