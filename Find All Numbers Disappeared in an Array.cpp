// problem link : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/


/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {4,3,2,7,8,2,3,1}, ans;
    unordered_set<int> us;
    us.insert(nums.begin(), nums.end());
    for (int i = 1; i <=nums.size(); i++)
        if(us.find(i) == us.end())
            ans.push_back(i);
    
    for(int i : ans) cout << i << " ";
    return 0;
}
*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int> us(nums.begin(), nums.end());
        for (int i = 1; i <= nums.size(); i++)
            if (us.find(i) == us.end())
                ans.push_back(i);
        return ans;
    }
};