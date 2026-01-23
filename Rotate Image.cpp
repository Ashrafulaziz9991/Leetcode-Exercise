// problem link : https://leetcode.com/problems/rotate-image/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    
    // int row = 3, colum = 3;
    // // int arr[row][colum];

    // vector<vector<int>>arr(row, vector<int>(colum));
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= colum; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // } 

    

// 5 6 3
// 7 9 1
// 2 4 8

    vector<vector<int>> matrix = {
        {1,2,3},{4,5,6},{7,8,9}
    }, mat2;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = matrix.size() - 1; i >= 0; i--)
    {
        mat2.push_back(matrix[i]);
        for (int j = 0; j < matrix[i].size(); j++)
        {
            mat2[i].push_back(matrix[i][j]);
        }
        
    }


    for (int i = 0; i < mat2.size(); i++)
    {
        for (int j = 0; j < mat2[i].size(); j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    
    
    

    
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < colum; j++)
    //     {
    //         cout << arr[i][j] <<"\t";
    //     }
    //     cout << endl;
    // }
    
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << arr[i][j] <<"\t";
    //     }
    //     cout << endl;
    // }

    // for(int x : matrix){
    //     for (auto &&i : x)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // cin >> row >> colum;

    return 0;
}
