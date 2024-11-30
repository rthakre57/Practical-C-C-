#include <iostream>
using namespace std;

int main() {
    int N;
    double sum = 0.0;

    // Input the value of N
    cout << "Enter a number N: ";
    cin >> N;

    // Calculate the sum of the series 1 + 1/2 + 1/3 + ... + 1/N
    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    // Output the result
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}


Output:
Enter a number N: 5
The sum of the series is: 2.28333
