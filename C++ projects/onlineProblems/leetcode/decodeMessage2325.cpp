#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void decodeMessage(string key, string message)
    {
        unordered_map<char, char> decodeKey;
        int letter = 'a';
        string result = "";
        for (char i : key)
        {
            if(i != ' ' && decodeKey.find(i) == decodeKey.end()){
                decodeKey[i] = letter;
                letter++;
            }
        }

        for(char x: message){
            if(x != ' '){
                result += decodeKey[x];
            }
            else
            {
                result += ' ';
            }
        }

        // return result;
        
        
    }
    
};
int main()
{
    Solution sol;
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    sol.decodeMessage(key, message);

    return 0;
}