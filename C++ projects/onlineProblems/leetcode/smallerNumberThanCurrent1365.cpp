#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void smallerNumberThanCurrent (vector<int> nums) {

        vector<int> nums2 = nums;
        sort(nums2.begin(), nums2.end());
        vector<int> result;


        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if(nums[i] > nums2[j]){
                    count++;
                }
                
            }
                result.push_back(count);
            
        }
        
        return result;
    }
};

int main()
{
    vector<int> nums = {};
    Solution sol;
    sol.smallerNumberThanCurrent(nums);
    
    return 0;
}