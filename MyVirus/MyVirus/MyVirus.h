#pragma once
#include <fstream>
class Virus{
private:
	char* m_dna;
	int m_resistance;
	
public:
	Virus();
	~Virus();
	Virus(Virus* virus);
	void LoadADNInformation();
	int ReduceResistance(int);
	virtual void DoBorn();
	virtual void DoClone();
	virtual void DoDie();
	virtual void InitResistance();

};