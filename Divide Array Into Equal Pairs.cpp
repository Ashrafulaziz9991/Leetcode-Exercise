/**
 * problem link : https://leetcode.com/problems/divide-array-into-equal-pairs/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int>nums = {18,19,5,5,18,19,5,6,12,19,13,4,16,11,4,16,10,8,12,8,2,1,8,17,4,18,3,5,16,2,16,12,17,16,7,16,2,17,19,9,1,20,17,17,4,6};
    unordered_map<int, int>freq;

        for(int i : nums) freq[i]++;
        // for(int i : nums)
        //     if(freq[i] % 2 == 0)

    for(auto[k, v] : freq)
        cout << k << " " << v << endl;
    return 0;
}

*/


class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int>freq;

        for(int i : nums) freq[i]++;
        for(int i : nums)
            if(freq[i] % 2 != 0)
                return false;
        return true;;
    }
};