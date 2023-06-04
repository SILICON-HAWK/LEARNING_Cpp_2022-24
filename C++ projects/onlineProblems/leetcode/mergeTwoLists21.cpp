struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;

        ListNode *result = list1;
        if(list1->val > list2->val){
            result = list2;
            list2 = list2->next;
        }
        else{
            list1 = list1->next;
        }

        ListNode* curr = result;

        while(list1 and list2){
            if(list1->val < list2->val){
                curr->next = list1;
                list1 = list1-> next;
            }
            else{
                curr->next = list2;
                list2 = list2->next;
            }

            curr = curr->next;
        }
        if(!list1){
            curr->next =list2;
        }
        else{
            curr->next = list1;
        }


        return result;
    }
};
int main()
{
    Solution sol;
    // sol.();
    
    return 0;
}