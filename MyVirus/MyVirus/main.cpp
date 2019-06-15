#include "stdafx.h"
#include "iostream"
#include "string"
#include "Virus.h"
#include "DengueVirus.h"
#include "FluVirus.h"
#include "Patient.h"


int main()
{
	
	Patient* p = new Patient();
	p->GetPropertiesPatient();

	system("pause");
	return 0;
}