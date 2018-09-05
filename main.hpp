#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class GameBoard{
  char gameSpace[3][3];
public:
  GameBoard();
  int setGameSpace(int, int, char);
  int threeInRow_X();
  int threeInRow_0();
  int threeInCol_X();
  int threeInCol_0();
  int threeInDiagP_X();
  int threeInDiagP_0();
  int threeInDiagS_0();
  int threeInDiagS_X();
  void printGameBoard();
};
GameBoard::GameBoard(){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      gameSpace[i][j]=' ';
    }
  }
}
int GameBoard::setGameSpace(int row, int col, char val){
  if((gameSpace[row][col]==' ')&&row<3&&col<3){
    gameSpace[row][col]=val;
    return 0;
  }
  else{
    cout<<"Invalid!!\n";
    return -1;
  }
}
int GameBoard::threeInRow_X(){
   int count=0;
   for(int i=0;i<3;i++){
   	count=0;
    for(int j=0;j<3;j++){
      if(gameSpace[i][j]=='x') count++;
    }
    if(count==3) return 1;
   }
   return 0;
}
int GameBoard::threeInRow_0(){
   int count=0;
   for(int i=0;i<3;i++){
    count=0;
	for(int j=0;j<3;j++){
      if(gameSpace[i][j]=='0') count++;
    }
    if(count==3) return 1;
   }
   return 0;
}
int GameBoard::threeInCol_X(){
   int count=0;
   for(int i=0;i<3;i++){
    count=0;
	for(int j=0;j<3;j++){
      if(gameSpace[j][i]=='x') count++;
    }
    if(count==3) return 1;
   }
   return 0;
}
int GameBoard::threeInCol_0(){
   int count=0;
   for(int i=0;i<3;i++){
    count=0;
	for(int j=0;j<3;j++){
      if(gameSpace[j][i]=='0') count++;
    }
    if(count==3) return 1;
   }
   return 0;
}
int GameBoard::threeInDiagP_0(){
  int count=0;
  for(int i=0;i<3;i++)
    if(gameSpace[i][i]=='0') count++;
  if(count==3) return 1;
  else return 0;
}
int GameBoard::threeInDiagP_X(){
  int count=0;
  for(int i=0;i<3;i++)
    if(gameSpace[i][i]=='x') count++;
  if(count==3) return 1;
  else return 0;
}
int GameBoard::threeInDiagS_0(){
  int count=0;
  for(int i=2;i>=0;i--)
    if(gameSpace[2-i][i]=='0') count++;
  if(count==3) return 1;
  else return 0;
}
int GameBoard::threeInDiagS_X(){
  int count=0;
  for(int i=2;i>=0;i--)
    if(gameSpace[2-i][i]=='x') count++;
  if(count==3) return 1;
  else return 0;
}
void GameBoard::printGameBoard(){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<gameSpace[i][j]<<"|";
    }
    cout<<"\n_ _ _\n";
  }
}
