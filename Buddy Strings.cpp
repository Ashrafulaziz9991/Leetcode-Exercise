#include <bits/stdc++.h>
using namespace std;

bool ok(string s, string goal){
    int left = 0, right = s.size() - 1;
    while (left < right)
    {
        swap(s[left], s[right]);
        if (s == goal)
            return true;
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "aaaaaaabc", goal = "aaaaaaacb";
    bool flag = false;
    
    // for (int i = 0; i < s.size() - 1; i++)
    // {
    //     for (int j = i + 1; j < s.size(); j++)
    //     {
    //         swap(s[i], s[j]);
    //         if(s == goal){
    //             cout << "Found";
    //             return 0;
    //         }
    //         swap(s[i], s[j]);
    //     }
    // }

    

    if(ok(s, goal))
        cout << "yes" ; 
    else 
        cout << "NO";
     
    return 0;
}