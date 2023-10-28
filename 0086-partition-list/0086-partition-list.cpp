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
        ListNode *copy=head;
        ListNode *lesser = new ListNode(0);
        ListNode *greater = new ListNode(0);
        ListNode *less_point = lesser; 
        ListNode *great_point = greater; 
        
        while(copy!=NULL)
        {
            if(copy->val >= x)
            {
                great_point->next=copy;
                great_point = great_point->next;
            }
            else{
                less_point->next=copy;
                less_point = less_point->next;
            }
            copy=copy->next;
        }
        less_point->next = greater->next;
        great_point->next = NULL;
        return lesser->next;
    }
};