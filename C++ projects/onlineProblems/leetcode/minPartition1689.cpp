#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void minPartitions(string n)
    {
        int result = 0;
        for (char c : n)
        {
            if (isdigit(c))
            {
                int digit = c - '0';
                result = std::max(result, digit);
            }
        }
    }
    // return result;
}
;
int main()
{
    Solution sol;
    string n = "32";
    sol.minPartitions(n);

    return 0;
}