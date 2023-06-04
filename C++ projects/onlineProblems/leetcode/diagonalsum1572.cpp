#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void diagonalSum(vector<vector<int>> mat)
    {
        double result = 0;
        int i = 0;
        int items = mat.size();
        int leftPtr = items - 1;
        while (i < items)
        {
            result += mat[i][i];
            result += mat[i][leftPtr];
            if (i == leftPtr)
            {
                result = result - mat[i][i];
            }
            i++;
            leftPtr--;
        }

        return result;
    }
};
int main()
{
    Solution sol;
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sol.diagonalSum(mat);

    return 0;
}