// #include <iostream>
// #include <vector>
// #include <algorithm> // Required for std::max_element

// struct Point
// {
//     int x;
//     int y;
// };

// int main()
// {
//     std::vector<Point> points = {{1, 5}, {3, 10}, {2, 7}, {4, 2}};

//     // Find the point with the maximum y-coordinate
//     auto max_y_point_it = std::max_element(points.begin(), points.end(),[](const Point &a, const Point &b){return a.y < b.y; });

//     if (max_y_point_it != points.end())
//     {
//         std::cout << "Point with maximum y-coordinate: ("
//                   << max_y_point_it->x << ", " << max_y_point_it->y << ")" << std::endl;
//     }
//     return 0;
// }

/*

vector<pair<int,int>> points = {
        {1, 4}, {3, 7}, {2, 5}, {9, 1}, {6, 8}
    };

    int maxX = INT_MIN, maxY = INT_MIN;

    for (auto &p : points) {
        maxX = max(maxX, p.first);
        maxY = max(maxY, p.second);
    }

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> points = 
        // {1, 4}, {3, 7}, {2, 5}, {9, 1}, {6, 8}
        // {{0,0},{0,1},{1,0},{0,2},{2,0}};
        // {{1,0},{0,0},{0,1}};
        // [[4,6],[6,5],[3,1]];
        {{4,6},{6,5},{3,1}};

    int maxX = INT_MIN, maxY = INT_MIN;

    for (auto &p : points) {
        maxX = max(maxX, p[0]); // x coordinate
        maxY = max(maxY, p[1]); // y coordinate
    }

    cout << "Max X: " << maxX << endl;
    cout << "Max Y: " << maxY << endl;

    cout << (maxX * maxY) / 2.0 << endl;


    return 0;
}

// [[1,0],[0,0],[0,1]]
