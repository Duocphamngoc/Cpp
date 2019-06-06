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
void InputBuocDi(char *name, int i);
void Display( int row, int colum);


int main()
{
	wellcome();
	choose();
	int sobuocdi = 0;
	char *name = name1;
	do {	
			if (sobuocdi % 2 == 1) name = name2;
			else name = name1;
			InputBuocDi(name, sobuocdi);
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

void InputBuocDi(char *name, int i) {
	int i1;
	cout << endl << "Your turn " << name << " - " << i <<": ";
	cin >> i1;
	int temp1 = i1 % 10;
	i1 = i1 / 10;
	int temp2 = i1;
	a[temp1][temp2] = 1;
	Display(1, 1);
}

void Display( int row, int colum) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "0" << "|";
		}
		cout << endl;
	}

}