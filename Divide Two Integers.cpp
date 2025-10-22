// problem link : https://leetcode.com/problems/divide-two-integers/?envType=problem-list-v2&envId=math
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int dividend, divisor;
    cin >> dividend >> divisor;

    if (dividend == INT_MIN && divisor == INT_MIN)
    {
        return 1;
    }
    if (dividend == INT_MIN && divisor < 0)
    {
        long long x, y;
        x = (long long)dividend * (-1) - 1;
        y = (long long)divisor * (-1);
        cout << x / y;
        return 0;
    }
    // else if(dividend == INT_MIN && divisor == INT_MIN) {
    //     long long g = (long long)INT_MIN / INT_MIN;
    //     return g;
    // }
    cout << dividend / divisor;
    return 0;
}

*/


class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend == INT_MIN && divisor == INT_MIN) {
            return 1;
        }

        if (dividend == INT_MIN && divisor < 0) {
            long long x, y;
            x = (long long)dividend * (-1) - 1;
            y = (long long)divisor * (-1);
            return x/y;
        }
        
        return dividend / divisor;
    }
};