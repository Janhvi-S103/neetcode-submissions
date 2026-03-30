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
    bool hasCycle(ListNode* head) {
        /* Method 1 using Hash Set 
        unordered_set<ListNode*> cycle;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(cycle.find(temp) != cycle.end())
            {
                return true;
            }
            cycle.insert(temp);
            temp=temp->next;
        }
        return false; */
        //Floy's Algo (Slow & Fast pointer)
        ListNode* fast= head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next !=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};
