#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findPairs (vector<int> nums, int k) {
        int result = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i; j < nums.size(); j++)
            {
                if(nums[i] - nums[j] == k){
                    result++;
                }
            }
            
        }
        
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {3,1,4,1,5};
    int k = 2;
    sol.findPairs(nums, k);
    
    return 0;
}