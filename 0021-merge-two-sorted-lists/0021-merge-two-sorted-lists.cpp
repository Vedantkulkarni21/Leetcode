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

/*FIRST SOLUTION WITH HIGH COMPLEXITY*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *temp1=list1;
        ListNode *temp2=list2;
        ListNode *Node = new ListNode(0);
        ListNode *head=Node;
        ListNode *list=head;
        
       while(temp1 != NULL && temp2 != NULL)
       {
           if(temp1 -> val < temp2 -> val)
            {
                list->next = temp1;
                temp1=temp1->next;
            }
            else
            {
                list->next = temp2;
                temp2=temp2->next;
            }
             list=list->next;
           
       }
       while(temp1!=NULL)
       {
           list->next=temp1;
           list=list->next;
           temp1=temp1->next;
       }
       while(temp2!=NULL)
       {
           list->next=temp2;
           list=list->next;
           temp2=temp2->next;
       }
       return head->next;
    }
};