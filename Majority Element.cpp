/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {2,2,1,1,1,2,2};
    unordered_map<int, int> Num_count;

    int majority = nums.size()/2;

    for(auto i : nums){
        Num_count[i]++;
        if(Num_count[i] > majority){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
*/

// problem link : https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> Num_count;

        int majority = nums.size() / 2;

        for (auto i : nums) {
            Num_count[i]++;
            if (Num_count[i] > majority)
                return i;
        }
        return -1;
    }
};