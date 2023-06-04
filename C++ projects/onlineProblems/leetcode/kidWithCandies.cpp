#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void kidsWithCandies(vector<int> candies, int extraCandies)
    {
        vector<bool> result;

        for (int i = 0; i < candies.size(); i++)
        {
            bool var = true;
            for (int j = 0; j < candies.size(); j++)
            {
                if ((candies[i] + extraCandies) < candies[j])
                {
                    var = false;
                }
            }
            result.push_back(var);

            cout<<var<<endl;
        };
        // return result;
    }
};
int main()
{
    Solution sol;

    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    sol.kidsWithCandies(candies, extraCandies);

    return 0;
}