#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void countPoints(vector<vector<int>> points, vector<vector<int>> queries)
    {
        int x1, y1, cx, cy, r;
        vector<int> result;

        for (int i = 0; i < queries.size(); i++)
        {

            int count = 0;

            cx = queries[i][0];
            cy = queries[i][1];
            r = queries[i][2];

            int lhs = pow(x1 - cx, 2) + pow(y1 - cy, 2);

            for (int j = 0; j < points.size(); j++)
            {

                x1 = points[j][0];
                y1 = points[j][1];

                int rhs = pow(r, 2);

                if (lhs <= rhs)
                {
                    count++;
                }
            }
            result.push_back(count);
        };
        // return result;
    };
}
/*
(x - h)^2 + (y - k)^2 = r^2

Here's a breakdown of the equation:
    x1 = x of point
    y1 = y of point
    cx = x center of point
    cy = y center of point
    r = radius

    (x, y) represents a point on the circle.
    (h, k) represents the center of the circle.
    r represents the radius of the circle.
*/
int main()
{
    Solution sol;
    sol.countPoints();

    return 0;
}