#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    // vector<vector<int>> matrix = {
    //     { 1,  2,  3,  4},
    //     {12, 13, 14,  5},
    //     {11, 16, 15,  6},
    //     {10,  9,  8,  7}
    // };

    // vector<int> result;
    // for (auto &&i : matrix)
    // {
    //     for (auto &&j : i){
    //         // cout << j << "\t";
    //         result.push_back(j);
    //     }
    // }
    // for(auto x: result) cout << x << " ";
    // lets test with pairs

    
    int n = 4;
    vector<vector<pair<int, int>>> matrix(n, vector<pair<int, int>>(n, {0, 0}));
    vector<vector<int>> result(n, vector<int>(n, 0));

    // for (auto &&i : matrix)
    // {
    //     for (auto &&j : i){
    //         // cout << j.first << "," << j.second << "\t";
    //         // matrix.push_back({i, j});
    //         // matrix.push_back({j.first, j.second});
    //         matrix[i][j] = {i, j};
    //     }
    //     cout << "\n";
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = {i, j};
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j].first << "," << matrix[i][j].second << "\t";
        }
        cout << "\n";
        
    }

    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right)
    {
        
    }
    
    
    
    
    return 0;
}