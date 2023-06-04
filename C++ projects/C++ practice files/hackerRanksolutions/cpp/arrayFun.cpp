#include <bits/stdc++.h>
using namespace std;
void arrayfun(){
    int n;
    cin>>n;
    
    int arr[10000]={};
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = n; n < i; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    arrayfun();
}