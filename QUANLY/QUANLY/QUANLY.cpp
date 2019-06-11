// QUANLY.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <fstream>
using namespace std;


void Input();
void Display();
void SaveToFile();
void LoadFromFile();
int Menu();

struct Student
{
	int id;
	string name;
	float score;
};
Student * student = new Student[3];
fstream f;

int main()
{	
	while (true) {
		if(!Menu()) break;
	}	
	system("pause");
    return 0;
}

void Input() {
	bool check = false;
	
	for (int i = 0; i < 3; i++)
	{
		int x;
		do {
			cout << "Enter ID Student: " << endl;
			cin >> x;
			cin.ignore();
			for (int j = 0; j < i; j++)
			{	
				if (x == student[j].id)
				{
					check = true;
					break;
				}
				else {
					check = false;
				}
			}
		} while (check);
		student[i].id = x;
		cout << "Enter Name: " << endl;
		getline(cin, student[i].name);
		do {
			cout << "Enter Score: " << endl;
			cin >> student[i].score;
			cin.ignore();
		} while (-0.9 > student[i].score || student[i].score>10);
	}

}

void Display() {
	cout << "ID           FULLNAME          SCORE" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << student[i].id << "            " << student[i].name << "            " << student[i].score << endl;
	}

}

void SaveToFile() {
	f.open("output.txt", ios::out);
	for (int i = 0; i < 3; i++) {
		f << student[i].id << " ";
		f << student[i].name << " ";
		f << student[i].score << endl;
	}
	f.close();
}

void LoadFromFile() {
	f.open("input.txt", ios::in);
	string line;
	string str;
	int index;
	int i = 0;
	while (!f.eof())
	{
		getline(f, line);
		while (true) {
	
			index = line.find(",");
			if (index == -1)
			{
				str = line;
				student[i].score = stoi(line);
				break;
			}
			str = line.substr(0, index);
			if (str.length() < 4)
			{
				student[i].id = stoi(str);
			}
			else
			{
				student[i].name = str;
			}
			line.replace(0,index+1,"");
			
		}
		
		i++;
	}
	
		f.close();
	
}

int Menu() {
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
		Input();
	case 2:
		Display();
	case 3:
		SaveToFile();
	case 4:
		LoadFromFile();
	}

}