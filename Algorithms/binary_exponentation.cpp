#include <iostream>
using namespace std;

double fastExp(double x, int n) {
    if (n == 0) return 1;
    if (x == 0) return 0;

    bool isNegative = (n < 0);
    long long exp = abs(n); 
    double result = 1;

    while (exp > 0) {
        if (exp % 2 == 1)
            result *= x;
        x *= x;
        exp /= 2;
    }

    return isNegative ? 1.0 / result : result;
}

int main() {
    double base;
    int exponent;
    cout << "Enter the number to be exponentiated: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << "The exponentiation of " << base << " by " << exponent << " is "
         << fastExp(base, exponent) << endl;

    return 0;
}
