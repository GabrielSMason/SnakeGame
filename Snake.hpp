#ifndef SNAKE_HPP
#define SNAKE_HPP
#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Food.hpp"
#include "Board.hpp"
#include <vector>

using namespace std;

class Snake 
{
protected:
    int m_PosX,m_PosY; 
    enum Directon {Stop=0 ,Left, Right, Up, Down};
    Directon m_dir;
public:
    Snake(){};
    Snake(int PosX,int PosY);
    void ChangeDir();
    void ChangeDir1();
    void MoveSnake();
    int GetPosX();
    int GetPosY();
    bool CollidedEasy();
    bool CollidedHard();
    bool Eaten(int FoodPosX,int FoodPosY);
};





#endif