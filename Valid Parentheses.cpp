
/*
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char now = s[i];
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;
            else if (now == ')' && st.top() == '(')
                st.pop();
            else if (now == '}' && st.top() == '{')
                st.pop();
            else if (now == ']' && st.top() == '[')
                st.pop();
            else
                return false;
        }
    }
    return st.empty();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cout << isValid("()()");
    return 0;
}

*/

// problem link : 


// solution 1 : mine
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i = 0; i < s.size(); i++){
            char now = s[i];
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                else if(now == ')' && st.top() == '(') st.pop();
                else if(now == '}' && st.top() == '{') st.pop();
                else if(now == ']' && st.top() == '[') st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};


// solution 2 : other one's

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(st.empty()) st.push(s[i]);
            else if(s[i] == ')' && st.top() == '(' ) st.pop();
            else if(s[i] == ']' && st.top() == '[' ) st.pop();
            else if(s[i] == '}' && st.top() == '{' ) st.pop();
            else st.push(s[i]);
        }
        return st.empty(); //means if empty --> True..else --> False;
    }
};