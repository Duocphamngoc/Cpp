#include "Virus.h"
class FluVirus : public Virus {
private:
	int m_color;
public:
	FluVirus();
	~FluVirus();
	FluVirus(FluVirus*);
	void Get_Properties();
	void DoBorn() override;
	FluVirus* DoClone() override;
	void DoDie() override;
	void InitResistance() override;
};
