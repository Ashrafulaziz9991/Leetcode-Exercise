// problem link : https://leetcode.com/problems/shift-2d-grid/

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> v;
        for (auto i : grid)
            for (int j : i)
                v.push_back(j);

        int n = grid.size(), m = grid[0].size();

        int size=v.size();
        k=k%size;

        rotate(v.begin(), v.end() - k, v.end());
        grid.assign(n, vector<int>(m, 0));

        int idx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=v[idx++];
            }
        }
        return grid;
    }
};