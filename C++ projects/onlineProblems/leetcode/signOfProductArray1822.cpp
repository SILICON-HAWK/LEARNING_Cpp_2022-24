#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool arraySign (vector<int> nums) {
        double sum = 1;
        for(int i = 0; i<nums.size(); i++){
            sum *= nums[i];

            if (nums[i] == 0){
                return 0;
                break;
            }
        }

        if(sum > 0){
            return 1;
        }
        else {
            return -1;
        }        
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {};
    sol.arraySign(nums);
    
    return 0;
}