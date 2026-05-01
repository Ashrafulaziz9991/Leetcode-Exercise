#include <bits/stdc++.h>
using namespace std;

// checking wheather a number is prime or not
bool isPrime(int n, int i = 2) {
    if (n <= 2) return (n == 2) ? true : false;
    if (n % i == 0) return false;
    if (i * i > n) return true;
    return isPrime(n, i + 1);
}

// sieve theory to detect prime numbers within a specific renge

// Linear Sieve

vector<int> sieve(int n)
{
    vector<int> lp(n + 1), pr;
    for (int i = 2; i <= n; ++i)
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
    return pr;
}

int main() {
    int num;
    std::cin >> num;
    // std::cout << (isPrime(num) ? "Prime" : "Not Prime");
    vector<int>result = sieve(num);
    for(int i : result) cout << i << " ";
    return 0;
}   