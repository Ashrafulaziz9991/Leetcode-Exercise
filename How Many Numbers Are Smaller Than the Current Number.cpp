/**
 * problem link : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> nums = {8, 1, 2, 2, 3}, ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < nums.size(); j++)
            if (nums[i] > nums[j])
                cnt++;
        ans.push_back(cnt);
    }

    for (int i : ans)
        cout << i << " ";

    return 0;
}

*/





class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            int cnt = 0;
            for(int j = 0; j < nums.size(); j++)
                if(nums[i] > nums[j])
                    cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};