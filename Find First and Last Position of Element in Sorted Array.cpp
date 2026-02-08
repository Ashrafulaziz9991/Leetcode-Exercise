// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>nums = {5,7,7,8,8,10}, ans, neg = {-1, -1}, temp;
    int target = 6;

    int cnt = count(nums.begin(), nums.end(), target);

    if (cnt == 1)
    {
        int x;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                x = i;
            }
        }
        ans.push_back(x);
        ans.push_back(x);
    }
    else if (cnt == 2)
    {
        ans.resize(2);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                ans.push_back(i);
            }
        }
    }
        else if (cnt >= 3) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == target) {
                    temp.push_back(i);
                }
            }
            ans.push_back(temp[0]);
            ans.push_back(temp[temp.size() - 1]);
        }

    // for(int i : ans) cout << i << " ";
    if(!ans.empty())
        for(int i : ans) cout << i << " ";
    else
        for(int i : neg) cout << i << " ";
    
    return 0;
}

*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans, neg = {-1, -1}, temp;
        int cnt = count(nums.begin(), nums.end(), target);

        if (cnt == 1) {
            int x;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == target) {
                    x = i;
                }
            }
            ans.push_back(x);
            ans.push_back(x);
        } else if (cnt == 2) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == target) {
                    ans.push_back(i);
                }
            }
        }
        else if (cnt >= 3) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == target) {
                    temp.push_back(i);
                }
            }
            ans.push_back(temp[0]);
            ans.push_back(temp[temp.size() - 1]);
        }
        if (!ans.empty())
            return ans;
        else
            return neg;
    }
};