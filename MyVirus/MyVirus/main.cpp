#include "stdafx.h"
#include "iostream"
#include "string"
#include "Virus.h"
#include "DengueVirus.h"
#include "FluVirus.h"
#include "Patient.h"
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
		}
	}
	system("pause");
	return 0;
}