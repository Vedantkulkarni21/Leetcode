/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(head==0)
        {
            return false;
        }
        ListNode *fast=head;
        ListNode *slow=head;
        
        while(fast!=0 && fast->next!=0)
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow)
                return true;
        }
        return false;
    }
};