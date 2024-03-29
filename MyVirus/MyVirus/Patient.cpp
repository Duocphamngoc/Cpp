#include "stdafx.h"
#include "iostream"
#include "Patient.h"
#include "FluVirus.h"
#include "DengueVirus.h"
#include <list>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

Patient::Patient() {
	this->InitResistance();
	this->DoStart();
}
Patient::~Patient() {
	list<Virus* >::iterator i;
	for (auto i = m_virusList.begin(); i != m_virusList.end(); i++)
	{
		delete (*i);
	}
	m_virusList.clear();
}

void Patient::GetPropertiesPatient()
{
	cout << endl << m_resistance<<endl;
	
}

void Patient::InitResistance() {
	srand(time(NULL));
	this->m_resistance = 1000+rand() % 8001;
}

void Patient::DoStart()
{
	this->m_state = 1;
	srand(time(NULL));
	int amountVirus = 10 + rand() % 11;
	cout << endl << amountVirus << endl;
	for (int i = 0; i < amountVirus;i++) {
		srand(time(NULL));
		Sleep(500);
		int luckynumber = rand() % 2;
		switch (luckynumber)
		{
		case 0:
			m_virusList.push_back(new FluVirus);
			break;
		case 1:
			m_virusList.push_back(new DengueVirus);
			break;
		}
	}
}

void Patient::TakeMadecine(int medicine_resistance)
{
	list<Virus*>::iterator position;
	position = m_virusList.begin();
	Virus * virus;
	int total=0;
	int denta = m_virusList.size();
	int count = 0;
	for (position; position != m_virusList.end();) {
		virus = *position;
		virus->ReduceResistance(medicine_resistance);
		if (virus->Get_m_resistance() > 0) {
			total += virus->Get_m_resistance();
			list<Virus*> list;
			list = virus->DoClone();
			denta = denta + list.size()+1;
			//add virus clone into m_virusList
			 // add virus parent
			m_virusList.push_front(*list.begin()); //add virus child
			list.pop_front();
			if (!list.empty()) {
				m_virusList.push_back(*list.begin()); //add virus child
				list.pop_front();
			}
			cout << "Virus was saved and clone to child virus with amount of virus now is: " << m_virusList.size()<<" Virus" << endl;
			position++;
		}
		else {

			
			
		//	position = m_virusList.erase(position);
			cout << "Virus was Died-------Amount virus now: " << m_virusList.size() <<" Virus------"<<++count<< endl;
			list<Virus*>::iterator pos = position;
			position++;
			delete *pos;
			*pos = nullptr;
			m_virusList.erase(pos);
			
		}
	}
	cout << endl << "Medicine_Resistance: " << medicine_resistance << endl;
	cout << endl << "Total Resistance of Virus: " << total <<" blood"<< endl;
	cout << "Resistance of Patient: " << this->m_resistance <<" blood"<< endl;
	if (total < this->m_resistance) cout << "Patient is saved" << endl;
	else
	{
		cout << "Patient is Died" << endl;
		m_state = 0;
		delete this;
	}
		
}



list<Virus*> Patient::GetList()
{
	return m_virusList;
}

int Patient::GetState()
{
	return m_state;
}

