// problem link : https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int total = 0;

        for(int i = 0; i<seats.size(); i++){
            int diff = abs(seats[i] - students[i]);
            total += diff;
        }
        return total;
    }
};

/*

1 3 5
2 4 7
1 1 2

total 4


seat 1 :1 4 5 9
seat 2 :1 2 3 6
move   :0 2 2 3
total 7

2 2 6 6
1 2 3 6
1 0 3 0
total = 4

*/