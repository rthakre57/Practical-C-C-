#include <iostream>
#include <cmath>
#include <iomanip> // For precision
using namespace std;

// Function to calculate the value of the cubic polynomial
double cubicFunction(double a, double b, double c, double d, double x) {
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

// Derivative of the cubic function
double cubicDerivative(double a, double b, double c, double x) {
    return 3 * a * pow(x, 2) + 2 * b * x + c;
}

int main() {
    double a, b, c, d;
    cout << "Enter coefficients a, b, c, and d of the cubic equation (ax^3 + bx^2 + cx + d = 0): ";
    cin >> a >> b >> c >> d;

    if (a == 0) {
        cout << "This is not a cubic equation (a cannot be zero)." << endl;
        return 0;
    }

    // Initial guess for Newton-Raphson method
    double x0 = 0.0; // Start with 0
    double epsilon = 1e-6; // Precision
    double root;

    for (int i = 0; i < 100; i++) { // Limit iterations
        double fx = cubicFunction(a, b, c, d, x0);
        double f_prime_x = cubicDerivative(a, b, c, x0);

        // Check if the derivative is 0 to avoid division by zero
        if (fabs(f_prime_x) < epsilon) {
            cout << "Derivative too small, Newton-Raphson may not converge." << endl;
            return 0;
        }

        // Newton-Raphson formula
        double x1 = x0 - fx / f_prime_x;

        // Check for convergence
        if (fabs(x1 - x0) < epsilon) {
            root = x1;
            break;
        }

        x0 = x1;
    }

    cout << fixed << setprecision(6);
    cout << "A root of the equation is approximately: x = " << root << endl;

    // Deflate the cubic equation to a quadratic and find remaining roots
    double p = b / a;
    double q = c / a;
    double r = d / a;
    double quadraticA = 1;
    double quadraticB = p + root;
    double quadraticC = q + root * quadraticB;

    double discriminant = pow(quadraticB, 2) - 4 * quadraticA * quadraticC;

    cout << "The other two roots are: ";
    if (discriminant >= 0) {
        double root1 = (-quadraticB + sqrt(discriminant)) / (2 * quadraticA);
        double root2 = (-quadraticB - sqrt(discriminant)) / (2 * quadraticA);
        cout << "x1 = " << root1 << ", x2 = " << root2 << endl;
    } else {
        cout << "Complex roots." << endl;
        double realPart = -quadraticB / (2 * quadraticA);
        double imaginaryPart = sqrt(-discriminant) / (2 * quadraticA);
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i, "
             << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}


Output:
Enter coefficients a, b, c, and d of the cubic equation (ax^3 + bx^2 + cx + d = 0): 1 1 1 1
A root of the equation is approximately: x = -1.000000
The other two roots are: Complex roots.
x1 = -0.000000 + 1.000000i, x2 = -0.000000 - 1.000000i
