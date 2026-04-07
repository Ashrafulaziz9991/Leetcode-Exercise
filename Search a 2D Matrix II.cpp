// problem link : https://leetcode.com/problems/search-a-2d-matrix-ii/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size(), n = matrix[0].size();

        // step_2:
        int row = 0;
        int col = n - 1;
        while (row < m && col >= 0) {
            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] < target)
                row = row + 1;
            else
                col = col - 1;
        }

        return false;
    }
};