/**
 * problem link : https://leetcode.com/problems/contains-duplicate-ii/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {1,2,3,1};
    bool flag = false;
    int k = 3;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i + 1; j < nums.size(); j++)
    //     {
    //         if(nums[i] == nums[j]){
    //             if(abs(i - j) <= k){
    //                 flag = true;
    //                 break;
    //             }
                
    //         }
            
    //     }
    // }
    // if(flag) cout << "YES";
    // else cout << "NO";

    // map<int, int> freq;
    // for(int i : nums) freq[i]++;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     vector<int>temp;
    //     if(freq[nums[i]] > 1){
    //         temp.push_back(i);
    //         for (int j = 0; j < temp.size() - 1; j++)
    //         {
    //             if(abs(temp[j] - temp[j + 1]) <= k){
    //                 flag = true;
    //                 break;
    //             }
    //         }
    //     }
    // }

    unordered_map<int, int> Seenbefore;
    for (int i = 0; i < nums.size(); i++)
    {
        if (Seenbefore.count(nums[i]) && abs(i - Seenbefore[nums[i]]) <= k)
        {
            flag = true;
            break;
        }
        Seenbefore[nums[i]] = i;
    }

    if(flag) cout << "YES";
    else cout << "NO";
    
    
    return 0;
}

*/





class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seenBefore;
        for (int i = 0; i < nums.size(); i++) {
            if (seenBefore.count(nums[i]) &&
                abs(i - seenBefore[nums[i]]) <= k) {
               return true;
            }
            seenBefore[nums[i]] = i;
        }
        return false;
    }
};