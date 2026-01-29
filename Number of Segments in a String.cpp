// problem link : https://leetcode.com/problems/number-of-segments-in-a-string/


/**
#include <bits/stdc++.h>
using namespace std;

int countSegments(string s)
{
    int counter = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (((i == 0) || (s[i - 1] == ' ')) && s[i] != ' ')
            counter++;
    }
    return counter;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    cout << countSegments(s);
    return 0;
}
*/



// counting every segment in a string

class Solution {
public:
    int countSegments(string s) {
        int counter = 0;
         for(int i = 0; i < s.size(); i++){
            if(((i==0) || (s[i - 1] == ' ')) && s[i] != ' ')
                counter++;
         }
        return counter;
    }
};