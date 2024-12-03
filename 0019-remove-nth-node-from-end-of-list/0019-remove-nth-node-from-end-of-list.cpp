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
        ListNode* temp = head;
        int count=0;
        while(temp)
        {
            count++;
            temp = temp->next;
        }
        if(head->next==nullptr)
        {
            head = head->next;
            return head;
        }
        temp = head;
        if (n == count) {
            return head->next;
        }
        n = count-n;
        while(--n)
        {
            temp = temp->next;
        }
        if(temp->next->next != nullptr)
            temp->next = temp->next->next;
        else
            temp->next = nullptr;
        return head;
    }
};