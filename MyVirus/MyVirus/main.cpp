#include "stdafx.h"
#include "iostream"
#include "string"
#include "Virus.h"
#include "DengueVirus.h"
#include "FluVirus.h"



int main()
{
	FluVirus* flu = new FluVirus();
	FluVirus* flu_F1;
	flu_F1 = flu->DoClone();
	flu->Get_Properties();
	flu_F1->Get_Properties();


	system("pause");
	return 0;
}