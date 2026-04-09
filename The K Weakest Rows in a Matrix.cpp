// problem link : https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> mat = {{1, 1, 0, 0, 0},
                            {1, 1, 1, 1, 0},
                            {1, 0, 0, 0, 0},
                            {1, 1, 0, 0, 0},
                            {1, 1, 1, 1, 1}};
    int k = 3;
    vector<int>ans;
    set<pair<int, int>> sums;
    
    for (int i = 0; i < mat.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < mat[0].size(); j++)
            sum += mat[i][j];
        sums.insert({sum, i});

    }
    for(auto [sum, idx]: sums)
        ans.push_back(idx);

    ans.resize(k);

    for(int i : ans) cout << i << " ";

    return 0;
}
*/


class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        set<pair<int, int>> sums;

        for (int i = 0; i < mat.size(); i++) {
            int sum = 0;
            for (int j = 0; j < mat[0].size(); j++)
                sum += mat[i][j];
            sums.insert({sum, i});
        }
        for (auto [sum, idx] : sums)
            ans.push_back(idx);
        ans.resize(k);
        return ans;
    }
};