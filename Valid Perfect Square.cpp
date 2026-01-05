
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    double power = 0.5;
    double result = pow(n, power);
    cout << result << endl;;
    // if(typeid(result) == typeid(int))
    if(result == (int)result)
        cout << "YES" <<endl;
    else cout << "NO" <<endl;
    return 0;
}

*/

// problem link : https://leetcode.com/problems/valid-perfect-square/


class Solution {
public:
    bool isPerfectSquare(int num) {
        double power = 0.5;
        double result = pow(num, power);
        if (result == (int)result)
            return true;
        else
            return false;
    }
};