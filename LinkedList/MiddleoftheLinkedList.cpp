class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *tmp=head;                    // dummy node tmp
        ListNode *slow=head,*fast=head;        // two dummy nodes created to traverse the linked list
        while(fast!=NULL && fast->next!=NULL){           
            slow=slow->next;                    // slow will travel one node at a time
            fast=fast->next->next;              // fast will travel two nodes at a time
        }
        return slow;                          // by the time fast or fast->next will reach at null , slow will be at middle of linked list
    }
};
