#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void countKdifference (vector<int> nums, int k) {
        int result = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i; j < nums.size(); j++)
            {
                if(abs(nums[i] - nums[j]) == k){
                    result++;
                }
            }
            
        }
        return result;
        
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {1,2,2,1};
    int k = 1;
    sol.countKdifference(nums, k);
    
    return 0;
}