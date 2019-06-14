#include "stdafx.h"
#include "FluVirus.h"
#include "iostream"
#include "string"
#include <cstdlib>
#include <ctime>
#define  blue 0x0000ff 
#define red 0xff0000

using namespace std;
 FluVirus::FluVirus() {
	 DoBorn();
}

 FluVirus::~FluVirus() {

 }

 void FluVirus::Get_Properties()
 {
	 MyVirus::Get_Properties();
	 cout<<endl<<this->m_color<<endl;
 }

void FluVirus::DoBorn() {
	LoadADNInformation();
	srand(time(NULL));
	int color = rand()%2;
	if (color) {
		this->m_color = red;
	}
	else {
		this->m_color = blue;
	}
}

FluVirus * FluVirus::DoClone()
{
	FluVirus* F1 = new FluVirus();
	F1->m_color = this->m_color;
	F1->m_dna = this->m_dna;
	F1->m_resistance = this->m_resistance;
	return F1;
}
