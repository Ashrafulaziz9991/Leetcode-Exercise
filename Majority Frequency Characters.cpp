#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "aaabbbccdddde";
    unordered_map<char, int>freq, count_freq;

    for(char &c : s)
        freq[c]++;

    string tmp = "";
    char C;
    vector<int>arr;

    int mx = 0;

    for(auto [k, v] : freq){
        // cout << k << " " << v << endl;
        // if(v > mx){
        //     C = k;
        //     mx = v;
        // }
        arr.push_back(v);
    }

    for(auto [k, v]: freq)
        count_freq[v]++;

    for (int i = 0; i < s.size(); i++)
    {
        if(count_freq[freq[s[i]]] > mx)
            C = s[i];
    }

    cout << C;
    



    // cout << C <<" " <<mx;
    return 0;
}