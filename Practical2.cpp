#include <iostream>
using namespace std;

int main() {
    float number;

    // Input the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is positive, negative, or zero using if...else
    if (number > 0) {
        cout << "The number is positive." << endl;
    } 
    else if (number < 0) {
        cout << "The number is negative." << endl;
    } 
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}



Enter a number: -3
The number is negative.


=== Code Execution Successful ===
