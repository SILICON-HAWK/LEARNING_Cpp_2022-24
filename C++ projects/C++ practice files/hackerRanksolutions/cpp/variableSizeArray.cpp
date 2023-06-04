#include <bits/stdc++.h>
using namespace std;

void varArray(){
    int in,k, size, value, which, what;
    cin>>in>>k;

    vector<vector<int>> avector;
    for (int i = 0; i < in; i++)
    {
        cin>>size;
        vector<int> bvector;
        
        for (int my = 0; my < size; my++)
        {
            cin>>value;
            bvector.push_back(value);
        }
        avector.push_back(bvector);
    }
    
    for (int you = 0; you < k; you++)
    {
        cin>>which>>what;
        cout<<avector[which][what]<<endl;
    }
    
}

int main(){
    
    varArray();
    return 0;
}



/*
int main() {
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}
*/