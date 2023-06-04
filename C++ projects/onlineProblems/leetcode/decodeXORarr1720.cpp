#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    void decodeXOR(vector<int> encoded, int first)
    {
        vector<int> result(encoded.size() + 1);
        result[0] = first;
        int var = first xor result[0];
        result.push_back(var);

        for (int j = 1; j < encoded.size(); j++)
        {
            var = var xor encoded[j];
            result.push_back(var);
        }
        
        // return result;
    }
};
int main()
{
    Solution sol;
    vector<int> encoded = {1, 2, 3};
    int first = 1;
    sol.decodeXOR(encoded, first);
    return 0;
}