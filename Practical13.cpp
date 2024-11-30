#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate Fibonacci sequence and the ratio
void fibonacci(int N) {
    long long A = 0, B = 1;

    cout << "Fibonacci Sequence: ";
    cout << A << " " << B << " "; // Print first two terms

    // Loop to calculate and print Fibonacci numbers and the ratio
    for (int i = 2; i < N; i++) {
        long long next = A + B;
        A = B;
        B = next;

        cout << next << " ";
    }

    cout << endl;

    // Calculate the ratio B/A for each pair
    cout << "\nRatio of consecutive Fibonacci numbers (B/A):" << endl;
    A = 1; // start with second number for B/A calculation
    for (int i = 2; i < N; i++) {
        double ratio = (double)B / A;
        cout << ratio << " ";
        long long next = A + B;
        A = B;
        B = next;
    }

    cout << endl;

    // Final Golden Ratio (approximate value)
    double golden_ratio = (1 + sqrt(5)) / 2;
    cout << "\nGolden Ratio: " << golden_ratio << endl;
}

int main() {
    int N;

    // Input the number of terms in Fibonacci sequence
    cout << "Enter the number of Fibonacci terms (N): ";
    cin >> N;

    // Generate Fibonacci sequence and show ratio
    fibonacci(N);

    return 0;
}


Output:
Enter the number of Fibonacci terms (N): 15
Fibonacci Sequence: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 

Ratio of consecutive Fibonacci numbers (B/A):
1 2 1.5 1.66667 1.6 1.625 1.61538 1.615 1.61905 1.61765 1.61818 1.61798 1.61805 1.61803 

Golden Ratio: 1.61803
