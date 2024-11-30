#include <iostream>
using namespace std;

// Function to calculate factorial modulo p
long long factorial_mod(int p) {
    long long fact = 1;
    for (int i = 1; i < p; i++) {
        fact = (fact * i) % p; // Calculate factorial modulo p
    }
    return fact;
}

int main() {
    int p;

    // Input the number p
    cout << "Enter a number p: ";
    cin >> p;

    // Check if p is prime
    bool isPrime = true;
    if (p <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Calculate (p-1)! mod p
    long long factMod = factorial_mod(p);

    // Verify Wilson's Theorem
    if (isPrime) {
        if (factMod == p - 1) {
            cout << "Wilson's Theorem is verified: " << (p-1) << "! ≡ -1 (mod " << p << ")" << endl;
        } else {
            cout << "Wilson's Theorem is NOT verified for this prime number." << endl;
        }
    } else {
        cout << p << " is not a prime number, so Wilson's Theorem doesn't apply." << endl;
    }

    return 0;
}


Output: 
Enter a number p: 5
Wilson's Theorem is verified: 4! ≡ -1 (mod 5)


Enter a number p: 6
6 is not a prime number, so Wilson's Theorem doesn't apply.

