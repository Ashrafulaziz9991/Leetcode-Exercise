/*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int row, col, count = 0;
    cin >> row >> col;
    // initiall process to declare 2d Vector, as well as matrix[row][col] another process
    vector<vector<int>> matrix(row, vector<int>(col));
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> matrix[i][j];
            
        }
    }

    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout <<  matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // for(int i = 0; i < row; i++){
    //     for (int j = 0; j < col; j++){
    //         if(matrix[i][j] < 0) count++;
    //     }
    // }

    cout << count; 
    return 0;
}

/*
4 4
4,3,2,-1  3,2,1,-1  1,1,-1,-2 -1,-1,-2,-3
*/

// problem link : https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(vector<int> i : grid){
            for(int j : i){
                if(j < 0)
                    count++;
            }
        }
        return count;
    }
};