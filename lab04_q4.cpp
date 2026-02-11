// CIS150 Lab 04 - Question 4
// Quadratic roots calculator

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a;
    double b;
    double c;

    cout << "Enter a, b and c which represent the coefficients in the quadratic equation\n"
         << "ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;

    if (a == 0 || (b * b < 4 * a * c)) {
        cout << "No real root" << endl;
    } else {
        double discriminant = b * b - 4 * a * c;
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << fixed << setprecision(6);
        cout << "Root1 is " << root1 << endl;
        cout << "Root2 is " << root2 << endl;
    }

    return 0;
}
