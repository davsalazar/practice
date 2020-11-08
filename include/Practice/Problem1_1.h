#ifndef PROBLEM1_1_H
#define PROBLEM1_1_H

#include "Practice/Problem.h"
#include <string>
#include <iostream>
using namespace std;

// Checks if string is all unique characters

class Problem1_1 : public Problem
{
    string str;
    public:
        Problem1_1(string s);

        void solve();
};

#endif