class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head == NULL || head->next == NULL || k == 0)
            return head;

        int count = 0;
        ListNode* ptr = head;

        while(ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        k = k % count;

        if(k == 0)
            return head;

        // Find new head position
        int steps = count - k;

        ptr = head;

        // Move to node just before new head
        while(steps > 1)
        {
            ptr = ptr->next;
            steps--;
        }

        ListNode* q = ptr->next;  // new head

        // Find last node
        ListNode* p = q;

        while(p->next != NULL)
        {
            p = p->next;
        }

        // Connect old tail to old head
        p->next = head;

        // Break the old connection
        ptr->next = NULL;

        return q;
    }
};