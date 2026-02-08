// problem link : https://leetcode.com/problems/rotate-image/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> matrix = {
        {1,2,3},{4,5,6},{7,8,9}
    }, mat2;

    for (int j = 0; j < matrix.size(); j++) // Loop through columns
    {
        vector<int> temp;
        for (int i = matrix.size() - 1; i >= 0; i--) // Loop through rows (bottom to top)
        {
            temp.push_back(matrix[i][j]); // Access j-th element of each row
        }
        mat2.push_back(temp);
    }

    // for(auto i : matrix){
    //     for(int j : i){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    for(auto i : mat2){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl;
    }

    // for(auto i : mat2){
    //     for(int j : i){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    cout << matrix.size();
    return 0;
}


*/

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        vector<vector<int>> mat2;

        for (int j = 0; j < matrix.size(); j++)
        {
            vector<int> temp;
            for (int i = matrix.size() - 1; i >= 0; i--)
            {
                temp.push_back(matrix[i][j]);
            }
            mat2.push_back(temp);
        }

        matrix.clear();
        matrix = mat2;

        for (auto i : matrix)
        {
            for (int j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};