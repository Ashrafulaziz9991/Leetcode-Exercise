// problem link : https://leetcode.com/problems/perfect-number/

/*
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int count = 1, sum = 0;
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0){

            count += i;
        }
    }
    if(count == n)
    cout << "YES";
    else cout << "NO";
    
    return 0;
}

*/

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) return false;
        int count = 1;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                count+=i;
            }
        }
        if (count == num)
            return true;
        else
            return false;
    }
};