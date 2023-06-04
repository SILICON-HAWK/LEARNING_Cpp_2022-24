#include <bits/stdc++.h>
using namespace std;

#define coutleftsum  cout << "current left sum = " << leftSumint << endl;
#define coutrightsum cout << "current right sum int = " << rightSumInt << endl;
#define coutresult   cout<<" current result diff = "<<resultdiff<<endl; \
                     cout<<" j = "<<j<<" rightmostpointer = "<<(rightMostPointer)<<endl;

class Solution
{
public:
    void leftRigthDifference(vector<int> nums)
    {
        int n = nums.size();
        vector<int> leftsum, rightsum, result;
        int rightMostPointer = n;
        int leftSumint = 0;
        int rightSumInt = 0;

            for (int i = 0; i < n; i++)
            {

                {
                    leftSumint = leftSumint + nums[i - 1];
                    coutleftsum
                    leftsum.push_back(leftSumint);
                }
                {
                    rightMostPointer--;
                    rightSumInt = rightSumInt + nums[rightMostPointer + 1];
                    coutrightsum
                    rightsum.push_back(rightSumInt);
                }
            }
        

        rightMostPointer = n;

        for (int j = 0; j < n; j++){
            int resultdiff = 0;
            rightMostPointer--;
            resultdiff = abs(leftsum[j] - rightsum[rightMostPointer]);
            coutresult
            result.push_back(resultdiff);
        }
        // return result;
    }       
};
int main()
{
    Solution sol;
    vector<int> some = {10,4,8,3};
    sol.leftRigthDifference(some);

    return 0;
}

/*
THIS SOLUTION WORKS BUT IT SHOWS MEMORY FLAUT ON LEETCODE IDK WHY THAT IS THE CASE BUT IT WORKS WITH GCC
vector<int> leftRigthDifference(vector<int> nums)
    {
        int n = nums.size();
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> result;
        int rightMostPointer = n - 1;
        int leftSumint = 0;
        int rightSumInt = 0;

        if (n < 2)
        {
            result.push_back(0);
            return result;
        }

        else
        { 
            for (int i = 0; i < n; i++)
            {

                {
                    leftSumint = leftSumint + nums[i - 1];
                    // cout << "current left sum = " << leftSumint << endl;
                    leftsum.push_back(leftSumint);
                }
                {
                    rightSumInt = rightSumInt + nums[rightMostPointer + 1];
                    // cout << "current right sum int = " << rightSumInt << endl;
                    rightsum.push_back(rightSumInt);
                    rightMostPointer--;
                }
            }
        }

        int rightpointer = n-1;

        for (int j = 0; j < n; j++){
            int resultdiff = 0;
            resultdiff = abs(leftsum[j] - rightsum[rightpointer]);
            rightpointer--;
            // cout<<" current result diff = "<<resultdiff<<endl;
            // cout<<" j = "<<j<<" n-1 = "<<(n-1)<<endl;
            result.push_back(resultdiff);
        }
        return result;
    }*/