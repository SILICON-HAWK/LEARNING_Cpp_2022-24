#include <bits/stdc++.h>
using namespace std;

//optimal o(n) approach takes 2 pointers and moves each of them towards each other. dont know of any more optimal approach.

int maxArea(){
     vector<int> height;
     height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

     int left = 0, right = (height.size() - 1), MaxAr = 0;

     while (left < right){
          int currH = min(height[left], height[right]);
          int currAr = currH * (right - left);

          if (currAr > MaxAr){
               MaxAr = currAr;
          }
          if (left < right){
               left ++;
          }else{
               right--;
          }
          cout<<MaxAr;
     }return MaxAr;

}


// brute force methord time complexity == 0(n^2) no optimal takes too much time
// int maxArea()
// {
//      vector<int> height;
//      height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//      int elements = height.size();
//      int maxAr = 0, right = 0, left = 0;

//      for (int left = 0; left < elements; left++)
//      {
//           int currH, leftH, rightH, currAr;

//           for (int right = left; right < elements; right++)
//           {    
//                leftH = height[left];
//                rightH = height[right];

//                if(leftH <= rightH){
//                     currH = leftH;
//                     // cout<<left<<"current block left"<<endl;
//                     // cout<<currH<<"current height left"<<endl;
//                }
//                else if (rightH < leftH){
//                     currH = rightH;
//                     // cout<<right<<"Current block right"<<endl;
//                     // cout<<currH<<"Current height right"<<endl;
//                }

//                currAr = currH * (right - left);

//                if (currAr > maxAr){
//                     maxAr = currAr;
//                }


//                // cout << maxAr << " current max area"<< endl;
//           }
//      };return maxAr;
// };

int main()
{
     maxArea();

     return 0;
}