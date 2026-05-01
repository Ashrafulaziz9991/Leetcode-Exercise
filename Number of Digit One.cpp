#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    auto it = [](int a){
        int cnt = 0;
        while (a > 0)
        {
            cnt += (a % 10 == 1);
            a /= 10;
        }
        return cnt;
    };

    int cnt = 0;

    for (int i = 1; i <= n; i++)
        cnt += it(i);

    cout << cnt;
    return 0;
}