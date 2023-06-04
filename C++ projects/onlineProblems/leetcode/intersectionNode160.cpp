#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n = 0, m = 0;
        ListNode *ptrA = headA, *ptrB = headB;
        while(ptrA != NULL){
            n++;
            ptrA = ptrA->next;
        }
        while(ptrB != NULL){
            m++;
            ptrB = ptrB->next;
        }
        int moveForward = abs(n - m);
		if(n > m){
			while(moveForward){
				headA = headA -> next;
				moveForward--;
			}
		}
		else{
			while(moveForward){
				headB = headB -> next;
				moveForward--;
			}
		}
        while(headA != NULL and headB != NULL){

            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
int main()
{
    Solution sol;
    // sol.();
    
    return 0;
}