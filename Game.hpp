#ifndef GAME_HPP
#define GAME_HPP
#include <iostream>
#include "Food.hpp"
#include "Board.hpp"
#include "Snake.hpp"
#include <windows.h>
#include <fstream>
#include <vector>
#include <conio.h>
#include <ctime>

using namespace std;

class Game 
{
private:
    
public:
    Game(){};
    void ShowGameEasy();
    void ShowGameHard();
    void ShowGameMultiplayer();
};


#endif