#include "stdafx.h"
#include "iostream"
#include "string"
#include "MyVirus.h"
#include "FluVirus.h"
#include "DengueVirus.h"


int main()
{
	DengueVirus * a = new DengueVirus();
	DengueVirus * b = new DengueVirus();
	a->Get_Properties();
	b->Get_Properties();
	system("pause");
	return 0;
}