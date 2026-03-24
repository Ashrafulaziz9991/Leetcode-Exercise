// problem link : https://leetcode.com/problems/check-if-array-is-good/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>nums = {1, 1};
    // vector<int>nums = {3, 4, 4, 1, 2, 1};
    int cnt = 0, cnt2 = 0;
    sort(nums.begin(), nums.end());
    int mx = *max_element(nums.begin(), nums.end());

    if(nums.size() != mx + 1){
        cout << "Bad";
        return 0;
    }

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if(nums[i] == mx && nums[i] == nums[i + 1])
            cnt++;
        if(nums[i] != mx && nums[i] == nums[i + 1])
            cnt2++;
    }

    if(cnt == 1 && cnt2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO";


    // cout << cnt<<" " << cnt2;
    
    // unordered_map<int, int>freq;
    // for(int i : nums) freq[i]++;
    // int mx = nums[0];

    // for(int i : nums)
    //     if(i > mx)
    //         mx = i;

    // cout << mx << endl;
    // if(nums.size() != mx + 1){
    //     cout << "Bad";
    //     return 0;
    // }
    // // unordered_set<int>ms(nums.begin(), nums.end());
    // multiset<int>ms(nums.begin(), nums.end());

    // if (ms.count(mx) == 2)
    // {
    //     for (int i = 1; i <= nums.size(); i++)
    //     {
    //         if (ms.count(i) == 1 && i != mx)
    //         {
    //             cout << "OK";
    //             return 0;
    //         }
    //     }
    // }

    // cout << "No";


    return 0;
}

*/




class Solution {
public:
    bool isGood(vector<int>& nums) {

        int cnt = 0, cnt2 = 0;
        sort(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        if (nums.size() != mx + 1)
            return false;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == mx && nums[i] == nums[i + 1])
                cnt++;
            if (nums[i] != mx && nums[i] == nums[i + 1])
                cnt2++;
        }

        if (cnt == 1 && cnt2 == 0)
            return true;
        else
            return false;
    }
};