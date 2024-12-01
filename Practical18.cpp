#include <iostream>
#include <cmath> // For sqrt()
#include <iomanip> // For precision
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be zero)." << endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    cout << fixed << setprecision(6); // Set output precision to 6 decimal places

    if (discriminant > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct:\n";
        cout << "x1 = " << root1 << "\n";
        cout << "x2 = " << root2 << "\n";
    } else if (discriminant == 0) {
        // One real root (double root)
        double root = -b / (2 * a);
        cout << "The roots are real and equal:\n";
        cout << "x = " << root << "\n";
    } else {
        // Two complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex:\n";
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i\n";
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}

Output:
Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0): 1 4 4
The roots are real and equal:
x = -2.000000


  Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0): 1 5 6
The roots are real and distinct:
x1 = -2.000000
x2 = -3.000000

Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0): 1 2 2
The roots are complex:
x1 = -1.000000 + 1.000000i
x2 = -1.000000 - 1.000000i


