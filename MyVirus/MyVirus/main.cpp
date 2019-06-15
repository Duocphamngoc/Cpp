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

/*	DengueVirus * dengue = new DengueVirus();
	DengueVirus * dengue_F1;
	for (int i = 0; i < 2; i++) {
		dengue_F1 = dengue->DoClone();
	}
	*/
	flu->Get_Properties();
	flu_F1->Get_Properties();
	//dengue_F1->Get_Properties();
//	(dengue_F1 + 1)->Get_Properties();

	flu->DoDie();
	flu_F1->DoDie();
//	dengue->DoDie();

	system("pause");
	return 0;
}