#pragma once
#include <list>
using namespace std;
class Virus {
protected:
	string m_dna;
	int m_resistance;

public:
	Virus();
	virtual ~Virus();
	Virus(const Virus*);
	void LoadADNInformation();
	void ReduceResistance(int);
	void Get_Properties();
	int Get_m_resistance();
	virtual void DoBorn() = 0;
	virtual list<Virus*> DoClone() = 0;
	virtual void DoDie()=0;
	virtual void InitResistance()=0;
};
