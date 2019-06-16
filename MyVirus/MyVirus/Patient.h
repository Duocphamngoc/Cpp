#pragma once
#include "Virus.h"
#include <list>
using namespace std;

class Patient {
private:
	int m_resistance;
	list <Virus *> m_virusList;
	int m_state;
public:
	Patient();
	~Patient();
	void GetPropertiesPatient();
	void InitResistance();
	void DoStart();
	void TakeMadecine(int );
	list <Virus *> GetList();
	int GetState();

};