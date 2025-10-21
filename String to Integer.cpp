// // problem link : 
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     string s, str;
//     cin >> s;
//     // set<int> st = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     // string s = " -42", str;
//     if (!isdigit(s[0]) && s[0] != '+' && s[0] != '-' && s[0] != ' ' && s[0] != '.'){
//         cout << 0 << endl;
//         return 0;
//     }
//     else
//     {
//         if (s[0] == ' ')
//         {
//             int i = 0;
//             while (s[i] == ' '){
//                 if(isalpha(s[i]))
//                 {
//                     cout << 0 << endl;
//                     return 0;
//                 }
//                 i++;
//             }
//             s = s.substr(i);
//         }

//         else if (s[0] == '+' || s[0] == '-')
//         {
//             str += s[0];
//             for (int i = 1; i < s.size(); i++)
//             {
//                 // if (!isdigit(s[i]))
//                 //     continue;
//                 if (isdigit(s[i]))
//                     str.push_back(s[i]);
//                 else
//                     break;
//             }
//         }
//         else
//         {
//             for (int i = 0; i < s.size(); i++)
//             {
//                 // if (!isdigit(s[i]))
//                 //     continue;
//                 if (isdigit(s[i]))
//                     str.push_back(s[i]);
//                 else
//                     break;
//             }
//         }
//     }
//     int y = stoi(str);
//     cout << stoi(str) << endl;
//     return 0;
// }

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, str;
    cin >> s;

    if (s[0] == ' ')
    {
        int i = 0;
        while (s[i] == ' ')
        {
            // if (isalpha(s[i]))
            // {
            //     cout << 0 << endl;
            //     return 0;
            // }
            i++;
        }
        s = s.substr(i);
    }
    if(s[0] == '-' || s[0] == '.')
        str.push_back('-');
    else if(s[0] == '.')
        str.push_back('.');


    for (auto &&i : s)
    {
        if (s[0] == ' ')
        {
            int j = 0;
            while (s[j] == ' ')
            {
                if (isalpha(i)){
                    cout << 0 <<endl;
                    return 0;
                }
                j++;
            }
            s = s.substr(j);
            if (s[j] == '-' || s[j] == '.')
                str.push_back(j);
        }
        if (i == '-' || i == '.')
            str.push_back(i);
        if (isalpha(i)){
            break;
        }
        // if (i == '-' || i == '.')
        //     str.push_back(i);
        if (isdigit(i))
            str.push_back(i);
    }
    cout << s;
    cout << s[0];
    
    return 0;
}
*/



// problem link : https://leetcode.com/problems/string-to-integer-atoi/description/

#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, str;
    cin >> s;
    if (!isdigit(s[0]) && s[0] != '+' && s[0] != '-' && s[0] != ' ' && s[0] != '.'){
        cout << 0 << endl;
        return 0;
    }
    else
    {
        if (s[0] == ' ')
        {
            int i = 0;
            while (s[i] == ' ')
                i++;
            s = s.substr(i);
        }

        else if (s[0] == '+' || s[0] == '-')
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
        else if (isdigit(s[0]))
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
    int y;
    stringstream ss(str);
    ss >> y;
    cout << y << endl;
    return 0;
}
*/

int main(void)
{

    string s, str;
    cin >> s;

    if (!isdigit(s[0]) && s[0] != '+' && s[0] != '-' && s[0] != ' ' && s[0] != '.')
    {
        cout << 0 << endl;
        return 0;
    }

    if (s[0] == ' ')
    {
        int i = 0;
        while (s[i] == ' ')
            i++;
        s = s.substr(i);
    }
        
    if (s[0] == '-' || s[0] == '+')
    {
        str += s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (isdigit(s[i]))
                str.push_back(s[i]);
            else
                break;
        }
    }
    else if (isdigit(s[0]))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
                str.push_back(s[i]);
            else
                break;
        }
    }

    int y;
    stringstream ss(str);
    ss >> y;
    cout << y <<endl;
}

/*
    -45435fs
-651gs
-651-gs

-fdsg
05656
-635
fhfg

if s[0] = ' ':
    then remove until it turns into a digit or '-' sign
*/