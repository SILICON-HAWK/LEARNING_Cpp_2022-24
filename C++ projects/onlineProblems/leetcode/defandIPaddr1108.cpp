#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void defangIPaddr (string address) {
        int leng = address.size();
        string result = "";
        for (int i = 0; i < leng; i++)
        {
            if(isdigit(address[i])){
                result += address[i];
            }
            if(address[i] == '.'){
                result += "[.]";
            }
        }
        // return result;
        
    }
};
int main()
{
    Solution sol;
    string address = "1.1.1.1";
    sol.defangIPaddr(address);
    
    return 0;
}