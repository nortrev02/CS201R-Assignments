#include <sstream>
#include <iomanip>
#include "Functions.h"
#include "BasketballPlayer.h"
#include "BasketballPlayerCollege.h"
#include "BasketballPlayerPro.h"

int main() {
    vector<BasketballPlayer*> NCAADream;
    vector<BasketballPlayer*> mixedDream;
    vector<BasketballPlayer*> PRODream;
	vector<BasketballPlayer*> Players;
    vector<string> row;
    bool first = false;
    string line, word, temp;
    ofstream error("ErrorOutput.txt");
    ifstream ncaa("playerStatsNCAA.csv");
    ifstream pro("playerStatsPRO.csv");
    while (pro >> temp) {
        row.clear();
        // read an entire row and
        // store it in a string variable 'line'
        getline(pro, line);
        stringstream s(line);
        // read every column data of a row and
        // store it in a string variable, 'word'
        while (getline(s, word, ',')) {
            // add all the column data of a row to a vector
            row.push_back(word);
        }
        if (first) {
            float fg;
            int games, trb, ast, stl, blk, tov, pts, years;
            string pos;
            try {
                games = stoi(row.at(1));
                fg = stof(row.at(2));
                trb = stoi(row.at(3));
                ast = stoi(row.at(4));
                stl = stoi(row.at(5));
                blk = stoi(row.at(6));
                tov = stoi(row.at(7));
                pts = stoi(row.at(8));
                years = stoi(row.at(10));
                pos = row.at(11);
                if (games < 6) {
                    throw games;
                }
            }
            catch (int games) {
                error << setw(20) << row.at(0) << " Pro Player " << " : " << setw(15) << "Insufficient game count: " << games << endl;
            }
            catch (...) {
                error << setw(20) << row.at(0) << " PRO Player " << " : " << setw(15) << "invalid stoi argument" << endl;
                continue;
            }
            BasketballPlayerPro* temp;
            temp = new BasketballPlayerPro('P', row.at(0), games, fg, trb, ast, stl, blk, tov, pts, years, pos);
            Players.push_back(temp);
        }
        else {
            first = true;
        }

    }
    first = false;
    while (ncaa >> temp) {
        row.clear();
        // read an entire row and
        // store it in a string variable 'line'
        getline(ncaa, line);
        stringstream s(line);
        // read every column data of a row and
        // store it in a string variable, 'word'
        while (getline(s, word, ',')) {
            // add all the column data of a row to a vector
            row.push_back(word);
        }
        if (first) {
            float fg;
            int games, trb, ast, stl, blk, tov, pts;
            try {
                games = stoi(row.at(1));
                fg = stof(row.at(2));
                trb = stoi(row.at(3));
                ast = stoi(row.at(4));
                stl = stoi(row.at(5));
                blk = stoi(row.at(6));
                tov = stoi(row.at(7));
                pts = stoi(row.at(8));
            }
            catch (...) {
                error << setw(20) << row.at(0) << " NCAA Player " << " : " <<  setw(15) << "invalid stoi argument" << endl;
                continue;
            }
            BasketballPlayerCollege* temp;
            temp = new BasketballPlayerCollege('C', row.at(0), games, fg, trb, ast, stl, blk, tov, pts, row.at(9));
            Players.push_back(temp);
        }
        else {
            first = true;
        }
    }
    // Now all the players are loaded into the vector. Now the real program can begin.
    int valGoal = 10;
    vector<BasketballPlayer*> PseudoPlayers;
    while (NCAADream.size() < 12) {
        float maxefg = 0.0;
        if (valGoal == 7) {
            for (int i = 0; i < PseudoPlayers.size(); i++) {
                if (PseudoPlayers.at(i)->getValue() == 7 && PseudoPlayers.at(i)->getEFG() > maxefg) {
                    maxefg = PseudoPlayers.at(i)->getEFG();
                }
            }
            for (int i = 0; i < PseudoPlayers.size(); i++) {
                if (PseudoPlayers.at(i)->getEFG() == maxefg) {
                    NCAADream.push_back(PseudoPlayers.at(i));
                    PseudoPlayers.at(i)->setEFG(0.0);
                }
            }
        }
        else {
            for (int i = 0; i < Players.size(); i++) {
                if (NCAADream.size() < 12 && Players.at(i)->getValue() == valGoal) {
                    NCAADream.push_back(Players.at(i));
                }
            }
            valGoal--;
        }
    }
    cout << "NCAA TEAM LIST" << endl << endl << endl;
    cout  << setw(20) << "NCAA Player Name" << setw(20) << "Player Value" << setw(15) << "Eff Rating" << setw(15) << "EFG Rating" << endl;
    for (int i = 0; i < NCAADream.size(); i++) {
        cout << setw(20) << NCAADream.at(i)->getPlayerName() << setw(20) << NCAADream.at(i)->getValue() << setw(13) << NCAADream.at(i)->getEffRating() << setw(15) << NCAADream.at(i)->getEFG() << endl;
    }

    PseudoPlayers.clear();
    PseudoPlayers = Players;
    valGoal = 10;
    int ccount = 0, fcount = 0, gcount = 0;
    for (int i = 0; i < Players.size(); i++) {
        try {

            if (Players.at(i)->getPosition() == 'C' && PseudoPlayers.at(i)->getValue() == valGoal && ccount < 2) {
                mixedDream.push_back(PseudoPlayers.at(i));
                PseudoPlayers.at(i)->setEFG(0.0);
                ccount++;
            }
            else if (PseudoPlayers.at(i)->getPlayerType() == 'F' && PseudoPlayers.at(i)->getValue() == valGoal && fcount < 2) {
                mixedDream.push_back(PseudoPlayers.at(i));
                PseudoPlayers.at(i)->setEFG(0.0);
                fcount++;
            }
            else if (PseudoPlayers.at(i)->getPlayerType() == 'G' && PseudoPlayers.at(i)->getValue() == valGoal && gcount < 2) {
                mixedDream.push_back(PseudoPlayers.at(i));
                PseudoPlayers.at(i)->setEFG(0.0);
                gcount++;
            }
        }
        catch (...) {
            continue;
        }
    }
    for (int i = 0; i < 6; i++) {
        mixedDream.push_back(NCAADream.at(i));
    }
    PseudoPlayers.clear();
    PseudoPlayers = Players;
    while (PRODream.size() < 12) {
        for (int i = 0; i < Players.size(); i++) {

        }
    }
}
