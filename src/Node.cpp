#include "Practice/Node.h"

Node::Node(int d)
{
    data = d;
}

void Node::appendToTail(int d)
{
    Node* end = new Node(d);
    Node* n = this;
    while (n->next != nullptr)
    {
        n = n->next;
    }
    n->next = end;
}