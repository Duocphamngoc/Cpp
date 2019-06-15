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
	InitResistance();
}

FluVirus::~FluVirus() {
	//DoDie();
}

FluVirus::FluVirus(FluVirus* fluvirus) {
	this->m_color = fluvirus->m_color;
	this->m_dna = fluvirus->m_dna;
	this->m_resistance = fluvirus->m_resistance;

}

void FluVirus::Get_Properties()
{
	if (this == nullptr) {
		cout << "nothing"<<endl;
	}
	else {
		Virus::Get_Properties();
		cout << endl << this->m_color << endl;
	
	}
}

void FluVirus::DoBorn() {
	LoadADNInformation();
	srand(time(NULL));
	int color = rand() % 2;
	if (color) {
		this->m_color = red;
	}
	else {
		this->m_color = blue;
	}
}

FluVirus * FluVirus::DoClone()
{
	/*
	FluVirus* F1 = new FluVirus();
	F1->m_color = this->m_color;
	F1->m_dna = this->m_dna;
	F1->m_resistance = this->m_resistance;
	return F1; 
	*/
	FluVirus* F1 = new FluVirus(this);
	return F1;
}

void FluVirus::DoDie() {
	if (this == nullptr) {
		cout << "nothing to delete" << endl;
	}
	else {
		delete this;
	}
}

void FluVirus::InitResistance() {
	if (this->m_color == 255) {
		srand(time(NULL));
		this->m_resistance = 10 + rand() % 5;
	}
	else {
		srand(time(NULL));
		this->m_resistance = 10 + rand() % 10;
	}

}