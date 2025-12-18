// problem link : https://leetcode.com/problems/climbing-stairs/description/


class Solution {
public:

    int fib(int n, vector<int>&arr) {
        if(n <= 2) return n;
        else if(arr[n] != 0)
            return arr[n];
        arr[n] = fib(n-1, arr) + fib(n-2, arr);
        return arr[n];
    }
    int climbStairs(int n) {
        vector<int>v(n+1);
        return fib(n, v);
    }
};


/*
#include <bits/stdc++.h>
using namespace std;

// int fib(int x){
//     // if(x <= 2) return 1;
//     // return x + fib(x - 1); 
//     int t, count = 0, e = 1;
//     if(t == 0)
//         return count;
//     t = x - e;
//     e--;
//     return count + fib(x);
// }

// int climbStairs(int num){
//     if(num == 0) return 0;
//     else if(num == 1) return 1;
//     else if(num == 2) return 2;
//     else if(num == 3) return 3;
//     return 1 + (num - 1) + climbStairs(num - 2);
// }

// int fun(int x){
//     int round = ceil(x/2);
//     if(x == round) return round;
//     return x + fun(x-1);
// }


int fun(int n){
    if(n <= 2) return n;
    int first = 1, sec = 2;
    for (size_t i = 3; i <= n; i++)
    {
        int thrd = first + sec;
        first = sec;
        sec = thrd;
    }
    return sec;
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