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
	int unsigned i = 0, j=0;
	while (i < 48) {
		cout << this->m_dna[i];
		i++;
	}
	cout << endl;
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