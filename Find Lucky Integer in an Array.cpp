/**
 * 
 * problem link : https://leetcode.com/problems/find-lucky-integer-in-an-array/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {1,2,2,3,3,3};
    unordered_map<int, int>freq;
    for(int i : nums) freq[i]++;

    int mx = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == freq[nums[i]])
            mx = max(mx, nums[i]);
    }
    cout << mx;
    return 0;
}

*/



class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int i : arr)
            freq[i]++;

        int mx = -1;

        for (int i = 0; i < arr.size(); i++)
            if (arr[i] == freq[arr[i]])
                mx = max(mx, arr[i]);
        return mx;
    }
};