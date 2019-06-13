#pragma once
#include "MyVirus.h"
class DengueVirus : public MyVirus {
private:
	char* m_protein;
public:
	DengueVirus();
	~DengueVirus();
	void Get_Properties();
	void DoBorn() override;
	void DoClone() override;

};