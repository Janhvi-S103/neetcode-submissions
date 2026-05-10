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
    void reorderList(ListNode* head) {
        if(head==NULL)
            return ; 
        ListNode* fast =head;
        ListNode* slow=head;
        //Found Middle
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast= fast->next->next;
        }
        ListNode* temp = slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        //Rotated Second half
        while(temp!=NULL)
        {
            ListNode* curr=temp->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
        }
        //Split first half
        while(prev!=NULL)
        {
            ListNode* t1=head->next;
            ListNode* t2=prev->next;
            head->next=prev;
            prev->next=t1;

            head=t1;
            prev=t2;
        }

        while(head!=NULL)
        {
            cout << head->val<< " ";
            head=head->next;
        }

    }
};
