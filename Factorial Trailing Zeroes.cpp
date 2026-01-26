// problem link : https://leetcode.com/problems/factorial-trailing-zeroes/

/**
#include <bits/stdc++.h>
using namespace std;

int trailingZeroes(int n)
{
    int counter = 0;
    while (n > 0)
    {
        n /= 5;
        counter += n;
    }
    return counter;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << trailingZeroes(n);
    return 0;
}
*/

class Solution {
public:
    int trailingZeroes(int n) {
        int counter = 0;
        while(n > 0){
            n /= 5;
            counter+= n;
        }
        return counter;
    }
};