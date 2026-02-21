// problem link : https://leetcode.com/problems/first-element-with-unique-frequency/description/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {20,20,10,30,30,30};
    unordered_map<int, int>freq, countfreq;

    for(int i : nums) freq[i]++;
    for(auto i : freq) countfreq[i.second]++;

    for(auto j : nums){
        if(countfreq[freq[j]] == 1)
        {
            cout << j ;
            return 0;
        }
    }

    return 0;
}

*/


class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq, countfreq;

        for (int i : nums)
            freq[i]++;
        for (auto i : freq)
            countfreq[i.second]++;

        for (auto j : nums) {
            if (countfreq[freq[j]] == 1)
                return j;
        }
        return -1;
    }
};