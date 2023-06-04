#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void buildArray(vector<int> nums)
    {
        vector<int> result;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int newnum = nums[nums[i]];
            result.push_back(newnum);    
        }

        // return result;
        
    };
};
int main()
{
    Solution sol;
    vector<int> var = {0,2,1,5,3,4};
    sol.buildArray(var);

    return 0;
}