#ifndef GAME_H
#define GAME_H

#include "Animation.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <chrono>
#include <string>
#include <ctime>
#include <map>

class Game
{
private:
    std::string word, hidden_word;
    bool flag, game_status;
    char game_end_flag;
    int count_tries;
    std::vector<char> alphabet;
    std::vector<bool> grey_symb;

public:
    Game();
    void loadWord();

    void drawHangMan();
    void alphabetShow(int choose);
    void alphabetChange(char symbol);

    void refreshGame();
    void drawHiddenWord(std::vector<int> position = {99999}, char letter = ' ');

    void startGame();
    void gameStatistic(int game_time);
};

#endif // GAME_H