/**
#include <bits/stdc++.h>
using namespace std;

int getDayOfYear(int dayy, int month, int year)
{
    // Check if it's a leap year
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (month == 1)
        return dayy;
    else if (month == 2) // add janu -----FEB
        return dayy + 31;
    else if (month == 3) // add feb -----March
        return dayy + 59 + (isLeapYear ? 1 : 0);
    else if (month == 4) // add march ---April
        return dayy + 90 + (isLeapYear ? 1 : 0);
    else if (month == 5) // add april ----May
        return dayy + 120 + (isLeapYear ? 1 : 0);
    else if (month == 6) // add may ----June
        return dayy + 151 + (isLeapYear ? 1 : 0);
    else if (month == 7) // add june ---July
        return dayy + 181 + (isLeapYear ? 1 : 0);
    else if (month == 8) // add july ----AUg
        return dayy + 212 + (isLeapYear ? 1 : 0);
    else if (month == 9) // add Aug ----Sept
        return dayy + 243 + (isLeapYear ? 1 : 0);
    else if (month == 10) // add sept --- Oct
        return dayy + 273 + (isLeapYear ? 1 : 0);
    else if (month == 11) // Add Oct ---Nov
        return dayy + 304 + (isLeapYear ? 1 : 0);
    else if (month == 12) // Nov ---- Dec
        return dayy + 334 + (isLeapYear ? 1 : 0);

    return -1; // Invalid month
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string date = "2019-02-09";

    // string date;
    // getline(cin, date);

    // cout << Date[5] <<endl;
    // cout << Date[6] <<endl;
    // cout << Date[8] <<endl;
    // cout << Date[9] <<endl;

    int year = 0;
    year = year * 10 + date[0] - '0';
    year = year * 10 + date[1] - '0';
    year = year * 10 + date[2] - '0';
    year = year * 10 + date[3] - '0';

    cout << year << endl;

    int month = 0;

    month = month * 10 + date[5] - '0';
    month = month * 10 + date[6] - '0';

    // cout << "Here the month is : " <<month << endl;

    int dayy = 0;

    dayy = dayy * 10 + date[8] - '0';
    dayy = dayy * 10 + date[9] - '0';
    cout << dayy << endl;
    cout << getDayOfYear(dayy, month, year);

    return 0;
}

*/



// problem link : https://leetcode.com/problems/day-of-the-year/


class Solution {
public:
    int getDayOfYear(int dayy, int month, int year) {
        bool isLeapYear =
            (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

        if (month == 1)
            return dayy;
        else if (month == 2) // add janu -----FEB
            return dayy + 31;
        else if (month == 3) // add feb -----March
            return dayy + 59 + (isLeapYear ? 1 : 0);
        else if (month == 4) // add march ---April
            return dayy + 90 + (isLeapYear ? 1 : 0);
        else if (month == 5) // add april ----May
            return dayy + 120 + (isLeapYear ? 1 : 0);
        else if (month == 6) // add may ----June
            return dayy + 151 + (isLeapYear ? 1 : 0);
        else if (month == 7) // add june ---July
            return dayy + 181 + (isLeapYear ? 1 : 0);
        else if (month == 8) // add july ----AUg
            return dayy + 212 + (isLeapYear ? 1 : 0);
        else if (month == 9) // add Aug ----Sept
            return dayy + 243 + (isLeapYear ? 1 : 0);
        else if (month == 10) // add sept --- Oct
            return dayy + 273 + (isLeapYear ? 1 : 0);
        else if (month == 11) // Add Oct ---Nov
            return dayy + 304 + (isLeapYear ? 1 : 0);
        else if (month == 12) // Nov ---- Dec
            return dayy + 334 + (isLeapYear ? 1 : 0);

        return -1; 
    }

    int dayOfYear(string date) {
        int year = 0;
        year = year * 10 + date[0] - '0';
        year = year * 10 + date[1] - '0';
        year = year * 10 + date[2] - '0';
        year = year * 10 + date[3] - '0';

        int month = 0;

        month = month * 10 + date[5] - '0';
        month = month * 10 + date[6] - '0';

        int dayy = 0;

        dayy = dayy * 10 + date[8] - '0';
        dayy = dayy * 10 + date[9] - '0';

        return getDayOfYear(dayy, month, year);
    }
};