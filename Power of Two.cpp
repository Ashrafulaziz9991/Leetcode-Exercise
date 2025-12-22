/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;

    int base = 2;
    bool flag = false;
    
    for(int i = 0; i < 10; i++)
    {
        int result = (n, 1/i);
        if(result == 2){
            flag = true;
            break;
        }
    }
    if(flag) cout << "yes" <<endl;
    else cout<<"NO" <<endl;
    return 0;
}
*/

/* problem link : https://leetcode.com/problems/power-of-two/
 * solved the problem through Bitwise opration
 * time complexity O(1)

*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if((n > 0) && ((n & (n - 1)) == 0))
            return true;
        else
            return false;
    }
};