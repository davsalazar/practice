#include "Practice/Problem2_1.h"

Problem2_1::Problem2_1(Node* h)
{
    head = h;
}

void Problem2_1::solve()
{
    remove_duplicates(head);
}

void Problem2_1::remove_duplicates(Node* node)
{
    if (node != nullptr && node->next != nullptr)
    {
        remove_duplicates(node->next);
        int val = node->data;
        Node* curr = node;
        while (curr != nullptr && curr->next != nullptr)
        {
            if (curr->next->data == val)
            {
                curr->next = curr->next->next;
            }
            curr = curr->next;
        }
    }
}