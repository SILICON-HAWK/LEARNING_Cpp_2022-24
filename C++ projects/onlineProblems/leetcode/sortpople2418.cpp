#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string>mp;
        vector<string> result;
        for(int i=0; i < names.size(); i++)
            mp[heights[i]] = names[i];
        for (auto i = mp.rbegin(); i != mp.rend(); ++i) result.push_back(i->second);
        return result;
    }
};