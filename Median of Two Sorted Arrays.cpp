/*
problem link https://leetcode.com/problems/median-of-two-sorted-arrays/description/
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    

    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};

    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    
    sort(nums1.begin(), nums1.end());
    int n = nums1.size();

    double median;
    if (n % 2 != 0)
        median = nums1[n / 2];
    else
        median = (nums1[(n - 1) / 2] + nums1[n / 2]) / 2.0;

    cout << median << "\n";

    // for (auto &&i : num3)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n";

    return 0;
}
*/
/*

asuming n = size of array
if n is odd
median = arr[n/2]  // 0 based indexing
if n is even
median = (arr[(n-1)/2] + arr[n/2]) / 2.0
8-1/2 = 3.5 ~ 3
8 / 2 = 4
*/

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        for(auto &&i : nums2)
            nums1.push_back(i);
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();

        double median;
        if (n % 2 != 0)
            median = nums1[n / 2];
        else
            median = (nums1[(n - 1) / 2] + nums1[n / 2]) / 2.0;
        return median;
    }
};