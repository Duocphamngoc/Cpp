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
	void Get_Properties();
	virtual void DoBorn()=0;
	virtual MyVirus* DoClone( )=0;
//	virtual void DoDie()=0;
//	virtual void InitResistance()=0;
};





