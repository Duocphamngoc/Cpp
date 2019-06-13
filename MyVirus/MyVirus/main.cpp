#include "stdafx.h"
#include "iostream"
#include "string"
#include "MyVirus.h"
#include "FluVirus.h"
#include "DengueVirus.h"


int main()
{
	DengueVirus * a = new DengueVirus();
	a->Get_Properties();
	system("pause");
	return 0;
}