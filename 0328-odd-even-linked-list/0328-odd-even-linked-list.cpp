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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode *even_head = head;
        ListNode *odd_head = head->next;
        ListNode *even = even_head, *odd = odd_head;
        while(even->next && odd->next)
        {
            even->next = odd->next;
            odd->next = even->next->next;
            even = even->next;
            odd = odd->next;
        }
        even->next = odd_head;
        return head;
    }
};