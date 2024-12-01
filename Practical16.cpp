#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of the matrix (n x n)
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    // Declare the matrix
    int matrix[n][n];

    // Input elements of the matrix
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Printing the Lower Triangular Matrix
    cout << "\nLower Triangular Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                cout << matrix[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    // Printing the Upper Triangular Matrix
    cout << "\nUpper Triangular Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                cout << matrix[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}


Output:
Enter the size of the square matrix: 4
Enter elements of the matrix:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16


  Lower Triangular Matrix:
1 0 0 0 
5 6 0 0 
9 10 11 0 
13 14 15 16 

Upper Triangular Matrix:
1 2 3 4 
0 6 7 8 
0 0 11 12 
0 0 0 16 
