#include <bits/stdc++.h>

using namespace std;

int main(){
     int n, fx, fy, qx, qy;
     cin>>n;

     for (int i = 0; i < n; i++)
     {

          cin>>fx>>fy>>qx>>qy;

          int rx = (qx - fx)+qx;
          int ry = (qy - fy)+qy;
          
          cout<<rx<<" "<<ry<<endl;
     }
     return 0;
}