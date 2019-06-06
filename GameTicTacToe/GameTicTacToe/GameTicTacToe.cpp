// GameTicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#define n 3
using namespace std;



int a[n][n];
int choose();
char *name1 = new char[10];
char *name2 = new char[10];

void wellcome();
void InputUser();
void InputStep(char *name, int i);
void Display( int row, int colum, string tick);


int main()
{
	wellcome();
	choose();
	int sobuocdi = 0;
	char *name = name1;
	do {	
			if (sobuocdi % 2 == 1) name = name2;
			else name = name1;
			InputStep(name, sobuocdi);
			sobuocdi++;
	} while (sobuocdi<5);
	cout << "you are win!";
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
					InputUser();

			default :
					return 0;
		}
	}

void InputUser() {
	cin.ignore();
	cout << "Enter Player 1 Name:  ";
	fgets(name1,10,stdin);
	
	cout <<endl<< "Enter Player 2 Name:  ";
	fgets(name2, 10, stdin);
	cin.ignore();
	cout <<name1<<name2<<"GAME SATART"<<endl<<endl;
	
}

void InputStep(char *name, int i) {
	int i1;
	string tick;
	cout << endl << "Your turn " << name << " - " << i <<": ";
	cin >> i1;
	int row = i1 % 10;
	i1 = i1 / 10;
	int colum = i1;

	if (name == name1) tick = "X";
	else tick = "O";
	Display(row, colum, tick);
}

void Display( int row, int colum, string tick) {
	int len = n;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			if (i == row && j == colum) {
				cout << tick<<"|";
				continue;
			}
			cout << " " << "|";
		}
		cout << endl;
	}

}