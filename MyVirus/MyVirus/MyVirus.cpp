
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


int main()
{
	Virus * v = new Virus();
	v->LoadADNInformation();
	system("pause");
    return 0;
}

