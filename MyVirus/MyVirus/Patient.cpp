#include "stdafx.h"
#include "iostream"
#include "Patient.h"
#include <list>
#include <cstdlib>
#include <ctime>
using namespace std;

Patient::Patient() {
	InitResistance();
}
Patient::~Patient() {

}

void Patient::GetPropertiesPatient()
{
	cout << endl << m_resistance<<endl;
}

void Patient::InitResistance() {
	srand(time(NULL));
	this->m_resistance = 1000+rand() % 9000;
}