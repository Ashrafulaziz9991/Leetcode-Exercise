// problem link : https://leetcode.com/problems/maximum-gap/description/?envType=problem-list-v2&envId=sorting

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     vector<int>nums = {3,6,9,1};
//     sort(nums.begin(), nums.end());
//     int mx = 0;

//     for (int i = 0; i < nums.size() - 1; i++)
//     {
//         mx = max(mx, abs(nums[i] - nums[i + 1]));
//     }
//     cout << mx;
//     return 0;
// }

// problem link : https://leetcode.com/problems/maximum-gap/
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mx = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            mx = max(mx, abs(nums[i] - nums[i + 1]));
        }
        return mx;
    }
};