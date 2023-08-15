/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);
       ListNode* SmallP= small;
       ListNode* LargeP= large;

       while(head != NULL)
       {
           if(head->val <x)
           {
               SmallP->next=head;
               SmallP=SmallP->next;
           }
           else 
           {
               LargeP->next=head;
               LargeP=LargeP->next;
           }
           head=head->next;
       }

       SmallP->next=large->next;
       LargeP->next= NULL;
       return small->next;
    }
};