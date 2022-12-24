#ifndef BOARD_HPP
#define BOARD_HPP
#include <iostream>
#include <windows.h>
#include "Snake.hpp"
#include <conio.h>
#include "Food.hpp"
#include <vector>


Snake snake(1,1);
Food food;
Snake snake1(30,20);

using namespace std;

class Board
{
private:
    int largura=60;
    int comprimento=30;
public:
    Board(){};
    void ShowBordEasy();
    void ShowBordHard();
    void ShowBordMultiplayer();
};

#endif