//
// Created by devlwkyan on 04/02/19.
//

#ifndef BULLCOW_FBULLCOWGAME_H
#define BULLCOW_FBULLCOWGAME_H
#pragma once


#include <string>

class FBullCowGame {
public:

    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset();
    bool CheckGuessValidity(std::string);

private:
    int CurrentTry = 1;
    int MaxTry = 5;
};


#endif //BULLCOW_FBULLCOWGAME_H
