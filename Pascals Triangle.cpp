// problem link : https://leetcode.com/problems/pascals-triangle/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout <<"*";
    //     }
    //     cout << "\n";
        
    // }
    vector<<vector<int>>pascle(n);

    return 0;
}

/*
#include <iostream>
using namespace std;

void printPascal(int n) {
    for (int line = 1; line <= n; line++) {
        int C = 1; // Start with the first element of the row

        // Print leading spaces for centering
        for (int i = 1; i <= n - line; i++) {
            cout << " ";
        }

        // Print the elements of the current row
        for (int i = 1; i <= line; i++) {
            cout << C << " ";
            C = C * (line - i) / i; // Calculate next coefficient
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPascal(n);
    return 0;
}   

*/