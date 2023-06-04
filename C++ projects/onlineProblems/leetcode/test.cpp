#include <bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[][4], int size, int target)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int size = 20;
    int target = -10;
    bool ans = linearsearch(arr, size, target);
    cout << ans << endl;
}