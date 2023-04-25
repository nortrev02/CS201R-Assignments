#pragma once
#include "BasketballPlayer.h"
class BasketballPlayerCollege : public BasketballPlayer {
private:
	string team;
public:
	BasketballPlayerCollege();
	BasketballPlayerCollege(char pType, string pName, int ga, float ef, int tr, int as, int st, int bl, int to, int pt, string tea);
	void setTeam(string t) { team = t; }
	string getTeam() { return team; }
	void print();
};