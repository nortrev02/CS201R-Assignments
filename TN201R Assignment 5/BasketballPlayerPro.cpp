#include "BasketballPlayerPro.h"

BasketballPlayerPro::BasketballPlayerPro() : BasketballPlayer() {
	years = 0;
	position = "Unknown";
	setContractValue();
}

BasketballPlayerPro::BasketballPlayerPro(char pType, string pName, int ga, float ef, int tr, int as, int st, int bl, int to, int pt, int ye, string pos) : BasketballPlayer(pType, pName, ga, ef, tr, as, st, bl, to, pt) {
	years = ye;
	position = pos;
	setValue();
	setContractValue();
}

void BasketballPlayerPro::setContractValue() {
	if (getValue() == 10) {
		contractValue = 12000000;
	}
	else if (getValue() == 9) {
		contractValue = 10000000;
	}
	else if (getValue() == 8) {
		contractValue = 7500000;
	}
	else if (getValue() == 7) {
		contractValue = 6000000;
	}
	else if (getValue() == 5 || getValue() == 6) {
		contractValue = 5000000;
	}
	else if (getValue() == 3 || getValue() == 4) {
		contractValue = 2500000;
	}
	else {
		contractValue = 500000;
	}
}

void BasketballPlayerPro::print() {

}