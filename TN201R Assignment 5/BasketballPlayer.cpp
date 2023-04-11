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
	setValue();
}

void BasketballPlayer::setEffRating() {

}

void BasketballPlayer::setValue() {
	value = (pts + trb + ast + stl + blk - (pts / efg - pts + tov)) / games;
}

void BasketballPlayer::print() {

}