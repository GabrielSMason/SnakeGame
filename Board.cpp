#include "Board.hpp"


void Board::ShowBordEasy()
{
int PosFruitX = food.GetFoodPosX();
int PosFruitY = food.GetFoodPosY();
int posX = snake.GetPosX();
int posY = snake.GetPosY();
for (int i = 0; i < comprimento; i++)
{
    {
        cout<<"|";
        for (int j = 0; j < largura; j++)
        {
            if (i == 0 || i == comprimento)
            {
                cout << "-";
            }
            else if(i==posY && j==posX)
            {
                cout<<"O";
            }
            else if(i == PosFruitY && j == PosFruitX)
            {
                cout << '+';
            }
            else cout<<" ";
        }
    cout<<"|"<<endl;
}
}
    cout<<"|------------------------------------------------------------|"<<endl;
}

void Board::ShowBordHard()
{
int PosFruitX = food.GetFoodPosX();
int PosFruitY = food.GetFoodPosY();
int posX = snake.GetPosX();
int posY = snake.GetPosY();
for (int i = 0; i < comprimento-10; i++)
{
    {
        cout<<"|";
        for (int j = 0; j < largura-30; j++)
        {
            if (i == 0 || i == comprimento-10)
            {
                cout << "-";
            }
            else if(i==posY && j==posX)
            {
                cout<<"O";
            }
            else if(i == PosFruitY && j == PosFruitX)
            {
                cout <<'+';
            }
            else cout<<" ";
        }
    cout<<"|"<<endl;
}
}
    cout<<"|------------------------------|"<<endl;
}
void Board::ShowBordMultiplayer()
{   
int PosFruitX = food.GetFoodPosX();
int PosFruitY = food.GetFoodPosY();
int Snake1posX = snake.GetPosX();
int Snake1posY = snake.GetPosY();
int Snake2posX = snake1.GetPosX();
int Snake2posY = snake1.GetPosY();
for (int i = 0; i < comprimento; i++)
{
    {
        cout<<"|";
        for (int j = 0; j < largura; j++)
        {
            if (i == 0 || i == comprimento)
            {
                cout << "-";
            }
            else if(i==Snake1posY && j==Snake1posX)
            {
                cout<<"O";
            }
            else if(i==Snake2posY && j==Snake2posX)
            {
                cout<<"@";
            }
            else if(i == PosFruitY && j == PosFruitX)
            {
                cout << '+';
            }
            else cout<<" ";
        }
    cout<<"|"<<endl;
}
}
    cout<<"|------------------------------------------------------------|"<<endl;
}

