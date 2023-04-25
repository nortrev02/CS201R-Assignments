#include "BasketballPlayer.h"
#include <string>

BasketballPlayer::BasketballPlayer() {
	playerType = ' ';
	playerName = "Unknown";
	games = 0;
	efg = 0;
	trb = 0;
	ast = 0;
	stl = 0;
	blk = 0;
	tov = 0;
	pts = 0;
	effRating = 0;
	value = 0;
}

BasketballPlayer::BasketballPlayer(char pType, string pName, int ga, float ef, int tr, int as, int st, int bl, int to, int pt) {
	playerType = pType;
	playerName = pName;
	games = ga;
	efg = ef;
	trb = tr;
	ast = as;
	stl = st;
	blk = bl;
	tov = to; 
	pts = pt;
	setEffRating();
	setValue();
}

void BasketballPlayer::setEffRating() {
	effRating = (pts + trb + ast + stl + blk - (pts / efg - pts + tov)) / games;
}

void BasketballPlayer::setValue() {
	if (efg > 0.7 || effRating > 20) {
		value = 10;
	}
	else if (efg > 0.65 || effRating > 15) {
		value = 9;
	}
	else if (efg > 0.65 && stl / games > 2 && pts / games > 20 && trb / games > 5 && tov / games <= 1) {
		value = 9;
	}
	else if (efg > 0.6 || effRating > 13) {
		value = 8;
	}
	else if (efg > 0.6 && blk / games > 3 && pts / games > 15 && trb / games > 5) {
		value = 8;
	}
	else if (efg > 0.6 && pts / games > 15 && trb / games > 5 && tov / games < 2) {
		value = 8;
	}
	else if (efg > 0.55 || effRating > 10) {
		value = 7;
	}
	else if (efg > 0.55 && pts / games > 15 && trb / games > 5) {
		value = 7;
	}
	else if (efg > 0.55 && blk / games > 3 && pts / games > 10 && trb / games > 4) {
		value = 6;
	}
	else if (efg > 0.45 && pts / games > 10 && trb / games > 4) {
		value = 5;
	}
	else if (efg > 0.4 && pts / games > 5 && trb / games > 3) {
		value = 3;
	}
	else if (efg > 0.35 && pts / games > 5 && trb / games > 5) {
		value = 2;
	}
	else {
		value = 0;
	}

}