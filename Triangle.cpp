// problem link https://leetcode.com/problems/triangle/description/?envType=daily-question&envId=2025-09-25
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>>triagle = {{2},{3,4},{6,5,7},{4,1,8,3}};
    
    // for (size_t i = 0; i < 4; i++)
    // {
    //     for (size_t j = 4; j > i ; j--)
    //     {
    //         cout << "*";
    //     }
    //     for (size_t k = 0; k <= i; k++)
    //     {
    //         cout << "*";
    //     }
        
    //     cout << endl;
    // }

    // for (size_t i = 0; i < triagle.size(); i++)
    // {
    //     for(int j = 0; j < triagle[i].size(); j++)
    //         cout << triagle[i][j] <<" ";
    //     cout << endl;
    // }
    
    for (int h = 1; h <= triangle.size() ; h++)
    {
        for (int i = triagle[h].size(); i > h ; i--)
        {
            printf(" ");
        }

        for (int k = 1; k<=2*h-1 ; k++)
        {
            // printf("+");
            cout << triagle[h][k] <<" ";
        }
        printf("\n");
    }
    
    return 0;
}
// [2],[3,4],[6,5,7],[4,1,8,3]