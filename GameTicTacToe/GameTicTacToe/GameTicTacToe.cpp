// GameTicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

string name1, name2;
void wellcome();
int choose();
int InputUser();


int main()
{
	wellcome();
	choose();

	system("pause");
	return 0;
}

void wellcome() {
	cout << "Wellcome to Tic-tac-toe game! Play with your way"<<endl;
	cout << "If you find any problem, please contact john.nguyen@gameloft.com" << endl;
	
}

int choose() {
	cout << "SELECT YOUR MODE (1 - PLAY GAME, OTHERS - EXIT GAME):" << endl;
	int mode;
	cin >> mode;
	switch (mode) 
		{
			case 1:
				{
					InputUser();
					getchar();
				}

			case 2:
				{
					return 0;
				}

		}
	}

int InputUser() {

	cout << "Enter Player 1 Name:  ";
	cin >> name1;

	cout <<endl<< "Enter Player 2 Name:  ";
	
	cin >> name2;

	cout << name1 << name2<<endl;
	return 0;
}