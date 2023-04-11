#pragma once
#include <string>
using namespace std;

class BasketballPlayer {
private:
	char playerType;
	string playerName;
	int games;
	float efg;
	int trb;
	int ast;
	int stl;
	int blk;
	int tov;
	int pts;
	float effRating;
	int value;
public:
	BasketballPlayer();
	BasketballPlayer(char pType, string pName, int ga, float ef, int tr, int as, int st, int bl, int to, int pt);
	void setPlayerType(char pType) { playerType = pType; }
	void setPlayerName(string pName) { playerName = pName; }
	void setGames(int ga) { games = ga; }
	void setEFG(float ef) { efg = ef; }
	void setTRB(int tr) { trb = tr; }
	void setAST(int as) { ast = as; }
	void setSTL(int st) { stl = st; }
	void setBLK(int bl) { blk = bl; }
	void setTOV(int to) { tov = to; }
	void setPoints(int points) { pts = points; }
	void setEffRating();
	void setValue();
	char getPlayerType() { return playerType; }
	string getPlayerName() { return playerName; }
	float getEFG() { return efg; }
	int getTRB() { return trb; }
	int getAST() { return ast; }
	int getSTL() { return stl; }
	int getBLK() { return blk; }
	int getTOV() { return tov; }
	int getPTS() { return pts; }
	float getEffRating() { return effRating; }
	int getValue() { return value; }
	virtual void print();
};
