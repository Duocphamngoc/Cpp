// QUANLY.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <fstream>
#define MaxNumberOfStudent 100

using namespace std;


void Input(int&, int);
void Display(int);
void SaveToFile(int);
void LoadFromFile();
int Menu();
struct Student
{
	int id;
	string name;
	float score;
};
Student * student = new Student[MaxNumberOfStudent];
fstream f;
int numtail = 0; // init amount student;


int main()
{	
	while (true) {
		if(!Menu()) break;
	}
	system("pause");
	delete[] student;
    return 0;
}

void Input(int & n, int m) {
	bool check = false;
	for (int i = n; i < n+m; i++)
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
	n += m;
}

void Display(int n) {
	cout << "ID           FULLNAME          SCORE" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << student[i].id << "            " << student[i].name << "            " << student[i].score << endl;
	}

}

void SaveToFile(int n) {
	f.open("output.txt", ios::out);
	for (int i = 0; i < n; i++) {
		f << student[i].id << ",";
		f << student[i].name << ",";
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
		numtail = i;
		f.close();
	
}

int Menu() 
{
	cout << "------------------MENU----------------" << endl;
	cout << "	1. INPUT" << endl;
	cout << "	2. DISPLAY" << endl;
	cout << "	3. SAVE TO FILE" << endl;
	cout << "	4. LOAD FROM FILE" << endl;
	cout << "	0. EXIT" << endl;
	cout << "------------------------------------" << endl;
	cout << "choose: ";
	int choose;
	int n;
	do 
	{
		cin >> choose;
		cin.ignore();
	} while (choose<0 && choose >= 5);

	switch (choose)
	{
	case 0:
		return 0;
	case 1:
		cout << "Enter the number of student can manager: ";
		cin >> n;
		Input(numtail,n);
		break;
	case 2:
		Display(numtail);
		break;
	case 3:
		SaveToFile(numtail);
		break;
	case 4:
		LoadFromFile();
		break;
	}
}