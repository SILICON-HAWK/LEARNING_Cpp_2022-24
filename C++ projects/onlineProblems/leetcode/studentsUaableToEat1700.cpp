#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void countStudents(vector<int> students, vector<int> sandwiches)
    {

        int sq_stu = 0, cr_stu = 0, stu_count = students.size();

        for (int i = 0; i < students.size(); i++)
        {
            students[i] == 0 ? cr_stu++ : sq_stu++;
        }

        for (int j = 0; j < students.size(); j++)
        {
            if (sandwiches[j] == 0)
            {
                if (cr_stu > 0)
                {
                    cr_stu--;
                    stu_count--;
                    cout<<cr_stu<<endl<<stu_count<<"cr student"<<endl;
                }

                else{cout<<stu_count<<endl;}
            }

            else
            {
                if (sq_stu > 0)
                {
                    sq_stu--;
                    stu_count--;

                    cout<<sq_stu<<endl<<stu_count<<"sq student"<<endl;
                }
                else{cout<<stu_count<<endl;}
            }
        }

        cout<<stu_count<<endl;
    }
};
int main()
{
    Solution sol;
    vector<int> students = {1, 1, 1, 0, 0, 1};
    vector<int> sandwiches = {1, 0, 0, 0, 1, 1};
    sol.countStudents(students, sandwiches);

    return 0;
}