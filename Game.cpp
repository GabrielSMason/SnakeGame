#include "Game.hpp"

void Game::ShowGameEasy()
{
    srand(time(NULL));
    string tmp;
    cout<<"Insira seu nome: ";
    cin>>tmp;
    int score = 0;  
    bool GameOver = false;  
    food.InitialazingFoodEasy();
    while(!GameOver)
    {
    Board b1;
    b1.ShowBordEasy();
    snake.MoveSnake();
    snake.ChangeDir();
    if(snake.CollidedEasy())
    {
        ofstream FileWritter("Record.txt", ios::app);
        if(FileWritter.is_open())
        {
            FileWritter<<"O jogador "<<tmp<<" fez essa pontuacao no modo facil: "<<score<<endl;
        }
        else
        {
            cout<<"Error, lista de recordes nao pode ser aberto"<<endl;
        }
        FileWritter.close();
        GameOver = true;
    }
    if(snake.Eaten(food.GetFoodPosX(),food.GetFoodPosY()))
    {
        food.InitialazingFoodEasy();
        food.InitialazingFoodEasy();
        score += 5;
        cout<<"Score: "<<score<<endl;
    }
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0}); 
    } 
}
void Game::ShowGameHard()
{
    srand(time(NULL));
    string tmp;
    cout<<"Insira seu nome: ";
    cin>>tmp;
    int score = 0;  
    bool GameOver = false;  
    food.InitialazingFoodHard();
    while(!GameOver)
    {
    Board b2;
    b2.ShowBordHard();
    snake.MoveSnake();
    snake.ChangeDir();
    if(snake.CollidedHard())
    {
        ofstream FileWritter("Record.txt", ios::app);
        if(FileWritter.is_open())
        {
            FileWritter<<"O jogador "<<tmp<<" fez essa pontuacao no modo dificil: "<<score<<endl;
        }
        else
        {
            cout<<"Error, lista de recordes nao pode ser aberto"<<endl;
        }
        FileWritter.close();
        GameOver = true;
    }
    if(snake.Eaten(food.GetFoodPosX(),food.GetFoodPosY()))
    {
        food.InitialazingFoodHard();
        food.InitialazingFoodHard();
        score += 5;
        cout<<"Score: "<<score<<endl;
    }
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0}); 
    } 
}

void Game::ShowGameMultiplayer()
{
    srand(time(NULL));
    int score = 0;  
    int score1 = 0;
    bool GameOver = false;  
    food.InitialazingFoodEasy();
    while(!GameOver)
    {
    Board b3;
    b3.ShowBordMultiplayer();
    snake.MoveSnake();
    snake.ChangeDir();   
    snake1.MoveSnake();
    snake1.ChangeDir1(); 
    if(snake.CollidedEasy())
    {
        GameOver = true;
    }
    if(snake1.CollidedEasy())
    {
        GameOver = true;
    }
    if(snake.Eaten(food.GetFoodPosX(),food.GetFoodPosY()))
    {
        food.InitialazingFoodEasy();
        food.InitialazingFoodEasy();
        score += 5;
        cout<<"Score: "<<score<<endl;
    }
    if(snake1.Eaten(food.GetFoodPosX(),food.GetFoodPosY()))
    {
        food.InitialazingFoodEasy();
        food.InitialazingFoodEasy();
        score1 += 5;
        cout<<"                                                    Score: "<<score1<<endl;
    }
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0}); 
    } 
}