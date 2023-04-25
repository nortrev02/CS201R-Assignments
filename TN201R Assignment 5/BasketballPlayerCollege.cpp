#include "BasketballPlayerCollege.h"

BasketballPlayerCollege::BasketballPlayerCollege() : BasketballPlayer() {
	team = "Unknown";
}

BasketballPlayerCollege::BasketballPlayerCollege(char pType, string pName, int ga, float ef, int tr, int as, int st, int bl, int to, int pt, string tea) : BasketballPlayer(pType, pName, ga, ef, tr, as, st, bl, to, pt) {
	team = tea;
}

void BasketballPlayerCollege::print() {
	cout << getPlayerName() << endl;
}