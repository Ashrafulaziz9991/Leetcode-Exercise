// problem link : https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     // vector<int> nums = {1, 15, 6, 3};
//     vector<int> nums = {1,8,5,6,4,8,4,1,9,10};
//     // int n;cin >> n;
//     // vector<int> nums(n);

//     // for(int i = 0; i < n; i++) cin >> nums[i];

//     int sum = 0, x = 0, sum2 = 0;
//     for (int i : nums)
//         sum += i;
//     // for (auto i : nums){
//     //     if(i >= 10)
//     //         x = x * 100 + i;
//     //     else
//     //         x = x * 10 + i;
//     // }

//     for(auto i : nums){
//         while (i > 0)
//         {
//             int temp = i % 10;
//             x += temp;
//             i /= 10;
//         }
//     }
  
//     // while(x > 0){
//     //     int temp = x % 10;
//     //     sum2 += temp;
//     //     x/=10;
//     // }
    
//     cout << abs(sum - x) << endl;
//     // cout << sum2 << endl;
//     cout << sum << endl;
//     cout << x << endl;
//     return 0;
// }


class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        long long x = 0;
        for (int i : nums)
            sum += i;
        for (auto i : nums) {
            while (i > 0) {
                int temp = i % 10;
                x += temp;
                i /= 10;
            }
        }
        return abs(sum - x);
    }
};