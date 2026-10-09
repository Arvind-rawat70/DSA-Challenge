
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if (head == NULL || left == right)
        {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        // 1. Move prev to the node just before left
        for (int i = 1; i < left; i++)
        {
            prev = prev->next;
        }

        // 2. Start reversing from position left
        ListNode* curr = prev->next;
        ListNode* next = NULL;

        // 3. Reverse the sublist
        for (int i = 0; i < right - left; i++)
        {
            next = curr->next;
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
        }

        return dummy->next;
    }
};
