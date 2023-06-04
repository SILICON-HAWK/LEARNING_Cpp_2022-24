#include <bits/stdc++.h>
using namespace std;
void arrayfun(){
    int n;
    cin>>n;
    
    int arr[n]={};   //use either n for dynamic array or make a really big array like arr[10000]
    
    for (int i = 0; i < n; i++)  
    {
        cin>>arr[i];
    }
    
    for (int i = n; i > 0; i--)
    {
        cout<<arr[i-1]<<" ";
    }
    
}
int main(){
    arrayfun();
}

/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n]={};
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[n];
    }
    
    for (int i = n; i < n; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}
*/