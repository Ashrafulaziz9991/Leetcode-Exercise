/**
 * Newton–Raphson (Universal Root finding Method)
 * it works for any n-th root value of a Number
 */

#include <iostream>
#include <cmath>
using namespace std;

double nthRoot(double A, int n)
{
    double x = A;      // initial guess
    double eps = 1e-6; // precision

    while (true)
    {
        double x_next = ((n - 1) * x + A / pow(x, n - 1)) / n;
        if (abs(x - x_next) < eps)
            break;
        x = x_next;
    }
    return x;
}

bool isPowerOfK(int n, int k)
{
    if (n <= 0 || k <= 1) return false;

    while (n % k == 0)
        n /= k;

    return n == 1;
}


int main()
{
    cout << "Square root of 25: " << nthRoot(25, 2) << endl;
    cout << "Cube root of 81: " << nthRoot(81, 2) << endl;
    cout << "4th root of 16: " << nthRoot(16, 2) << endl;

    cout << isPowerOfK(4, 4) ;
}
