#include "stdafx.h"
#include "FluVirus.h"
#include "iostream"
#include "string"
#include <cstdlib>
#include <ctime>
#define blue 0x0000ff
#define red 0xff0000

using namespace std;
 FluVirus::FluVirus() {
	 DoBorn();
}

 FluVirus::~FluVirus() {

 }

void FluVirus::DoBorn() {
	LoadADNInformation();
	srand(time(NULL));
	int color = rand()%2;
	if (color) {
		m_color = red;
	}
	else {
		m_color = blue;
	}
	cout << m_color;
}