/****
 * 
 * problem link : https://leetcode.com/problems/n-th-tribonacci-number/
 

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int fun3(int n){
    // tribonacci secuence
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
    return fun3(n - 1) + fun3(n - 2) + fun3(n - 3);
}

int fun2(int n){
    // fibonacci secuence
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fun2(n - 1) + fun2(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cout << fun3(37);
    
    return 0;
}
// 1 1 2 3 5

// 0 1 1 2 4

// 0 1 1 2 4 8 

 */



class Solution {
public:

    int help(int n, vector<int>&v){
        if(n == 0) return 0;
        else if(n == 1 || n == 2) return 1;
        else if(v[n] != 0)
            return v[n];
        v[n] = help(n - 3, v) + help(n-2, v) + help(n - 1, v);
        return v[n];
    }

    int tribonacci(int n) {
        vector<int>trib(n + 1);
        return help(n, trib);
    }
};