/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool hasCycle(struct ListNode *head)
{
    bool result;
    if (head == NULL)
    {
        result = false;
    }
    else if (head->next == NULL)
    {
        result = false;
    }
    else if (head->next->next == NULL)
    {
        result = false;
    }
    else
    {
        struct ListNode *fast, *slow;
        fast = head->next;
        slow = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }
        }
        if (fast == NULL || slow == NULL)
        {
            result = false;
        }
    }
    return result;
}
