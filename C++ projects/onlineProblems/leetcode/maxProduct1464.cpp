#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return ( (nums[nums.size()-1]-1)*(nums[nums.size()-2] - 1));
    }
};
int main()
{
    Solution sol;
    // sol.();
    
    return 0;
}