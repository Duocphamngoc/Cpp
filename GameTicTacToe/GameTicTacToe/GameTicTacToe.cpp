// GameTicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


char *name1 = new char[10];
char *name2 = new char[10];
void wellcome();
int choose();
void InputUser();




int main()
{
	wellcome();
	choose();
	int a[3][3];
	



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

void InputUser() {
	cin.ignore();
	cout << "Enter Player 1 Name:  ";
	fgets(name1,10,stdin);

	cout <<endl<< "Enter Player 2 Name:  ";
	fgets(name2, 10, stdin);

	cout <<name1<<name2<<"GAME SATART"<<endl<<endl;
	
}