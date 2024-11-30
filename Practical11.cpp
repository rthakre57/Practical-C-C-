#include <iostream>
using namespace std;

int main() {
    int N;

    // Input the number of rows
    cout << "Enter the number of rows (N): ";
    cin >> N;

    // Loop to print the pyramid
    for (int i = N; i >= 1; i--) {
        // Loop to print stars in each row
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
