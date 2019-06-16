#pragma once
#include "Virus.h"
#include <list>
using namespace std;
class DengueVirus : public Virus {
private:
	char* m_protein;
public:
	DengueVirus();
	~DengueVirus();
	DengueVirus(const DengueVirus*);
	void Get_Properties();
	void DoBorn() override;
	list<Virus*> DoClone() override;
	void DoDie() override;
	void InitResistance() override;
};