#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // vector<vector<int>> matrix = {{3,7,8},{9,11,13},{15,16,17}};
    vector<vector<int>> matrix = {{1,10,4,2},{9,3,8,7},{15,16,17,12}};

    sort(matrix.begin(), matrix.end());

    // for(auto& i : matrix){
    //     sort(i.begin(), i.end());
    // }

    for(auto &i : matrix){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl;
    }

    int n = matrix.size();

    // cout << matrix[n - 1][0];
    vector<int> tmp = matrix[n - 1];
    int lucky = *min_element(tmp.begin(), tmp.end());
    cout << lucky;
    return 0;
}