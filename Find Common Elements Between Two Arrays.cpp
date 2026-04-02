// problem link : https://leetcode.com/problems/find-common-elements-between-two-arrays/description/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums1 = {4,3,2,3,1};
    vector<int>nums2 = {2,2,5,2,3,6};

    auto it = [](vector<int> v1, vector<int> v2)
    {
        unordered_set<int> ust(v2.begin(), v2.end());
        int count = 0;
        for (int i : v1)
            if (ust.find(i) != ust.end())
                count++;
        return count;
    };

    vector<int>res = {it(nums1, nums2), it(nums2, nums1)};

    for(int i : res) cout << i << " ";
    
    return 0;
}
*/

class Solution {
public:
    int common_element(vector<int>& v1, vector<int>& v2){
        unordered_set<int> ust(v2.begin(), v2.end());
        int count = 0;
        for (int i : v1)
            if (ust.find(i) != ust.end())
                count++;
        return count;
    }
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        return {common_element(nums1, nums2), common_element(nums2,nums1)};
    }
};