class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;

        while(head != NULL)
        {
            if(head->next != NULL && head->val == head->next->val)
            {
                // Skip all duplicate nodes
                while(head->next != NULL && head->val == head->next->val)
                {
                    head = head->next;
                }

                // Skip the last duplicate also
                prev->next = head->next;
            }
            else
            {
                // Current node is distinct
                prev = head;
            }

            head = head->next;
        }

        return dummy.next;
    }
};