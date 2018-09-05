#include"main.hpp"
int main(){
	cout<<"0 goes first\n";
	int turns=0,row,col,temp;
	GameBoard tictactoe;
	while(turns<9){
		cout<<"Enter row, column\n";
		cin>>row>>col;
		if(turns%2==0)
		{	
			temp=tictactoe.setGameSpace(row,col,'0');
			while(temp==-1){
				cout<<"Retake turn\n";
				cout<<"Enter row, column\n";
				cin>>row>>col;
				temp=tictactoe.setGameSpace(row,col,'0');
			}
		}
		else if(turns%2==1){
			
			temp=tictactoe.setGameSpace(row,col,'x');
			while(temp==-1){
				cout<<"Retake turn\n";
				cout<<"Enter row, column\n";
				cin>>row>>col;
				temp=tictactoe.setGameSpace(row,col,'x');
			}
		}
		turns++;
		if(tictactoe.threeInRow_X()==1){
			cout<<"x Wins!!\n";
			tictactoe.printGameBoard();
			break;
		}
		else if(tictactoe.threeInRow_0()==1){
			cout<<"0 Wins!!\n";
			tictactoe.printGameBoard();
			break;
		}
		else if(tictactoe.threeInCol_0()==1){
			cout<<"0 Wins!!\n";
			tictactoe.printGameBoard();
			break;
		}
		else if(tictactoe.threeInRow_X()==1){
			cout<<"x Wins!!\n";
			tictactoe.printGameBoard();
			break;
		}
		else if(tictactoe.threeInDiagP_0()==1){
			cout<<"0 Wins!!\n";
			tictactoe.printGameBoard();
			break;
		}
		else if(tictactoe.threeInDiagP_X()==1){
			cout<<"x Wins!!\n";
			tictactoe.printGameBoard();
			break;
		}
		else if(tictactoe.threeInDiagS_0()==1){
			cout<<"0 Wins!!\n";
			tictactoe.printGameBoard();
			break;
		}
		else if(tictactoe.threeInDiagS_X()==1){
			cout<<"x Wins!!\n";
			tictactoe.printGameBoard();
			break;
		}
		tictactoe.printGameBoard();
	}
	getch();
	return 0;
}
