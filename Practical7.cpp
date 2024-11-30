#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to compute (a^b) % n using modular exponentiation
long long powerMod(int a, int b, int n) {
    long long result = 1;
    a = a % n; // In case a is larger than n
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % n;
        }
        a = (a * a) % n;
        b = b / 2;
    }
    return result;
}

int main() {
    int n;

    // Input the number n
    cout << "Enter a number n: ";
    cin >> n;

    // Check if n is prime
    if (!isPrime(n)) {
        cout << n << " is not a prime number. Fermat's Little Theorem doesn't apply." << endl;
        return 0;
    }

    // Verify Fermat's Little Theorem for all a such that 1 < a < n
    bool isValid = true;
    for (int a = 2; a < n; a++) {
        if (powerMod(a, n - 1, n) != 1) {
            isValid = false;
            cout << "Fermat's Little Theorem failed for a = " << a << endl;
            break;
        }
    }

    if (isValid) {
        cout << "Fermat's Little Theorem is verified for " << n << endl;
    }

    return 0;
}


Output:
Enter a number n: 7
Fermat's Little Theorem is verified for 7
