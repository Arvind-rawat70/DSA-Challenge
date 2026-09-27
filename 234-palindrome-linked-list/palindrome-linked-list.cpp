class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        ListNode *ptr = head;
        ListNode *temp = head;
        ListNode *front;
        ListNode *prev = NULL;

        vector<int> original;
        while(ptr != NULL)
        {
            original.push_back(ptr->val);
            ptr = ptr->next;
        }
        while(temp != NULL)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        int i = 0;
        while(prev != NULL)
        {
            if(original[i] != prev->val)
            {
                return false;
            }

            i++;
            prev = prev->next;
        }

        return true;
    }
};