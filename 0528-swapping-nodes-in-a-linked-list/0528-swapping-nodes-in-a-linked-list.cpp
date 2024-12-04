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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp = head;
        while(--k)
        {
            temp = temp->next;
        }
        ListNode *copy, *temp2;
        copy = temp;
        temp2 = head;
        while(copy->next!=nullptr)
        {
            copy = copy->next;
            temp2 = temp2->next;
        }
        swap(temp2->val,temp->val);
        return head;
    }
};