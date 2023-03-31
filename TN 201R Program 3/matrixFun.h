#include <vector>
using namespace std;

void generateMatrix(vector<vector<int>>& vect, int dim);

void cleanMatrix(vector<vector<int>>& vect);

void printMatrix(vector<vector<int>> vect);

void addMatrix(vector<vector<int>> vect);

void squareMatrix(vector<vector<int>>& newVector, vector<vector<int>> vector1, vector<vector<int>> vector2);

void reflexCheck(vector<vector<int>> vect);

void symmetricCheck(vector<vector<int>> vect);

void transCheck(vector<vector<int>> vect, vector<vector<int>> origVect);

void tallyMatrix(vector<vector<int>>& FinalVect, vector<vector<int>> vect1, vector<vector<int>> vect2, vector<vector<int>> vect3, vector<vector<int>> vect4, int dimensions);
