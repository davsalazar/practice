#ifndef PROBLEM2_1_H
#define PROBLEM2_1_H

#include "Practice/Problem.h"
#include "Practice/Node.h"
using namespace std;

// Removes duplicates from unsorted linked list

class Problem2_1: public Problem
{
    Node* head;
    public:
        Problem2_1(Node* h);
        void solve();
    private:
        void remove_duplicates(Node* node);
};

#endif