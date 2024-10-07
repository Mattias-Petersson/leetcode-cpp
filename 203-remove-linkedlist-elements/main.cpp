#include "ListNode.h"
#include <iostream>
int main()
{
    ListNode *head = new ListNode(0);
    ListNode *current = head;
    for (int i = 1; i < 10; i++)
    {
        current->next = new ListNode(i);
        current = current->next;
    }
    ListNodeHandler ListNodeRemover;
    ListNodeRemover.removeElements(head, 1);
    std::cout << "List is after removal:\n";
    while (head)
    {
        std::cout << head->val << "\n";
        head = head->next;
    }
    return 0;
}