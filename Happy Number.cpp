
/*
#include <bits/stdc++.h>
using namespace std;

int digit_count(int num)
{
    int cnt = 0;
    while (num > 0)
    {
        int temp = num % 10;
        num /= 10;
        cnt++;
    }
    return cnt;
}

int addDigits(int num)
{
    if (num == 0 || digit_count(num) == 1)
        return num;
    int sum = 0;
    while (num > 0)
    {
        int temp = num % 10;
        int x = pow(temp, 2);
        sum += x;
        num /= 10;
    }
    return addDigits(sum);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(addDigits(n) == 1 || addDigits(n) == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}

*/

// problem link : https://leetcode.com/problems/happy-number/


class Solution {
public:
    int digit_count(int num) {
        int cnt = 0;
        while (num > 0) {
            int temp = num % 10;
            num /= 10;
            cnt++;
        }
        return cnt;
    }

    int addDigits(int num) {
        if (num == 0 || digit_count(num) == 1)
            return num;
        int sum = 0;
        while (num > 0) {
            int temp = num % 10;
            int x = pow(temp, 2);
            sum += x;
            num /= 10;
        }
        return addDigits(sum);
    }

    bool isHappy(int n) {
        if(addDigits(n) == 1 || addDigits(n) == 7) return true;
        else return false;
    }
};