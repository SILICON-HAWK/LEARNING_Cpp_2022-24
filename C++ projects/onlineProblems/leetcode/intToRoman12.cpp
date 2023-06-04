#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        int value[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string roman[13] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        string result = "";
        int itr = 12;
        if(num==0)
        {
            return result;
        }

        for(int i = 12; i>=0; i--){
            while(num >= value[i]){
                result += roman[i];
                num -= value[i];
            }

        }
        return result;
    }
};
int main()
{
    Solution sol;
    // sol.();
    
    return 0;
}