// QUANLY.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

struct STUDENT
{
	int ID;
	string NAME;
	float SCORE;
};
STUDENT * student = new STUDENT[3];


void input() {
	
	for (int i = 0; i < 3;i++) {
		student[i].ID = i + 1;
		cout << "Enter Name: "<<endl;
		getline(cin, student[i].NAME);
		
		cout << "Enter Score: " << endl;
		cin >> student[i].SCORE;
		cin.ignore();
	}

}

void display() {
	cout << "ID           FULLNAME          SCORE" << endl;
	for (int i = 0; i < 3;i++) {
		cout << student[i].ID << "            " << student[i].NAME << "            " << student[i].SCORE<<endl;
	}

}

int menu() {
	cout << "------------------MENU----------------" << endl;
	cout << "	1. INPUT" << endl;
	cout << "	2. DISPLAY" << endl;
	cout << "	3. SAVE TO FILE" << endl;
	cout << "	4. LOAD FROM FILE" << endl;
	cout << "	0. EXIT" << endl;
	cout << "------------------------------------" << endl;
	cout << "choose: ";
	int choose;
	do {
		cin >> choose;
		cin.ignore();
	} while (choose<0 && choose >= 5);
	switch (choose)
	{
	case 0:
		return 0;
	case 1:
		input();
	case 2:
		display();
	}

}


int main()
{
	while (true) {
		if(!menu()) break;
	}
    return 0;
}

