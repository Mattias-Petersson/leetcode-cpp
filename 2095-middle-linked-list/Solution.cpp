#include "Solution.h"

ListNode *Solution::deleteMiddle(ListNode *head)
{
    if (!head->next)
        return nullptr;
    ListNode *turtle = head;
    ListNode *hare = head;
    ListNode *before_middle = head;
    while (hare && hare->next)
    {
        before_middle = turtle;
        turtle = turtle->next;
        hare = hare->next->next;
    }
    before_middle->next = turtle->next;
    delete turtle;
    return head;
}