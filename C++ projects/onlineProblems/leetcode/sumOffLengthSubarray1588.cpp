#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sumOddLengthSubArrays(vector<int> arr)
    {
        int n = arr.size();
        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            int leftCount = i + 1;
            int rightCount = n - i;
            int totalCount = leftCount * rightCount;
            int contribution = (totalCount + 1) / 2 * arr[i];

            sum += contribution;
        }

        // return sum;
    }
};
int main()
{
    Solution sol;
    vector<int> arr = {1, 4, 2, 5, 3};
    sol.sumOddLengthSubArrays(arr);

    return 0;
}