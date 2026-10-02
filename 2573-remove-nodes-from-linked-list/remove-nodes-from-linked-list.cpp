class Solution {
public:
    ListNode* removeNodes(ListNode* head) 
    {
        // Reverse
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // Remove smaller nodes
        int maxi = prev->val;
        curr = prev;

        while(curr != NULL && curr->next != NULL)
        {
            if(curr->next->val < maxi)
            {
                curr->next = curr->next->next;
            }
            else
            {
                curr = curr->next;
                maxi = curr->val;
            }
        }
        // Reverse again
        curr = prev;
        prev = NULL;

        while(curr != NULL)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};