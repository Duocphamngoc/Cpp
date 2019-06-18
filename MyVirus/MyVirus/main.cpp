#include "stdafx.h"
#include "iostream"
#include "string"
#include "Virus.h"
#include "DengueVirus.h"
#include "FluVirus.h"
#include "Patient.h"
#include "vld.h"
using namespace std;

int main()
{
	
	Patient* p = new Patient();
	int t = 0;
	while (p->GetState() == 1) {
		cout << endl<<"------------------Take Medicine ( 0 = NO, 1 = YES)-------------------------"<<endl;
		cin >> t;
		if (t == 1)
		{
			int min = 1;
			int max = 60;
			int medicine_resistance = min + (rand() % (int)(max - min + 1));
			p->TakeMadecine(1);
			if (p->GetState() == 1) break;
		}
	}
	if (p == nullptr) {
		return 0;
	}
	else {
		delete p;
		p = nullptr;
	}
	system("pause");
	return 0;
}