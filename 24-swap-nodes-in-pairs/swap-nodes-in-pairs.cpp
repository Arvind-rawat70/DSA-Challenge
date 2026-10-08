class Solution {
public:
    ListNode* swapPairs(ListNode* head) 
    {
        // Base case
        if(head == NULL || head->next == NULL)
        {
            return head;
        }

        // Second node of current pair
        ListNode* second = head->next;

        // Swap remaining pairs
        head->next = swapPairs(second->next);

        // Put second node before first node
        second->next = head;

        return second;
    }
};