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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *temp = head;
        int carry = 0, sum = 0;
        while(l1 || l2 || carry)
        {
            if(l1)
                sum+=l1->val;
            if(l2)
                sum+=l2->val;
            sum += carry;
            ListNode *newnode = new ListNode(sum%10);
            temp->next = newnode;
            temp = newnode;
            carry = sum/10;
            sum=0;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        return head->next;
    }
};