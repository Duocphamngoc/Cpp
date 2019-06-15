#pragma once
class Virus {
protected:
	char* m_dna;
	int m_resistance;

public:
	Virus();
	~Virus();
	void LoadADNInformation();
	void ReduceResistance(int);
	void Get_Properties();
	virtual void DoBorn() = 0;
	virtual Virus* DoClone() = 0;

	//	virtual void DoDie()=0;
	//	virtual void InitResistance()=0;
};
#pragma once
