#pragma once
#include "BasketballPlayer.h"
class BasketballPlayerPro : public BasketballPlayer {
private:
	int years;
	string position;
	int contractValue;
public:
	BasketballPlayerPro();
	BasketballPlayerPro(char pType, string pName, int ga, float ef, int tr, int as, int st, int bl, int to, int pt, int ye, string pos);
	void setYears(int ye) { years = ye; }
	void setPosition(string pos) { position = pos; }
	void setContractValue();
	int getYears() { return years; }
	string getPosition() { return position; }
	int getContractValue() { return contractValue; }
	void print();
};