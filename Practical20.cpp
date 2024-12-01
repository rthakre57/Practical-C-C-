#include <iostream>
using namespace std;

int main() {
    int n, m;

    // Input the size of the matrix (n x m)
    cout << "Enter the number of rows (n) and columns (m) of the matrix: ";
    cin >> n >> m;

    int matrix[n][m];

    // Input the elements of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Part 1: Sum of elements of each row
    cout << "\nSum of elements of each row:" << endl;
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << rowSum << endl;
    }

    // Part 2: Trace of the matrix (only for square matrices)
    if (n == m) {
        int trace = 0;
        for (int i = 0; i < n; i++) {
            trace += matrix[i][i];
        }
        cout << "\nTrace of the matrix: " << trace << endl;
    } else {
        cout << "\nThe matrix is not square, so it does not have a trace." << endl;
    }

    return 0;
}

Output:
Enter the number of rows (n) and columns (m) of the matrix: 
3 3

Enter the elements of the matrix:
1 2 3
4 5 6
7 8 9

  Sum of elements of each row:
Sum of row 1: 6
Sum of row 2: 15
Sum of row 3: 24

Trace of the matrix: 15



  Enter the number of rows (n) and columns (m) of the matrix: 
2 3

Enter the elements of the matrix:
1 2 3
4 5 6


  Sum of elements of each row:
Sum of row 1: 6
Sum of row 2: 15

The matrix is not square, so it does not have a trace.
