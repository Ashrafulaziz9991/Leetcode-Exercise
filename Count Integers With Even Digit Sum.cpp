// problem link : https://leetcode.com/problems/count-integers-with-even-digit-sum/

/**
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
            cnt += (a % 10);
            a /= 10;
        }
        if(cnt % 2 == 0) return true;
        else return false;
    };

    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if(it(i)) cnt++;
    

    // int ans = it(n);

    cout << cnt;
    return 0;
}
*/


class Solution {
public:
    int countEven(int num) {
        auto it = [](int a) {
            int cnt = 0;
            while (a > 0) {
                cnt += (a % 10);
                a /= 10;
            }
            return cnt % 2 == 0;
        };

        int cnt = 0;
        for (int i = 1; i <= num; i++)
            if (it(i))
                cnt++;
        return cnt;
    }
};