#include "stdafx.h"
#include "DengueVirus.h"
#include "iostream"
#include "string"
#include <cstdlib>
#include <ctime>
#include <list>

using namespace std;

DengueVirus::DengueVirus() {
//	cout << "contructor DengueVirus is called!"<<endl;
	this->DoBorn();
	this->InitResistance();
}

DengueVirus::~DengueVirus() {
	cout<<"Destructor DenVirus is called"<<endl;
}
DengueVirus::DengueVirus(const DengueVirus *)
{
	//cout << "Copy Contructor DenVirus is called!" << endl;
}

void DengueVirus::DoBorn() {
	LoadADNInformation();
	srand(time(NULL));
	int idProtein = rand() % 3;
	char* strProtein_1 = "NS3";
	char* strProtein_2 = "NS5";
	char* strProtein_3 = "E";
	m_protein = new char[4];
	switch (idProtein)
	{
	case 0:
		m_protein = strProtein_1;
		break;
	case 1:
		m_protein = strProtein_2;
		break;
	case 2:
		m_protein = strProtein_3;
		break;
	}
}

list<Virus*> DengueVirus::DoClone()
{
//	cout << "DoClone denVirus is called" << endl;
	list<Virus*> listDen;
	DengueVirus* F1 = new DengueVirus(this);
	listDen.push_front(F1);
	listDen.push_front(F1);
	return listDen;
}

void DengueVirus::DoDie() {
	if (this->m_dna =nullptr) return;
	else	delete this;
}

void DengueVirus::InitResistance()
{
	srand(time(NULL));
	if (this->m_protein == "NS3") {
		this->m_resistance = 0+rand() % 10;
		cout << "Denguevirus NS3 is called with " << this->m_resistance << " blood" << endl;
	}
	else if (this->m_protein == "NS5") {
		this->m_resistance = 11 + rand() % 10;
		cout << "DengueVirus NS5 is called with "<<this->m_resistance<<" blood" << endl;
	}
	else {
		
		this->m_resistance = 21 + rand() % 10;
		cout << "DengueVirus E is called with " <<this->m_resistance<<" blood"<< endl;
	}

}

//view infor
void DengueVirus::Get_Properties() {
	Virus::Get_Properties();
	cout << endl;
	int j = 0;
	while (j < 3) {
		cout << this->m_protein[j];
		j++;
	}
	cout << endl;

}