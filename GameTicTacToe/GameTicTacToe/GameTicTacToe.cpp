// GameTicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


void wellcome();
int choose();


int main()
{
	wellcome();
	choose();

	getchar();
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
	switch (mode) {
	case 1:
	{
		cout << "ok";
		getchar();
	}

	case 2:
	{
		return 0;
	}

	}
}

