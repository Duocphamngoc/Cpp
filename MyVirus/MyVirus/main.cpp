#include "stdafx.h"
#include "iostream"
#include "string"
#include "MyVirus.h"
#include "FluVirus.h"
#include "DengueVirus.h"


int main()
{
	FluVirus* flu = new FluVirus();
	FluVirus* flu_F1;
	flu_F1=flu->DoClone();

	DengueVirus * dengue = new DengueVirus();
	DengueVirus * dengue_F1;
	for (int i = 0; i < 2;i++) {
		dengue_F1 = dengue->DoClone();
	}

	flu_F1->Get_Properties();
	dengue_F1->Get_Properties();
	(dengue_F1+1)->Get_Properties();

	system("pause");
	return 0;
}