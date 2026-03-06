/** 
 * problem link : https://leetcode.com/problems/majority-element-ii/description/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int>nums = {2,2,1,1,1,2,2};
    // vector<int>nums = {1,2};
    vector<int>v;
    unordered_map<int, int> Num_count;

    int majority = nums.size()/3, count = 0;

    for(auto i : nums){
        Num_count[i]++;
        if(Num_count[i] > majority){
            v.push_back(i);
        }
        // else if (Num_count[i] == majority)
        // {
        //     v.push_back(i);
        // }
        
    }

    for(int i : v) cout << i << " ";
    return 0;
}

*/



class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums;
        int times = n/3;

        unordered_map<int, int> freq;
        for(int i : nums) freq[i]++;
        nums.clear();
        for(auto i : freq){
            if(i.second > times)
                nums.push_back(i.first);
        }
        return nums;
    }
};