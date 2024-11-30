#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input three integers
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    // Find the largest number using if...else with logical operators
    int largest, smallest;

    // Check for largest number
    if ((a >= b) && (a >= c)) {
        largest = a;
    } else if ((b >= a) && (b >= c)) {
        largest = b;
    } else {
        largest = c;
    }

    // Check for smallest number
    if ((a <= b) && (a <= c)) {
        smallest = a;
    } else if ((b <= a) && (b <= c)) {
        smallest = b;
    } else {
        smallest = c;
    }

    // Output the largest and smallest number
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}

Output:
Enter three integers: 5 8 3
The largest number is: 8
The smallest number is: 3
