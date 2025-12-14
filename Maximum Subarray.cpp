
/*
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int>&nums, int x, int curr, int mx){
    // int curr = 0, mx = INT_MIN;
    if(x == nums.size())
        return mx;
    curr = max(nums[x], curr + nums[x]);
    mx = max(mx, curr);
    return fun(nums, x + 1, curr, mx);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << fun(nums, 0, 0, INT_MIN) << endl;
    return 0;
}
*/

// problem link : https://leetcode.com/problems/maximum-subarray/description/?envType=problem-list-v2&envId=dynamic-programming

class Solution {
public:
    int fun(vector<int>& nums, int x, int curr, int mx) {
        if (x == nums.size())
            return mx;
        curr = max(nums[x], curr + nums[x]);
        mx = max(mx, curr);
        return fun(nums, x + 1, curr, mx);
    }

    int maxSubArray(vector<int>& nums) {
        return fun(nums, 0, 0, INT_MIN);
    }
};