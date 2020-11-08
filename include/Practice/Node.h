#ifndef NODE_H
#define NODE_H

class Node
{
    public:
        Node* next = nullptr;
        int data;        
        Node(int d);
        void appendToTail(int d);
};

#endif