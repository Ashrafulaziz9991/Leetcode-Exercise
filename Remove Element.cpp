/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {0,1,2,2,3,0,4,2};
    int k = 2;

    auto idx = remove(nums.begin(), nums.end(), k);

    nums.erase(idx, nums.end());

    for(auto i : nums) cout << i << " ";
    return 0;
}
*/

// problem link : https://leetcode.com/problems/remove-element/?envType=problem-list-v2&envId=array

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto idx = remove(nums.begin(), nums.end(), val);
        nums.erase(idx, nums.end());
        return nums.size();
    }
};