//
// Created by devlwkyan on 04/02/19.
//

#ifndef BULLCOW_FBULLCOWGAME_H
#define BULLCOW_FBULLCOWGAME_H
#pragma once


#include <string>

class FBullCowGame {
public:
    FBullCowGame();
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset();
    bool CheckGuessValidity(std::string);

    // > Provide method for counting bulls and cows and increasing turn n;

private:
    // Check Constructor
    int CurrentTry;
    int MaxTry;
    bool end;
};


#endif //BULLCOW_FBULLCOWGAME_H
