// problem link : https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/


/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> matrix = {{1,5,9},{10,11,13},{12,13,15}};
    int k;
    vector<int>ans;

    for (auto &i : matrix)
    {
        for (int &j : i)
            ans.push_back(j);
    }
    sort(ans.begin(), ans.end());
    for(int i : ans) cout << i << " ";
    return 0;
}
*/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        for (auto& i : matrix) {
            for (int& j : i) {
                ans.push_back(j);
            }
        }
        sort(ans.begin(), ans.end());
        return ans[k-1];
    }
};