#include "Practice/Problem1_1.h"

Problem1_1::Problem1_1(string s) : str(s) {}

void Problem1_1::solve()
{
    // Assuming all ASCII characters
    int chars[128];

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        int ascii_value = int(c);
        chars[ascii_value]++;
    }

    bool allUnique = true;
    for (int i = 0; i < 128; i++)
    {
        if (chars[i] > 1)
        {
            allUnique = false;
            break;
        }
    }

    if (allUnique)
    {
        cout << "All unique characters." << endl;
    }
    else
    {
        cout << "Not all unique characters." << endl;
    }
}