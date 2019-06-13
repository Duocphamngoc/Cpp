#pragma once
class MyVirus{
protected:
	char* m_dna;
	int m_resistance;
	
public:
	MyVirus();
	~MyVirus();
	void LoadADNInformation();
	void ReduceResistance(int);
	virtual void Get_Properties()=0;
	virtual void DoBorn()=0;
//	virtual void DoClone()=0;
//	virtual void DoDie()=0;
//	virtual void InitResistance()=0;
};





