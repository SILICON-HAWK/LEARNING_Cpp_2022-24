#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalandrome(int x)
    {
        int temp = x;
        double reverse = 0;

        if (x < 0)
        {
            return false;
        }

        else
        {
            while (temp != 0)
            {
                reverse = reverse * 10 + temp % 10;
                temp /= 10;
            }
        }
        return reverse == x;
    }
};
int main()
{
    Solution sol;
    sol.isPalandrome(123);

    return 0;
}