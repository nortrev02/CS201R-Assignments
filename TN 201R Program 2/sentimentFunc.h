#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include <iomanip>
using namespace std;

struct vals {
	string word = "";
	double val = 0.0;
};

void loadFile(vector<vals>&);

void initValues(vector<vals>&, vector<vals>&, vector<vals>&);

string getFile(bool&);

double printSentimentVal(string, vector<vals>);

void printFile(string);

char getChoice();

void inverseIt(string, vector<vals>, vector<vals>, vector<vals>&, vector<vals>&);

void printChanged(vector<vals>, vector<vals>);