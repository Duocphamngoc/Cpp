
#include "stdafx.h"
#include "iostream"
#include "string"
#include "Virus.h"
#include <fstream>

using namespace std;


Virus::Virus() {

}

Virus::~Virus() {
	cout << "Destructor of Virus is called"<<endl;
	m_dna = "";
}
Virus::Virus(const Virus* a) {
	this->m_dna = a->m_dna;
	this->m_resistance = a->m_resistance;

}


void Virus::Get_Properties() {
	int unsigned i = 0;
	while (i < 48) {
//		cout << m_dna[i];
		i++;
	}
	cout << endl << m_resistance<<endl;
}

int Virus::Get_m_resistance()
{
	return m_resistance;
}

void Virus::LoadADNInformation() {
//	cout << "LoadADN is called" << endl;
	fstream f;
	f.open("ATGX.bin", ios::in);
	string data;
	while (!f.eof())
	{
		getline(f, data);
	}
	this->m_dna = data;
	f.close();
}

void Virus::ReduceResistance(int medicine_resistance) {
	m_resistance -= medicine_resistance;
}







