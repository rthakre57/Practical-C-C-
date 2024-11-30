#include <iostream>
using namespace std;

bool isPowerOfTwo(int N) {
    // A number is a power of 2 if N > 0 and N & (N - 1) is 0
    return (N > 0) && (N & (N - 1)) == 0;
}

int main() {
    int N;

    // Input the number N
    cout << "Enter a number N: ";
    cin >> N;

    // Check if the number is a power of 2
    if (isPowerOfTwo(N)) {
        cout << N << " can be expressed as a power of 2." << endl;
    } else {
        cout << N << " cannot be expressed as a power of 2." << endl;
    }

    return 0;
}



Output:
Enter a number N: 32
32 can be expressed as a power of 2.
