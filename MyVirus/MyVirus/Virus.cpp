
#include "stdafx.h"
#include "iostream"
#include "string"
#include "Virus.h"
#include <fstream>

using namespace std;


Virus::Virus() {

}

Virus::~Virus() {

}
Virus::Virus(const Virus*) {
	this->m_dna = m_dna;
	this->m_resistance = m_resistance;

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
	string data = "";
	while (!f.eof())
	{
		getline(f, data);
	}
	m_dna = new char[data.length()];
	int unsigned i = 0;
	while (i <= data.length()) {
		m_dna[i] = data[i];
		i++;
	}
	f.close();
}

void Virus::ReduceResistance(int medicine_resistance) {
	m_resistance -= medicine_resistance;
}







