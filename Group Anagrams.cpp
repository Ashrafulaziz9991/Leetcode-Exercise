// problem link : https://leetcode.com/problems/group-anagrams/description/

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> listt;
vector<string> ls, ls2;

string acsending_order(string &str){
    sort(str.begin(), str.end());
    return str;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s = "tea";
    set<string> st;
    stack<string> anagrams;
    // cin >> s;
    sort(s.begin(), s.end());

    cout << s << endl;

    
    // string s2;
    // cin >> s2;

    ls = {"eat","tea","tan","ate","nat","bat"};

    for(auto i : ls) ls2.push_back(i);

    // sort(s.begin(), s.end());
    // sort(s2.begin(), s2.end());
    // for(auto i : ls)
    //     sort(i.begin(), i.end());
    
    for (size_t i = 0; i < ls.size(); i++)
    {
        sort(ls[i].begin(), ls[i].end());
        st.insert(ls[i]);
    }

    map<string, int>ls2;

    for(auto i : ls){
        ls2[i]++;
    }

    // for (size_t i = 0; i < ls.size(); i++)
    // {
    //     ls2[ls[i]]++;
    //     listt[i].push_back()
    // }

    for (size_t i = 0; i < ls.size(); i++)
    {
        cout << ls[i] <<" : " << ls2[ls[i]] << endl;
    }
    
    // string arr[][] = {s, s2};
    // let's check frst pattern 
    // int n = 50;
    // for (int i = 0; i < n; i++)
    // // for (int i = n; i >=0; i--)
    // {
    //     for (int j = 0; j < n; j++)
    //     // for (int j = n; j >= 0; j--)
    //     {
    //         cout <<"*" ;
    //     }
    //     cout << "\n";
    // }

    for(auto i : ls)
        cout << i << " ";
    
    for(auto i : ls2){
        for(auto j : st){
            if(acsending_order(i) == j){
                listt.push_back(i);
            }
        }
    }
    cout << endl;

    for(auto x : st) cout << x << " ";
    return 0;
}