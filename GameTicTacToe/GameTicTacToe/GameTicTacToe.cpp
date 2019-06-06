

#include "stdafx.h"
#include "iostream"
#include "string"
#define n 3
using namespace std;



string a[n][n];
char *name1 = new char[10];
char *name2 = new char[10];

int choose();
void wellcome();
void InputUser();
void InputStep(char *name, int i);
void Display();
bool  CheckWin();
bool CheckROW();
bool CheckColum();


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
			if (sobuocdi > 3) {
				if (CheckWin()) {
					cout << name << ": WIN" << endl;
					system("pause");
					return 1;
				}
			}
			sobuocdi++;
	} while (true);
	
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
	//cin.ignore();
	cout <<endl<< "Enter Player 2 Name:  ";
	fgets(name2, 10, stdin);
	//cin.ignore();
	cout <<name1<<name2<<"GAME SATART"<<endl<<endl;
	
}

void InputStep(char *name, int i) {
	int i1;
	int max = n, row=-1, colum=-1;
	
	do {
		cout << endl << "Your turn " << name << " - " << i << ": ";
		cin >> i1;	
		colum = i1 % 10;
		i1 = i1 / 10;
		row = i1;
	} while (colum >= max || row >= max || a[row][colum] =="X" || a[row][colum] == "O");

	if (name == name1) a[row][colum] = "X";
	else a[row][colum] = "O";
	Display();
}

void Display() {
	int len = n;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			cout << a[i][j] << "   |";
		}
		cout << endl;
	}

}

bool CheckWin() {
	if(CheckROW()) return true;
	if(CheckColum()) return true;
	return false;
}

bool CheckROW() {
	int len = n, count = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 1; j < len; j++) {
			if (a[i][0] == "") break;
			if (a[i][j] == "") break;
			if (a[i][j] == a[i][j - 1]) count++;
		}
		if (count == 2) {
			cout << "ok row  " << i << endl;
			return true;
		}
	}
	return false;
}
bool CheckColum() {
	int len = n, count = 0;
	for (int j = 0; j < len; j++) {
		for (int i = 1; i < len; i++) {
			if (a[0][j] == "") break;
			if (a[i][j] == "") break;
			if (a[i][j] == a[i-1][j]) count++;
		}
		if (count == 2) {
			cout << "ok  colum " << j << endl;
			return true;
		}
	}
	return false;
}