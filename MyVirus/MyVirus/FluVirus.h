#include "MyVirus.h"
class FluVirus: public MyVirus {
private:
	int m_color;
public:
	FluVirus();
	~FluVirus();
	void Get_Properties();
	void DoBorn() override;
	FluVirus* DoClone( ) override;


};