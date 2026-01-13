
/*
#include <bits/stdc++.h>
using namespace std;

double nthRoot(double A)
{
    int power = 4;
    double x = A;      // initial guess
    double eps = 1e-6; // precision

    while (true)
    {
        double x_next = ((power - 1) * x + A / pow(x, power - 1)) / power;
        if (abs(x - x_next) < eps)
            break;
        x = x_next;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    // double power = 0.25;
    // double result = pow(n, power);
    // cout << result;
    // // if(typeid(result) == typeid(int))
    // if(result == (int)result)
    //     cout << "YES" <<endl;
    // else cout << "NO" <<endl;
    return 0;
}

*/

// problrm link : https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        while(n % 4 == 0) n/=4;
        return n == 1;
    }
};