
#include "stdafx.h"
#include "iostream"
#include "string"
#include "MyVirus.h"
#include <fstream>

using namespace std;


Virus::Virus() {

}

void Virus::LoadADNInformation() {
	fstream f;
	f.open("ATGX.bin",ios::in);
	string data= "";
	while (!f.eof())
	{
		getline(f, data);
	} 
	m_dna = new char[100];
	int i = 0;
	while (i<data.length()) {
		m_dna[i] = data[i];
		i++;
	}
	f.close();
}

void Virus::ReduceResistance(int medicine_resistance) {
	m_resistance -= medicine_resistance;
	if (m_resistance <= 0) delete this;
}


int main()
{
	Virus * v = new Virus();
	v->LoadADNInformation();
	system("pause");
    return 0;
}

