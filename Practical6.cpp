#include <iostream>
using namespace std;

int main() {
    int num, firstDigit, lastDigit;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Find the last digit
    lastDigit = num % 10;

    // Find the first digit
    // Loop until the number is reduced to a single digit
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }

    // Calculate the sum of the first and last digits
    int sum = firstDigit + lastDigit;

    // Output the result
    cout << "Sum of first and last digit: " << sum << endl;

    return 0;
}


Output:
Enter a number: 12345
Sum of first and last digit: 6



Enter a number: 987
Sum of first and last digit: 16

