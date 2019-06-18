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
	DoDie();
	
}
DengueVirus::DengueVirus(const DengueVirus * b)
{
	this->m_dna = b->m_dna;
	this->m_resistance = b->m_resistance;
	if (m_protein) {
		delete[]m_protein;
	}
	m_protein = new char[strlen(b->m_protein) + 1];
	for (int i = 0; i < strlen(b->m_protein); i++) {
		m_protein[i] = b->m_protein[i];
	}
	*(m_protein + strlen(b->m_protein)) = '\0';
}

void DengueVirus::DoBorn() {
	LoadADNInformation();
	srand(time(NULL));
	int idProtein = rand() % 3;
	string tmp;

//	m_protein = new char[4];
	switch (idProtein)
	{
	case 0:
		tmp = "NS3";
		break;
	case 1:
		tmp = "NS5";
		break;
	case 2:
		tmp = "E";
		break;
	}
	m_protein = new char[tmp.size() + 1];
	for (int i = 0; i < tmp.size(); i++) {
		*(m_protein + i) = tmp[i];
	}
	*(m_protein + tmp.size()) = '\0';
}

list<Virus*> DengueVirus::DoClone()
{
//	cout << "DoClone denVirus is called" << endl;
	list<Virus*> listDen;
	DengueVirus* F1 = new DengueVirus(this);
	DengueVirus* F2 = new DengueVirus(this);
	listDen.push_front(F1);
	listDen.push_front(F2);
	return listDen;
}

void DengueVirus::DoDie() {
	delete[] m_protein;
	m_protein = NULL;
}

void DengueVirus::InitResistance()
{
	srand(time(NULL));
	if (this->m_protein == "NS3") {
		this->m_resistance = 1+rand() % 10;
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