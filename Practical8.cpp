#include <iostream>
using namespace std;

int main() {
    int N, count = 0;

    // Input the integer N
    cout << "Enter an integer: ";
    cin >> N;

    // If the number is 0, the number of digits is 1
    if (N == 0) {
        cout << "The total number of digits is: 1" << endl;
    } else {
        // Count the digits by repeatedly dividing by 10
        while (N != 0) {
            N = N / 10; // Divide the number by 10
            count++;    // Increment the digit count
        }

        cout << "The total number of digits is: " << count << endl;
    }

    return 0;
}


Output:
Enter an integer: 987654321
The total number of digits is: 9
