#include <bits/stdc++.h>
using namespace std;

string intToBinary(int n) {
    string binary = "";
    if (n == 0) return "0";

    while (n > 0) {
        binary += (n % 2 == 0) ? '0' : '1';
        n /= 2;
    }

    // reverse(binary.begin(), binary.end());
    return binary;
}

int binaryToDecimal(const string& binary) {
    int decimal = 0;
    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }
    return decimal;
}

int main() {
    long long num = 43261596;
    cout << "Binary of " << num << " is: " << intToBinary(num) << endl;
    stringstream ss(intToBinary(num));
    int x;
    ss >> x;

    cout << x <<endl;

    cout << binaryToDecimal(intToBinary(num));
    return 0;
}   
/*
10100101000001111010011100

00111001011110000010100101
*/