#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, str;
    cin >> s;

    // set<int> st = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // string s = " -42", str;

    if (!isdigit(s[0]) && s[0] != '+' && s[0] != '-' && s[0] != ' ' && s[0] != '.')
        cout << 0 << endl;
    else
    {
        if (s[0] == ' ')
        {
            int i = 0;
            while (s[i] == ' ')
                i++;
            s = s.substr(i);
        }

        if (s[0] == '+' || s[0] == '-')
        {
            str += s[0];
            for (int i = 1; i < s.size(); i++)
            {
                // if (!isdigit(s[i]))
                //     continue;
                if (isdigit(s[i]))
                    str.push_back(s[i]);
                else
                    break;
            }
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                // if (!isdigit(s[i]))
                //     continue;
                if (isdigit(s[i]))
                    str.push_back(s[i]);
                else
                    break;
            }
        }
    }
    int y = stoi(str);
    cout << stoi(str) << endl;
    return 0;
}