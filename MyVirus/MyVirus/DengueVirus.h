#pragma once
#include "Virus.h"
class DengueVirus : public Virus {
private:
	char* m_protein;
public:
	DengueVirus();
	~DengueVirus();
	void Get_Properties();
	void DoBorn() override;
	DengueVirus* DoClone() override;
};