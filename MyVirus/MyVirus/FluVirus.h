#include "Virus.h"
#include <list>
using namespace std;
class FluVirus : public Virus {
private:
	int m_color;
public:
	FluVirus();
	~FluVirus();
	FluVirus(const FluVirus*);
	void Get_Properties();
	void DoBorn() override;
	list<Virus*> DoClone() override;
	void DoDie() override;
	void InitResistance() override;
};
