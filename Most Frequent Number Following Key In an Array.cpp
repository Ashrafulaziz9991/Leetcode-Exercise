// problem link : https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // vector<int>nums = {1,100,200,1,100};
    vector<int>nums = {2,2,2,2,3};
    // int key = 1;
    int key = 2;

    unordered_map<int, int>freq;
        for(int i = key; i <= nums.size(); i++){
            freq[nums[i]]++;
        }

        int mx_key = 0, mx_val = 0;
        for (auto [key, val] : freq) {
            if (val > mx_val) {
                mx_val = val;
                mx_key = key;
            }
        }

        cout << mx_key;
        cout << mx_val;
    return 0;
}

*/




class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == key)
                freq[nums[i + 1]]++;
        }

        int mx_key = 0, mx_val = 0;
        for (auto [key, val] : freq) {
            if (val > mx_val) {
                mx_val = val;
                mx_key = key;
            }
        }
        return mx_key;
    }
};