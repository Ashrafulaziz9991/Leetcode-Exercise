
/*
#include <bits/stdc++.h>
using namespace std;

bool is_valid(string &str)
{

    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        char now = str[i];
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else if (now == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (now == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (now == ']' && st.top() == '[')
            {
                st.pop();
            }
        }
    }

    if (st.empty())
        return true;
    else 
        return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string braket = "()";

    string s;

    for (int i = 0; i < n; i++)
        s+=braket;

    vector<string>val;

    sort(s.begin(), s.end()); // Start from smallest permutation

    // Check the first permutation
    if (is_valid(s))
        val.push_back(s);

    while (next_permutation(s.begin(), s.end()))
    {
        if(is_valid(s))
            val.push_back(s);
    }

    for(const string &word : val){
        cout << word << endl;
    }
    // cout << is_valid(s);
    return 0;
}
*/

// problem link : https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    bool is_valid(string& str) {
        stack<char> st;
        for (int i = 0; i < str.size(); i++) {
            char now = str[i];
            if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
                st.push(str[i]);
            } else {
                if (st.empty()) {
                    return false;
                } else if (now == ')' && st.top() == '(') {
                    st.pop();
                } else if (now == '}' && st.top() == '{') {
                    st.pop();
                } else if (now == ']' && st.top() == '[') {
                    st.pop();
                }
            }
        }

        if (st.empty())
            return true;
        else
            return false;
    }

    vector<string> generateParenthesis(int n) {
        string braket = "()";
        string s;
        for (int i = 0; i < n; i++)
            s += braket;

        vector<string> val;

        sort(s.begin(), s.end()); // Start from smallest permutation

        // Check the first permutation
        if (is_valid(s))
            val.push_back(s);

        while (next_permutation(s.begin(), s.end())) {
            if (is_valid(s))
                val.push_back(s);
        }
        return val;
    }
};