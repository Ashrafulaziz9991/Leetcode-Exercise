#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x;
    cin>>x;
    cin.ignore();
    string str = to_string(x);
    // reverse(str.begin(), str.end());
    int strt = 0, endd = str.size()-1;
    while (strt < endd)
    {
        int temp = str[strt];
        str[strt] = str[endd];
        str[endd] = temp;
        strt++, endd--;
    }
    int X = stoi(str);
    if (x < 0)
    {
        cout<<X*(-1);
        return 0;
    }
    cout<< X;
    return 0;
}