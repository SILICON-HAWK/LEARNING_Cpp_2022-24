#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> nums)
    {
        int n = nums.size();    
        sort(nums.begin(), nums.end());  //never forget to do this in 2 pointer approach 
        vector<vector<int>> result;
        for (int i = 0; i < n - 1; i++)
        {
            int low = i + 1;
            int high = n - 1;

            while (low < high)
            {
                if (nums[low] + nums[high] + nums[i] < 0){low++;}
                else if (nums[low] + nums[high] + nums[i] > 0){high--;}
                else
                {
                    result.push_back({nums[i],nums[low], nums[high]});
                    int templ = low;
                    int temph = high;
                    while (low < high && nums[low] == nums[templ]){low++;}
                    while (low < high && nums[high] == nums[temph]){high--;} 
                }
            }
            while(i+1 < n && nums[i] == nums[i+1]){i++;}  //very important to avoid heap overflow (with the i<n) in program also to skip over duplicates 
        }
        return result;
    }
};
int main()
{
    Solution sol;

    vector<int> someVector = {-1,0,1,2,-1,-4};
    sol.threeSum(someVector);

    return 0;
}