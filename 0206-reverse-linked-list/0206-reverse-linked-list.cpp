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
        ListNode *currentnode = head;
        ListNode *previousnode=nullptr;
        ListNode *nextnode = head;
        while( nextnode!=nullptr)
        {
            nextnode=nextnode->next;
            currentnode->next = previousnode;
            cout<<currentnode->val;
            previousnode = currentnode;
            currentnode = nextnode;
        }
        
        return previousnode;
    }
};