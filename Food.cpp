#include "Food.hpp"

int Food::GetFoodPosX()
{
    return FoodPos_X;
}
int Food::GetFoodPosY()
{
    return FoodPos_Y;
}
void Food::InitialazingFoodEasy()
{
    FoodPos_X = rand() % 59+1;
    FoodPos_Y = rand() % 29+1;
}
void Food::InitialazingFoodHard()
{
    FoodPos_X = rand() % 29+1;
    FoodPos_Y = rand() % 19+1;
}
