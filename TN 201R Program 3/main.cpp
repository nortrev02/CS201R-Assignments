#include <iostream>
#include <vector>
#include <fstream>
#include "matrixFun.h"
using namespace std;

int main() {
    cout << "Welcome to the Matrix Checker!" << endl;
    int dimension = 0;
    vector<vector<int>> origVector;
    //Below is the while loop that gets the dimensions for the matrix and makes sure that they are valid.
    while (dimension > 4 || dimension < 2) {
        cout << "Enter the dimension of your matrix (2-4): ";
        cin >> dimension;
    }
    //Below is the process of generating the original matrix
    generateMatrix(origVector, dimension);
    //These 4 vectors are set to the size of the original matrix so that we won't have to resize them later
    vector<vector<int>> sqMatrix = origVector;
    vector<vector<int>> cubeMatrix = origVector;
    vector<vector<int>> fourMatrix = origVector;
    vector<vector<int>> countMatrix = origVector;
    //These 4 vectors are then also cleaned since they are added to when multiplied
    cleanMatrix(sqMatrix);
    cleanMatrix(cubeMatrix);
    cleanMatrix(fourMatrix);
    cleanMatrix(countMatrix);
    //Now we print out the original matrix and show its properties.
    cout << "The current Matrix is: " << endl;
    printMatrix(origVector);
    cout << endl;
    reflexCheck(origVector);
    cout << endl;
    symmetricCheck(origVector);
    cout << endl;
    //This generates the matrix to the power of 2
    squareMatrix(sqMatrix, origVector, origVector);
    //This shows if the original matrix is transitive by comparing it to the squared matrix.
    transCheck(sqMatrix, origVector);
    cout << endl;
    // Below is the process of displaying the various powers of the matrix.
    cout << "This is the matrix squared: " << endl << endl;
    printMatrix(sqMatrix);
    cout << endl;
    squareMatrix(cubeMatrix, sqMatrix, origVector);
    cout << "This is the matrix cubed: " << endl << endl;
    printMatrix(cubeMatrix);
    cout << endl;
    squareMatrix(fourMatrix, cubeMatrix, origVector);
    cout << "This is the matrix to the fourth power: " << endl << endl;
    printMatrix(fourMatrix);
    cout << endl;
    cout << "The transitive closure is:" << endl;
    tallyMatrix(countMatrix, origVector, sqMatrix, cubeMatrix, fourMatrix, dimension);
    printMatrix(countMatrix);
    cout << endl << "Thanks for using the Matrix Checker!" << endl << "Trevor Norton 2023";
}