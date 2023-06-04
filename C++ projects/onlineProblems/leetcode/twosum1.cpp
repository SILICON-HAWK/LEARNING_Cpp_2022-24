#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        vector<pair<int, int>> n;
        for (int i = 0; i < nums.size(); i++)
        {
            n.push_back({nums[i], i});
        }
        sort(n.begin(), n.end());
        int ptr1 = 0, ptr2 = nums.size() - 1;
        while (ptr1 < ptr2)
        {
            if (n[ptr1].first + n[ptr2].first == target)
            {
                ans.push_back(n[ptr1].second);
                ans.push_back(n[ptr2].second);
                break;
            }
            else if (n[ptr1].first + n[ptr2].first > target)
            {
                ptr2--;
            }
            else if (n[ptr1].first + n[ptr2].first < target)
            {
                ptr1++;
            }
        }
        return ans;
    }
};