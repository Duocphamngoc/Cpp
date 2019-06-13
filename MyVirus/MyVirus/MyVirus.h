#pragma once
class Virus{
private:
	char* m_dna;
	int m_resistance;
	
public:
	Virus();
	~Virus();
	Virus(Virus* virus);
	void LoadADNInformation();
	void ReduceResistance(int);
	virtual void DoBorn();
	virtual void DoClone();
	virtual void DoDie();
	virtual void InitResistance();

};