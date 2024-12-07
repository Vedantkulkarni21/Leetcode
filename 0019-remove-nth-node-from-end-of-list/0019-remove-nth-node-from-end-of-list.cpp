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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *back = head, *front = head;
        ListNode *temp = head;
        int count = 0;
        while(temp)
        {
            count++;
            temp= temp->next;
        }
        if(n == count)
        {
            head= head->next;
            return head;
        }
        n = n+1;
        while(--n)
        {
            front = front->next;
        }
        while(front->next)
        {
            front = front->next;
            back = back->next;
        }
        back->next = back->next->next;
        return head;
    }
};