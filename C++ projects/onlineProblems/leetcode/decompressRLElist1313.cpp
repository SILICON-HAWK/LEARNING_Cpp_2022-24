#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void decompressRLElist (vector<int> nums) {
        vector<int> result;
        int var = 0;
        int var1 = 0;
        for(int i = 0; i < nums.size(); i++){
            var = nums[i];
            var1 = nums[i+1];
            for (int j = 0; j < var; j++)
            {
                result.push_back(var1);
            }
            i++;
            
        }
        // return result;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {1,1,2,3};
    sol.decompressRLElist(nums);
    
    return 0;
}