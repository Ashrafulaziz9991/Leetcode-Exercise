/**
 * 
 * problem link : https://leetcode.com/problems/sort-array-by-increasing-frequency/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {1,1,2,2,2,3};
    unordered_map<int, int>freq;
    for(int i : nums) freq[i]++;

    // 
    
        // #   sort according to increasing frequency like -- 
            1 1  2 2 2  3
    // times    2     3    1
    // sort ans: 3 1 1 2 2 2 (according to )

    auto compare = [&](int a, int b){
        if(freq[a] == freq[b])
            return a > b; 
        return freq[a] < freq[b];
    };
    sort(nums.begin(), nums.end(), compare);

    for(int i : nums) cout << i <<" ";
    
    return 0;
}
*/


class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i : nums)
            freq[i]++;
        auto compare = [&](int a, int b) {
            if(freq[a] == freq[b])
                return a > b;
            return freq[a] < freq[b];
        };
        sort(nums.begin(), nums.end(), compare);
        return nums;
    }
};