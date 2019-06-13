#pragma once
class MyVirus{
private:
	char* m_dna;
	int m_resistance;
	
public:
	MyVirus();
	~MyVirus();
	void LoadADNInformation();
	void ReduceResistance(int);
	void get_m_dna();
	virtual void DoBorn()=0;
//	virtual void DoClone()=0;
//	virtual void DoDie()=0;
//	virtual void InitResistance()=0;
};





