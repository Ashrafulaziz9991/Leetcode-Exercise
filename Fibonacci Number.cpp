// problem link : https://leetcode.com/problems/fibonacci-number/description/

class Solution {
public:
    int fib(int n) {
        int arr[32];

        if(n == 0) return 0;
        else if(n == 1 || n == 2) return 1;
        else if(arr[n] != 0)
            return arr[n];
        arr[n] = fib(n-1) + fib(n-2);
        return arr[n];
    }
};

/*
class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        else if(n == 1 || n == 2) return 1;
        else return fib(n-1) + fib(n-2);
    }
};
*/