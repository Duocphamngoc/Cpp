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
	while (j < 1) {
		cout << this->m_protein[j];
		j++;
	}
}
void DengueVirus::DoBorn() {
	LoadADNInformation();
	srand(time(NULL));
	int idProtein = rand() % 3;
	string strProtein_1 = "NS3";
	string strProtein_2 = "NS5";
	string strProtein_3 = "E";
	m_protein = new char[4];
	switch (idProtein)
	{
	case 0:
		for (int i = 0; i < strProtein_1.length(); i++)
		{
			m_protein[i] = strProtein_1[i];
			
		}
	case 1:

		for (int i = 0; i <  strProtein_2.length(); i++)
		{
			this->m_protein[i] = strProtein_2[i];
			
		}
	case 2:

		for (int i = 0; i <  1; i++)
		{
			this->m_protein[i] = strProtein_3[i];
			
		}
	}
	

}