#include <iostream>
#include <vector>
#include <fstream>
#include "matrixFun.h"
using namespace std;

void generateMatrix(vector<vector<int>>& vect, int dim) {
	vect.resize(dim);
	for (int i = 0; i < vect.size(); i++) {
		vect.at(i).resize(dim);
	}
	for (int i = 0; i < vect.size(); i++) {
		for (int j = 0; j < vect.size(); j++) {
			cout << "Enter element " << i+1 << ", " << j+1 << " of the Matrix: ";
			cin >> vect.at(i).at(j);
		}
	}
}

void cleanMatrix(vector<vector<int>>& vect) {
	for (int i = 0; i < vect.size(); i++) {
		for (int j = 0; j < vect.size(); j++) {
			vect.at(i).at(j) = 0;
		}
	}
}

void printMatrix(vector<vector<int>> vect) {
	for (int i = 0; i < vect.size(); i++) {
		cout << endl << "     ";
		for (int j = 0; j < vect.size(); j++) {
			cout << vect.at(i).at(j) << " ";
		}
	}
}

void addMatrix(vector<vector<int>> vect) {

}

void squareMatrix(vector<vector<int>>& newVector, vector<vector<int>> vector1, vector<vector<int>> vector2) {
	for (int i = 0; i < vector1.size(); ++i) {
		for (int j = 0; j < vector2.at(0).size(); ++j) {
			for (int k = 0; k < vector1.at(0).size(); ++k) {
				newVector[i][j] += vector1[i][k] * vector2[k][j];
			}
		}
	}
}

void reflexCheck(vector<vector<int>> vect) {
	bool check = true;
	for (int i = 0; i < vect.size(); i++) {
		if (vect.at(i).at(i) != 1) {
			check = false;
		}
	}
	if (check) {
		cout << "The matrix is reflexive." << endl;
	}
	else {
		cout << "The matrix is not reflexive." << endl;
	}

}

void symmetricCheck(vector<vector<int>> vect) {
	bool check = true;
	for (int i = 0; i < vect.size(); i++) {
		for (int j = 0; j < vect.size(); j++) {
			if (vect.at(i).at(j) != vect.at(j).at(i)) {
				check = false;
			 }
		}
	}
	if (check) {
		cout << "The matrix is symmetric." << endl;
	}
	else {
		cout << "The matrix is not symmetric." << endl;
	}
}

void transCheck(vector<vector<int>> vect, vector<vector<int>> origVect) {
	bool check = true;
	for (int i = 0; i < vect.size(); i++) {
		for (int j = 0; j < vect.size(); j++) {
			if ((vect.at(i).at(j) != 0) && (origVect.at(i).at(j) == 0)) {
				check = false;
			}
		}
	}
	if (check) {
		cout << "The matrix is transitive." << endl;
	}
	else {
		cout << "The matrix is not transitive." << endl;
	}
}

void tallyMatrix(vector<vector<int>>& FinalVect, vector<vector<int>> vect1, vector<vector<int>> vect2, vector<vector<int>> vect3, vector<vector<int>> vect4, int dimensions) {
	if (dimensions == 2) {
		cleanMatrix(vect3);
		cleanMatrix(vect4);
	}
	else if (dimensions == 3) {
		cleanMatrix(vect4);
	}
	for (int i = 0; i < vect1.size(); i++) {
		for (int j = 0; j < vect1.size(); j++) {
			FinalVect.at(i).at(j) += (vect1.at(i).at(j) + vect2.at(i).at(j) + vect3.at(i).at(j) + vect4.at(i).at(j));
		}
	}
}