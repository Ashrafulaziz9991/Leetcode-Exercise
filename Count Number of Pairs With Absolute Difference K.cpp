// problem link : https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {1,2,2,1};
    int k = 1, cnt = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if(abs(nums[i] - nums[j]) == k)
                cnt++;
            // cout << abs(nums[i] - nums[j]) << " ";
        }
        // cout << endl;
    }

    cout << cnt;
    
    return 0;
}

*/



class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
            for (int j = i + 1; j < nums.size(); j++)
                if (abs(nums[i] - nums[j]) == k)
                    cnt++;
        return cnt;
    }
};