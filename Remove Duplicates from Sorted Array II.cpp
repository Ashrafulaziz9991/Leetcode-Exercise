// problem link : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/


/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {0,0,1,1,1,1,2,3,3}, ans;
    // for (int i = 0; i < nums.size() - 1; i++)
    // {
    //     if(nums[i] != nums[i + 1])
    //         ans.push_back(nums[i]);
    // }

    // for(int it = nums.begin(); it != nums.end(); it++)

    unordered_map<int , int>ump;
    for(int i : nums){
        ump[i]++;
        if(ump[i] <= 2)
            ans.push_back(i);
    }

    // for(int i : ans) cout << i << " ";
    nums.clear();
    // nums.assign(ans.begin(), ans.end());
    nums = ans;

    for(int i : nums) cout << i << " ";

    // int k = 2, idx = 0;

    // for (int i = 0; i < nums.size(); i++)
    // {
        
    // }
    
    return 0;
}

*/



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int, int> ump;
        for (int i : nums) {
            ump[i]++;
            if (ump[i] <= 2)
                ans.push_back(i);
        }
        nums.clear();
        nums = ans;
        return nums.size();
    }
};