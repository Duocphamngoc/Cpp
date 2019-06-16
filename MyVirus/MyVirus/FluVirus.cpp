#include "stdafx.h"
#include "FluVirus.h"
#include "iostream"
#include "string"
#include <cstdlib>
#include <ctime>
#include <windows.h>
#define  blue 0x0000ff 
#define red 0xff0000

using namespace std;
FluVirus::FluVirus() {
	//cout<<"Contructor FluVirus is called!"<<endl;
	this->DoBorn();
	this->InitResistance();
}

FluVirus::~FluVirus() {
	cout << "Destructor Flu is called" << endl;
	//DoDie();
}

FluVirus::FluVirus(FluVirus* fluvirus) {

	//cout << "copy contructor fluVirus is called!"<<endl;
}


void FluVirus::DoBorn() {
	//cout << "DoBorn FluVirus is called"<<endl;
	Virus::LoadADNInformation();
	srand(time(NULL));
	int color = rand() % 2;
	if (color) {
	//	cout << "red is called" << endl;
		this->m_color = red;
	}
	else {
	//	cout << "blue is called" << endl;
		this->m_color = blue;
	}
}

list<Virus*> FluVirus::DoClone()
{

	//cout << "DoClone Flu is called" << endl;
	list<Virus*> listFlu;
	FluVirus* F1 = new FluVirus(this);
	listFlu.push_front(F1);
	return listFlu;
}

void FluVirus::DoDie() {
	if (this == nullptr) {
		cout << "nothing to delete" << endl;
	}
	else {
		delete this;
	}
}

void FluVirus::InitResistance() {
	if (this->m_color == 255) {
		srand(time(NULL));
		this->m_resistance = 10 + rand() % 5;
		cout << "FluVirus Red is called with "<<this->m_resistance<<" blood " <<endl;
	}
	else {
		srand(time(NULL));
		this->m_resistance = 10 + rand() % 10;
		cout << "FluVirus Blue is called with "<<this->m_resistance<<" blood" << endl;
	}

}
//view infor virus 
void FluVirus::Get_Properties()
{
	if (this == nullptr) {
		cout << "nothing" << endl;
	}
	else {
		Virus::Get_Properties();
		cout << endl << this->m_color << endl;

	}
}
