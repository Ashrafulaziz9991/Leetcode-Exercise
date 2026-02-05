// problem link : https://leetcode.com/problems/water-bottles/
/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int numBottles = 9, numExchange = 3;
    int x = numBottles;
    int sum = 0;

    while (numBottles >= numExchange)
    {
        int newbottle = numBottles / numExchange;
        int rem = numBottles % numExchange;
        sum += newbottle;

        numBottles = newbottle + rem;
    }
    cout <<  sum + x;
    
    return 0;
}

*/


class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int x = numBottles;
        int sum = 0;

        while (numBottles >= numExchange) {
            int newbottle = numBottles / numExchange;
            int rem = numBottles % numExchange;
            sum += newbottle;
            numBottles = newbottle + rem;
        }
        return sum + x;
    }
};