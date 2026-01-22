/*

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>nums = {3,2,3,1,2,4,5,5,6}, nums2;
    int k = 4;
    priority_queue<int>pq;
    for(int i : nums) pq.push(i);
    while (!pq.empty())
    {
        nums2.push_back(pq.top());
        pq.pop();
    }
    for(int i : nums2) cout << i << " ";
    cout << endl;
    cout << nums2[k - 1] << endl;
    
    return 0;
}

*/


// problem link : https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int>nums2;
        priority_queue<int> pq;
        for (int i : nums)
            pq.push(i);
        while (!pq.empty()) {
            nums2.push_back(pq.top());
            pq.pop();
        }
        return nums2[k - 1];
    }
};