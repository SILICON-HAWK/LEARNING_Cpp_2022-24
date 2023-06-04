#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void createTargetArray(vector<int> nums, vector<int> index)
    {

        int n = nums.size();
        vector<int> result;
        for (int i = 0; i < n; i++)
            result.insert(result.begin() + index[i], nums[i]);

        //return result;
    }
};
int main()
{
    Solution sol;
    // sol.createTargetArray();

    return 0;
}