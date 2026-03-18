// problem link : https://leetcode.com/problems/missing-number/description/?envType=problem-list-v2&envId=sorting
/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {8, 6, 2, 4, 0, 3, 1, 5};

    // int mx = *max_element(nums.begin(), nums.end());
    // int mn = *min_element(nums.begin(), nums.end());

    sort(nums.begin(), nums.end());

    // cout << mx <<endl;
    // cout << mn <<endl;
    // cout << nums[0] <<endl;
    // cout << nums[nums.size() - 1] <<endl;

    if(nums[0] == 0 && nums[0] == 1)
        cout << 2 << endl;
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != nums[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
*/

// all of these solutions are based no O(n)

// sol : 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x;
        if (nums[0] == 0 && nums[0] == 1)
            return 2;
        else {
            for (int i = 0; i < nums.size(); i++) {
                if (i != nums[i]) {
                    x = i;
                    break;
                }
            }
        }
        return x;
    }
};

// sol : 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int>freq;
        for(int i : nums) freq[i]++;
        for(int i = 1; i <= nums.size(); i++){
            if(freq[i] == 0)
                return i;
        }
        return 0;
    }
};


// sol : 3
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int>temp(nums.begin(), nums.end());
        for(int i = 1; i <= nums.size(); i++){
            if(temp.count(i) == 0)
                return i;
        }
        return 0;
    }
   
};