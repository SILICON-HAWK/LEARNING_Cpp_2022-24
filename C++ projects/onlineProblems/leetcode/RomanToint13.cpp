#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int romanToint(string s)
    {
        map<char, int> mapp;
        mapp = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}};

        int sum = 0;


        for (int i = 0; i < s.size(); i++)
        {
            if (mapp[s[i]] < mapp[s[i + 1]])
            {
                sum += (mapp[s[i+1]] - mapp[s[i]]);
                i++;
                continue;
            }
            sum += mapp[s[i]];
            
        }
        return sum;
    }
};
int main()
{
    Solution sol;
    sol.romanToint("MCMXCIV");

    return 0;
}

/*
This code snippet appears to be part of a loop that iterates over a string `str`. The loop uses a map `m` to look up the values associated with characters in the string. The map `m` seems to be a map of characters to integers.

The `if` statement checks if the value associated with the current character `str[i]` is less than the value associated with the next character `str[i + 1]`. If this condition is true, the code block inside the `if` statement is executed.

Inside the `if` block, the variable `sum` is incremented by the difference between the values associated with `str[i + 1]` and `str[i]`. Then, the loop counter `i` is incremented by 1 and the `continue` statement is executed. This causes the loop to skip to the next iteration.

In general, a map is an associative container that stores key-value pairs. Each key in a map is unique and is associated with a value. You can use a map to look up the value associated with a given key in constant time. Maps are typically implemented as binary search trees.

    for (int i = 0; i < str.length(); i++)
    {
        If present value is less than next value,
        subtract present from next value and add the
        resultant to the sum variable.
        if (m[str[i]] < m[str[i + 1]])
        {
            sum+=m[str[i+1]]-m[str[i]];
            i++;
            continue;
        }
        sum += m[str[i]];
    }
    return sum;
}
*/