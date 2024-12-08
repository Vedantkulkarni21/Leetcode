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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode *prev = head, *current = head->next, *nextptr = head->next->next;
        if(!head->next->next)
        {
            current->next = prev;
            prev->next = nullptr;
            head = current;
            return head;    
        }
        while(current->next)
        {
            if(prev == head)
                prev->next = nullptr;
            current->next = prev;
            prev = current;
            current = nextptr;
            nextptr = nextptr->next;
        }
        current->next = prev;
        head  = current;
        return head;
    }
};