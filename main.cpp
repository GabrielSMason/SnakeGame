#include <iostream>
#include "Board.hpp"
#include "Board.cpp"
#include "Snake.hpp"
#include "Snake.cpp"
#include <windows.h>
#include <conio.h>
#include "Food.hpp"
#include "Food.cpp"
#include <vector>
#include <ctime>
#include "Game.hpp"
#include "Game.cpp"
#include <fstream>
#include <string>

using namespace std;

int main()
{  
  while(true)
  {
  cout<<"1.Jogar no facil"<<endl;
  cout<<"2.Jogar no dificil"<<endl;
  cout<<"3.Jogar Multiplayer"<<endl;
  cout<<"4.Lista de records"<<endl;
  cout<<"5.Sair"<<endl;
  cout<<"Escolhar uma opcao: ";
  char ch;
  cin>>ch; 
  if(ch == '1')
  {
    Game game;
    game.ShowGameEasy();
    break;
  } 
  if(ch == '2')
  {
    Game game1;
    game1.ShowGameHard();
    break;
  }
  if(ch == '3')
  {
    Game game2;
    game2.ShowGameMultiplayer();
    break;
  }
  if(ch == '4')
  {
    fstream Filereader("Record.txt",ios::in);
    if(Filereader.is_open())
    {
      string tmp;
      while(getline(Filereader,tmp))
      {
        cout<<tmp<<endl;
      }
      Filereader.close();
    }
    cout<<"--------------------------------------------------------"<<endl;
    continue;
  }
  if(ch == '5')
  {
    break;
  }
  }
  return 0;
}
