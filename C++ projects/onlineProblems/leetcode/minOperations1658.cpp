#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void minOperations(vector<int> nums, int x)
    {
        int lptr = 0;
        int rptr = nums.size() - 1;
        int count = 0;

        while (x > 0 && lptr <= rptr)
        {
            if (nums[lptr] > nums[rptr] && x > nums[lptr])
            {
                x -= nums[lptr];
                lptr++;
                count++;
            }
            else
            {
                x -= nums[rptr];
                rptr--;
                count++;
            }
        }

        if (x == 0)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
};
int main()
{
    Solution sol;
    vector<int> stuff = {1, 1, 4, 2, 3};

    int x = 5;
    sol.minOperations(stuff, x);

    return 0;
}