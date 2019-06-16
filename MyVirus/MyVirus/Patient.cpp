#include "stdafx.h"
#include "iostream"
#include "Patient.h"
#include "FluVirus.h"
#include <list>
#include <cstdlib>
#include <ctime>
using namespace std;

Patient::Patient() {
	InitResistance();
	DoStart();
}
Patient::~Patient() {

}

void Patient::GetPropertiesPatient()
{
	cout << endl << m_resistance<<endl;
	for (int i = 0; i < 20; i++) {
	//	Virus* m= m_virusList.pop_front();
	}
}

void Patient::InitResistance() {
	srand(time(NULL));
	this->m_resistance = 1000+rand() % 9000;
}

void Patient::DoStart()
{
	this->m_state = 1;
	srand(time(NULL));
	int Amount_Virus = 20 + rand() % 20;
	cout << "Amout virus: " << Amount_Virus<<endl;
	for (int i = 0; i < Amount_Virus; i++) {
		FluVirus* virus = new FluVirus();
		virus->Get_Properties();
		m_virusList.push_front(virus);
	}
	cout <<"size: "<< m_virusList.size()<<endl;
	cout<<"virus dau tien: "<<*m_virusList.begin()<<endl;
	
}

void Patient::TakeMadecine()
{

	*m_virusList.begin();
}

