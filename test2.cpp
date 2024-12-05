#include<iostream>
using namespace std;
  struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        int count=0;
        ListNode *curr=list1;
        ListNode *after=list2;
        while(curr !=NULL){
            if(count==0){
            ListNode* node1 = new ListNode(curr->val,NULL);
            ListNode* node2 = new ListNode(after->val,node1);
            count++;
            }
            ListNode* node2 = new ListNode(after->val,NULL);
            ListNode* node1 = new ListNode(curr->val,node2);
            curr=curr->next;
            after=after->next;
        }
    }
}

    