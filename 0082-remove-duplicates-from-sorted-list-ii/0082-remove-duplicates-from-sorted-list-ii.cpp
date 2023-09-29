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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;
        ListNode *dummy = new ListNode();
        ListNode *List=dummy;
        int flag=0;
        while(temp)
        {
            if(temp->next && temp->val == temp->next->val)
            {
                flag=temp->val;
            while(temp && (temp->val == flag))
            {
                temp=temp->next;
            }
            
            }
            else{
            dummy->next=temp;
            dummy=dummy->next;
            temp=temp->next;
            }
        }
        dummy->next=NULL;
        return List->next;
    }
};