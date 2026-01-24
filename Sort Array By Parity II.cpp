
/**
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

    vector<int> nums = {4, 2, 5, 7}, ans; 
    stack<int>even, odd;
    for (int i : nums)
    {
        if (i % 2 == 0)
            even.push(i);
        if (i % 2 != 0)
            odd.push(i);
    }    
    while (!even.empty() && !odd.empty())
    {
        int x = even.top();
        int y = odd.top();
        even.pop();
        odd.pop();
        ans.push_back(x);
        ans.push_back(y);
    }

    for(int i : ans) cout << i << " "; 
    

    return 0;
}

*/



// problem kink : https://leetcode.com/problems/sort-array-by-parity-ii/


class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans;
        stack<int> even, odd;
        for (int i : nums) {
            if (i % 2 == 0)
                even.push(i);
            if (i % 2 != 0)
                odd.push(i);
        }
        while (!even.empty() && !odd.empty()) {
            int x = even.top();
            int y = odd.top();
            even.pop();
            odd.pop();
            ans.push_back(x);
            ans.push_back(y);
        }
        return ans;
    }
};