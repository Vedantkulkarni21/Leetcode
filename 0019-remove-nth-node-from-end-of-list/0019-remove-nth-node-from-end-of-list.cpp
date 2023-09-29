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
        
        ListNode *dummy=new ListNode();
        dummy->next=head;
        ListNode *slow=dummy;
        ListNode *fast=dummy;
        for(int i=1;i<=n;i++)
        {
            fast=fast->next;
        }
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
    }

};

//my approach
 
        // ListNode * fast = head;
        // int count=1;
        // while(fast->next!=NULL)
        // {
        //     count++;
        //     fast=fast->next;
        // }
        // cout<<count<<endl;
        // if(count==1)
        // {   head=head->next;
        //     return head;
        // }
        // else if(count==n)
        // {
        //     head=head->next;
        //     return head;
        // }
        // int pos=count-n;
        // count=1;
        // ListNode *temp=head;
        // while(temp->next!=NULL)
        // {
        //     if(count==pos)
        //     {
        //         temp->next=temp->next->next;
        //         count++;
        //     }
        //     else{
        //         temp=temp->next;
        //         count++;
        //     }
        // }
        // return head;