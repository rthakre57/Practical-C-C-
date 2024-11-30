#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    
    // Check divisibility from 2 to the square root of num
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If divisible by any number, it's not prime
        }
    }
    return true; // Number is prime
}

int main() {
    cout << "Prime numbers between 1 and 200 are: " << endl;
    
    // Loop through numbers from 2 to 200 and check for prime
    for (int i = 2; i <= 200; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}


Ouput:
Prime numbers between 1 and 200 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 
