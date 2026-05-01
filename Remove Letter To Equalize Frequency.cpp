// problem link : 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string word = "aazz";
    unordered_map<char, int> ump;
    unordered_map<int, int> count_ump;
    for(char &c : word) ump[c]++;
    for(auto i : ump) count_ump[i.second]++;
    bool flag = true;

    for(char &c : word){
        if(ump[c] >= 2 && count_ump[ump[c]] >= 2){
            cout << "Not ok ";
            return 0;
        }
    }

    cout << "ok ";

    return 0;
}