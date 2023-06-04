#include <bits/stdc++.h>
using namespace std;

// desired solution
class Solution {
public:
    int reverse(int x) {
        long long z = x,y = 0;
        while (z){
            y *= 10;
            y += z%10;
            z /= 10;
        }
        if (y > INT_MAX || y < INT_MIN) return 0;
        else return y;
    }
};

int main()
{
    Solution sol;
    int x = 234000;

    sol.reverse(x);

    return 0;
}

//works but bad coz too long and just bad
/*class Solution {
public:
    int reverse(int x) {
        int isNve = 0;
        if (x < 0)
        {
            isNve = -1;
        }
        x = abs(x);
        if ((x == 0) || (x < 0)){
            return 0;
        }
        double varLoop = floor(log10(x) + 1);
        double result = 0;

        for (int i = 0; i < varLoop; i++)
        {
            int v = x % 10;
            double var = v * pow(10, (varLoop - 1) - i);
            result = result + var;
            x = floor(x / 10);

            if ((result > INT32_MAX) or (result < INT32_MIN))
            {
                return 0;
            }
        }

        if (isNve == -1)
        {
            return (isNve * result);
        }

        else
        {
            return result;
        }        
    }
};*/