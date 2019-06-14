#include "stdafx.h"
#include "DengueVirus.h"
#include "iostream"
#include "string"
#include <cstdlib>
#include <ctime>

using namespace std;

DengueVirus::DengueVirus() {
	DoBorn();
}

DengueVirus::~DengueVirus() {
	
}
void DengueVirus::Get_Properties() {
	MyVirus::Get_Properties();
	cout << endl;
	int j = 0;
	while (j < 3) {
		cout << this->m_protein[j];
		j++;
	}
	cout << endl;
	
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

DengueVirus * DengueVirus::DoClone()
{
	DengueVirus* F1 = new DengueVirus[2];
	for (int i = 0; i < 2;i++) {
		(F1+i)->m_protein = this->m_protein;
		(F1 + i)->m_dna = this->m_dna;
		(F1 + i)->m_resistance = this->m_resistance;
	}
	return F1;
}

