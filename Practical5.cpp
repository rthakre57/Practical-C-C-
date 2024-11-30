#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input a character
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is a vowel or consonant
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
        (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is a consonant." << endl;
    }

    return 0;
}


Output:
Enter a character: a
a is a vowel.


Enter a character: z
z is a consonant.
