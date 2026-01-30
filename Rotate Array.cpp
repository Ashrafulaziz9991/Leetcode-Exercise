/**

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> nums = {-1,-100,3,99}, ans;
    
    // time limit exceed
    int n = nums.size(), k = 2;
    int level = n - k;

    // for (int i = n - k; i < n; i++)
    // {
    //     ans.push_back(nums[i]);
    // }
    
    // for (int i = 0; i < k; i++)
    // {
    //     int x = nums[n - 1];
    //     nums.insert(nums.begin(), x);
    //     nums.pop_back();
    // }

    // 

    // nums.resize(nums.size() - k);

    ans.insert(ans.begin(), nums.begin()+ (n - k), nums.end());

    nums.resize(nums.size() - k);
    nums.insert(nums.begin(), ans.begin(), ans.end());
    
    for(int i : nums) cout << i << " ";
    // cout << endl;
    // for(int i : ans) cout << i << " ";
    return 0;
}

*/


// rpoblem link : https://leetcode.com/problems/rotate-array/


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        for (int i : nums)
            cout << i << " ";
    }
};