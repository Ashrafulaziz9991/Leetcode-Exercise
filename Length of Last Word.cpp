// problem link https://leetcode.com/problems/length-of-last-word/description/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    getline(cin, str);

    int count = 0, position;

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == ' '){
            count++;
            position = max(INT_MIN, i);
        }

    }
    
    string str2;

    for (int i = position+1; i < str.size(); i++)
    {
        str2.push_back(str[i]);
    }
    
    cout << str2.size() <<endl;
    cout << count <<endl;
    cout << position;
    return 0;
}
    */


/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, word, word2 = "";
    getline(cin, s);

    stringstream SS(s);

    vector<string>vec;

    while (SS >> word)
    {
        // cout << word << endl;
        vec.push_back(word);
    }

    int n = vec.size();

    cout << n <<endl;
    // cout << vec[n-1] <<endl;

    word2 += vec[n-1];

    cout << word2 <<endl;
    cout << word2.size() <<endl;
    return 0;
}

*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>vstr;
        string word, s2 = "";
        stringstream ss(s);
        while(ss >> word){
            vstr.push_back(word);
        }
        s2 += vstr[vstr.size() - 1];
        return s2.size();
    }
};