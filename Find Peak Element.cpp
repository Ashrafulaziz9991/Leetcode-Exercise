// problem link : https://leetcode.com/problems/find-peak-element/description/?envType=problem-list-v2&envId=binary-search

// #include <iostream>
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {1,2,3,1};
    // vector<int>nums = {1,2,1,3,5,6,4};
    int peak = nums[0], index;
    for (int i = 1; i < nums.size() ; i++)
    {
        if(nums[i] > peak){
            peak = nums[i];
            index = i;
        }
        if(nums[index + 1] < nums[i]){
            // peak = mx;
            break;
        }
    }
    cout << peak << endl;
    cout << index << endl;
    
    return 0;
}
*/


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int high = nums.size() - 1, low = 0;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[mid + 1])
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};