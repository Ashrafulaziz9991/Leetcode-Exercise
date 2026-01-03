
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> nums = {1,1,2}, nums2;
    if (nums.empty())
    {
        cout << "Empty" << endl;
        return 0;
    }
    int counter = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[counter] = nums[i];
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}
*/

// problem link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int counter = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[counter] = nums[i];
                counter++;
            }
        }
        return counter;
    }
};

// solution : 2 (remove duplicate elements from array / vector) solving way through Builtin function
// for sorted order

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        return nums.size();
    }
};



// solution : 3 (remove duplicate elements from array / vector) solving way through Builtin function
// for sorted order / unsorted order
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> uniqueSet(nums.begin(), nums.end());
        nums.assign(uniqueSet.begin(), uniqueSet.end());
        return nums.size();
    }
};