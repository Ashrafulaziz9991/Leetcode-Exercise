// problem link : https://leetcode.com/problems/number-of-good-pairs/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {};
    int count = 0;
    unordered_map<int, int> ump;
    for(int i : nums) cout += ump[i]++;
    cout << count;
    return 0;
}

*/



class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int>ump;
        for(int i : nums) count += ump[i]++;
        return count;
    }
};