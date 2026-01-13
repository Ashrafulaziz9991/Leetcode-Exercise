/*
#include <bits/stdc++.h>
using namespace std;

int digit_count(int num){
    int cnt = 0;
    while (num > 0)
    {
        int temp = num % 10;
        num/=10;
        cnt++;
    }
    return cnt;
}

int fun(int n){
    if(n == 0 || digit_count(n) == 1) return n;
    int sum = 0;
    while (n > 0)
    {
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return fun(sum);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << fun(n);

    return 0;
}

*/

// problem link : https://leetcode.com/problems/add-digits/

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
            sum += temp;
            num /= 10;
        }
        return addDigits(sum);
    }
};