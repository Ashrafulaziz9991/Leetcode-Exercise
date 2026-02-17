// problem link : https://leetcode.com/problems/count-primes/
// Linear seive theory

class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)
            return 0;
        vector<int> lp(n + 1), pr;
        for (int i = 2; i < n; ++i)
        {
            if (lp[i] == 0)
            {
                lp[i] = i;
                pr.push_back(i);
            }
            for (int p : pr)
            {
                if (p > lp[i] || i * p > n)
                   break;
                lp[i * p] = p;
            }
        }
        return pr.size();
    }
};