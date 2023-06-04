#include <bits/stdc++.h>
using namespace std;

bool sol(){
    vector<int> pushed;
    vector<int> popped;
    pushed = {1,2,3,4,5};
    popped = {4,5,3,2,1};
    int l = 0;

    stack<int> stk;

    for(int i: pushed){
        stk.push(i);
        while(stk.empty() && stk.top() == popped[l]){
            stk.pop();
            i++;
        };
    };

    if (stk.empty() == true){
        return true;
    }
    else
    {
        return false;
    }
    
}