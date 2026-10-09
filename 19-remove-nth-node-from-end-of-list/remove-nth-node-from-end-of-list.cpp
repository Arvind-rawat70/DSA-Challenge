
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int count = 0;
        ListNode *ptr = head;

        while(ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        count = count - n;
        if(count == 0)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        ptr = head;
        while(count > 1)
        {
            ptr = ptr->next;
            count--;
        }
        ListNode* temp = ptr->next;
        ptr->next = temp->next;
        delete temp;
        return head;
    }
};
