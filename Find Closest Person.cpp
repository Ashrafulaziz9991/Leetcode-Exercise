/**
 * problem link : https://leetcode.com/problems/find-closest-person/description/
 * 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y, z;
    cin >> x >> y >> z;
    if(abs(x - z) < abs(y - z))
        cout << 1 << endl;
    else
        cout << 2 << endl;
    return 0;
}
*/

class Solution {
public:
    int findClosest(int x, int y, int z) {
        if (abs(x - z) < abs(y - z))
            return 1;
        else if (abs(x - z) > abs(y - z))
            return 2;
        else
            return 0;
    }
};