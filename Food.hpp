#ifndef F0621BC7_52DD_47C7_ADE5_7B5675B9D1F2
#define F0621BC7_52DD_47C7_ADE5_7B5675B9D1F2
#include "Board.hpp"
#include "Snake.hpp"
#include <conio.h>
#include <cstdlib>

class Food
{
private:
    int FoodPos_Y,FoodPos_X;
public:
    Food(){};   
    int GetFoodPosX();
    int GetFoodPosY();
    void InitialazingFoodEasy();
    void InitialazingFoodHard();
};


#endif /* F0621BC7_52DD_47C7_ADE5_7B5675B9D1F2 */
