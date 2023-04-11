#pragma once
#include "BasketballPlayer.h"
class BasketballPlayerCollege : public BasketballPlayer {
private:
	string team;
public:
	void setTeam(string t) { team = t; }
	string getTeam() { return team; }
	void print();
};