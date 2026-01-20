
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
    vector<int>nm;
    
    int count = 0;

    while (n > 0)
    {
        // cout << n << " ";
        if(n % 2 == 0){
            n/=2;
            nm.push_back(n);
            count++;
        }
        else{
            n = n - 1;
            nm.push_back(n);
            count++;
        }
        cout << n << " ";
    }
    cout << endl;
    for(int i : nm) cout << i << " ";
    cout << endl;
    cout << count;
    
    return 0;
}

*/

// problem link : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;

        while (num > 0) {
            // cout << n << " ";
            if (num % 2 == 0) {
                num /= 2;
                count++;
            } else {
                num = num - 1;
                count++;
            }
        }
        return count;
    }
};