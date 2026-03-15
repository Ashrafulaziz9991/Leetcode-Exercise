/**
#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};

bool is_safe(pair<int, int> coord, int n, int m, vector<vector<int>>temp, vector<vector<int>>visited)
{
    int x = coord.first;
    int y = coord.second;

    if (x >= 0 && x < n && y >= 0 && y < m && temp[x][y] != -1 && visited[x][y] == 0)
        return true;
    return false;
}


void dfs(pair<int, int> coord, int n, int m, vector<vector<int>>temp, vector<vector<int>>visited){
    visited[coord.first][coord.second] = 1;
    int x = coord.first;
    int y = coord.second;


    for (int i = 0; i < 4; i++)
    {
        int new_x = dx[i] + x;
        int new_y = dy[i] + y;

        pair<int, int>adj_node = {new_x, new_y};

        if(x >= 0 && x < n && y >= 0 && y < m && temp[x][y] != -1 && visited[x][y] == 0){
            dfs(adj_node, n, m, temp, visited);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<char>>grid = {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };
    int n = grid.size(), m = grid[0].size();

    vector<vector<int>>temp(grid.size(), vector<int>(grid[0].size(), 0));
    vector<vector<int>>visited(grid.size(), vector<int>(grid[0].size(), 0));
    // for(auto i : grid){
    //     for(auto j : i){
    //         if(j == '')
    //     }
    // }

    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[i].size(); j++)
            if (grid[i][j] == '0')
                temp[i][j] = -1;

    // for(auto i : temp){
    //     for(auto j : i){
    //         cout << j <<"\t";
    //     }
    //     cout << endl;
    // }

    int room_count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(visited[i][j] == 0 && grid[i][j] == 0){
                pair<int, int>src = {i, j};
                dfs(src, n, m, temp, visited);
                room_count++;
            }
        }
    }

    cout << room_count;

    //  vector<vector<int>> temp(grid.size(), vector<int>(grid.size(), 0));

    // // Fill temp: -1 where grid has '0'
    // for (int i = 0; i < grid.size(); i++)
    //     for (int j = 0; j < grid[i].size(); j++)
    //         if (grid[i] [j] == '0')
    //             temp[i] [j] = -1;

    // // ✅ Print full output
    // for (const auto& row : temp) {
    //     for (const auto& val : row) {
    //         cout << val << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}

*/

/*

*****Right potion of the code of the problem*****

#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, 1,-1};
int dy[] = {1,-1, 0, 0};

void dfs(pair<int, int> coord, int n, int m, vector<vector<char>>&grid, vector<vector<int>>&visited){
    visited[coord.first][coord.second] = 1;
    int x = coord.first;
    int y = coord.second;


    for (int i = 0; i < 4; i++)
    {
        int new_x = dx[i] + x;
        int new_y = dy[i] + y;

        pair<int, int>adj_node = {new_x, new_y};

        if(new_x >= 0 && new_x < n && new_y >= 0 && new_y < m && grid[new_x][new_y] == '1' && visited[new_x][new_y] == 0){
            dfs(adj_node, n, m, grid, visited);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<char>>grid = {
        {'1','1','0','0','0'},
    {'1','1','0','0','0'},
    {'0','0','1','0','0'},
    {'0','0','0','1','1'}
    };

    int n = grid.size(), m = grid[0].size();

    vector<vector<int>>temp(n, vector<int>(m, 0)), visited(n, vector<int>(m, 0));

    int room_count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(visited[i][j] == 0 && grid[i][j] == '1'){
                pair<int, int>src = {i, j};
                dfs(src, n, m, grid, visited);
                room_count++;
            }
        }
    }

    cout << room_count;
    return 0;
}
*/



class Solution {
public:
    

    void dfs(pair<int, int> coord, int n, int m, vector<vector<char>>& grid,
        vector<vector<int>>& visited) {
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        visited[coord.first][coord.second] = 1;
        int x = coord.first;
        int y = coord.second;

        for (int i = 0; i < 4; i++) {
            int new_x = dx[i] + x;
            int new_y = dy[i] + y;

            pair<int, int> adj_node = {new_x, new_y};

            if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < m &&
                grid[new_x][new_y] == '1' && visited[new_x][new_y] == 0) {
                dfs(adj_node, n, m, grid, visited);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();

        vector<vector<int>> temp(n, vector<int>(m, 0)),
            visited(n, vector<int>(m, 0));

        int room_count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j] == 0 && grid[i][j] == '1') {
                    pair<int, int> src = {i, j};
                    dfs(src, n, m, grid, visited);
                    room_count++;
                }
            }
        }

        return room_count;
    }
};