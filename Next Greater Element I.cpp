// https://leetcode.com/problems/next-greater-element-i/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums1 = {4,1,2};
    vector<int>nums2 = {1,3,4,2}, ans;

    int n = nums1.size(), m = nums2.size();

    for (int i = 0; i < /*(m > n ? m : n)*/n; i++)
    {
        int x = nums1[i];
        for (int j = 0; j < m/*(m < n ? m : n)*/; j++)
        {
            if(nums2[j] > x){
                ans.push_back(nums2[j]);
            }
            else if(nums2[j] <= x)
                ans.push_back(-1);
            else
                i++;
        }
    }
    
    for(int i : ans) cout << i << " ";
    return 0;
}

/**
 * 
 * next is https://leetcode.com/problems/next-greater-element-ii/description/
 * 
 * letar https://leetcode.com/problems/next-greater-element-iii/description/
 */