#pragma once
#include "MyVirus.h"
class DengueVirus : public MyVirus {
private:
	char* m_protein;
public:
	DengueVirus();
	~DengueVirus();
	void DoBorn() override;
	void Get_Properties();

};