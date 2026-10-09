
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *odd = NULL;
        ListNode *even = NULL;
        ListNode *o = NULL;
        ListNode *e = NULL;

        ListNode *ptr = head;
        int count = 1;

        while(ptr != NULL)
        {
            ListNode *nextNode = ptr->next;
            ptr->next = NULL;

            if(count % 2 != 0)
            {
                if(odd == NULL)
                {
                    odd = ptr;
                    o = ptr;
                }
                else
                {
                    o->next = ptr;
                    o = o->next;
                }
            }
            else
            {
                if(even == NULL)
                {
                    even = ptr;
                    e = ptr;
                }
                else
                {
                    e->next = ptr;
                    e = e->next;
                }
            }

            ptr = nextNode;
            count++;
        }

        o->next = even;

        return odd;
    }
};
