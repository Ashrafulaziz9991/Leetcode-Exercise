/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {0,1,0,3,12};
    vector<int>ans;
    for(int i : nums){
        int x = i;
        if(x != 0) ans.push_back(x);
    }
    for(int i : nums){
        int x = i;
        if(x == 0) ans.push_back(x);
    }
    nums.clear();
    nums = ans;
    for(int i : nums) cout << i << " ";
    return 0;
}

*/

// problem link : https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for (int i : nums) {
            int x = i;
            if (x != 0)
                ans.push_back(x);
        }
        for (int i : nums) {
            int x = i;
            if (x == 0)
                ans.push_back(x);
        }
        nums.clear();
        nums = ans;
        for (int i : nums)
            cout << i << " ";
    }
};