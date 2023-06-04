#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int differenceOfSum (vector<int> nums) {
        int sumNums = 0, result = 0, sumDigit = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sumNums += nums[i];

            if(nums[i] > 9){
                sumDigit = (sumNums) + nums[i]%10;
            }
        }

        result = abs(sumNums - sumDigit);

        return result;
        
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {1,15,6,3}, nums2 = {1,2,3,4};
    sol.differenceOfSum(nums);
    
    return 0;
}