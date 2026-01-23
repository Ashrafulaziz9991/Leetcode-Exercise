#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n = 4;
    // vector<vector<int>> matrix(n, vector<int>(n, 0));

    vector<vector<int>> matrix = {
        { 1,  2,  3,  4},
        {12, 13, 14,  5},
        {11, 16, 15,  6},
        {10,  9,  8,  7}
    };

    // for (int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //         cin >> matrix[i][j];
    // }

    for (auto &&i : matrix)
    {
        for (auto &&j : i)
            cout << j << "\t";
        cout << "\n";
    }
    return 0;
}

/*
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) 
    {
        // left to right
        for (int i = left; i <= right; i++)
            matrix[top][i] = num++;
        top++;
        // top to bottom
        for (int i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;
        // right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                matrix[bottom][i] = num++;
            bottom--;
        }
        // bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                matrix[i][left] = num++;
            left++;
        }
    }
*/