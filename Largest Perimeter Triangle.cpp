#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
        cout << a + b + c << endl;
    else
        cout << 0 << endl;

    // or

    vector<int> sides = {a, b, c};
    sort(sides.begin(), sides.end());
    // if (sides[0] + sides[1] > sides[2])
    //     cout << sides[0] + sides[1] + sides[2] << endl;
    // else
    //     cout << 0 << endl;

    int left = 0, right = sides.size() - 1;

    // for (int i = 1; i < sides.size()-1; i++)
    // {
    //     if (sides[left] + sides[i] > sides[right])
    //     {
    //         cout << sides[left] + sides[i] + sides[right] << endl;
    //         break;
    //     }
    //     else if (i == sides.size() - 2)
    //         cout << 0 << endl;
    // }

    while (left < right)
    {
        if (sides[left] + sides[right - 1] > sides[right])
        {
            cout << sides[left] + sides[right - 1] + sides[right] << endl;
            break;
        }
        else
        {
            right--;
            if (right - left == 1)
                cout << 0 << endl;
        }
    }
    return 0;
}