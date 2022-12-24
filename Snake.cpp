#include "Snake.hpp"

Snake::Snake(int PosX,int PosY)
{
    m_PosX=PosX;
    m_PosY=PosY;
    m_dir=Stop;
}   
void Snake::ChangeDir()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            m_dir = Left;
            break;
        case 'd':
            m_dir = Right;
            break;
        case 'w':
            m_dir = Up;
            break;
        case 's':
            m_dir = Down;
            break;
        }
    }
}
void Snake::MoveSnake()
{
    switch(m_dir)
    {
    case Left:
        m_PosX--;
        break;
    case Right:
        m_PosX++;
        break;
    case Up:
        m_PosY--;
        break;
    case Down:
        m_PosY++;
        break;   
    }
}
void Snake::ChangeDir1()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'j':
            m_dir = Left;
            break;
        case 'l':
            m_dir = Right;
            break;
        case 'i':
            m_dir = Up;
            break;
        case 'k':
            m_dir = Down;
            break;
        }
    }
}

int Snake::GetPosX(){return m_PosX;}
int Snake::GetPosY(){return m_PosY;}

bool Snake::CollidedEasy()
{
    if(m_PosX < 0 ||  m_PosX > 60 || m_PosY < 0 || m_PosY > 30) return true;

    return false;
}
bool Snake::CollidedHard()
{
    if(m_PosX < 0 ||  m_PosX > 30    || m_PosY < 0 || m_PosY > 20) return true;

    return false;
}
bool Snake::Eaten(int FoodPosX,int FoodPosY)
{
    if(m_PosX == FoodPosX && m_PosY == FoodPosY) return true;
    return false;
}
