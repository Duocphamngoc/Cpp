
#include "stdafx.h"
#include "iostream"
#include "string"
#include "MyVirus.h"
#include <fstream>

using namespace std;


MyVirus::MyVirus() {
	
}

MyVirus::~MyVirus() {

}

void MyVirus::Get_Properties() {
	int unsigned i = 0;
	while (i < 50) {
		cout << m_dna[i];
		i++;
	}
}

void MyVirus::LoadADNInformation() {
	fstream f;
	f.open("ATGX.bin",ios::in);
	string data= "";
	while (!f.eof())
	{
		getline(f, data);
	} 
	m_dna = new char[100];
	int unsigned i = 0;
	while (i < data.length() ) {
		m_dna[i] = data[i];
		i++;
	}
	f.close();
}

void MyVirus::ReduceResistance(int medicine_resistance) {
	m_resistance -= medicine_resistance;
	if (m_resistance <= 0) delete this;
}







