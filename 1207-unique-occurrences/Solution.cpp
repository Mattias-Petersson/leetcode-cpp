#include "Solution.h"
#include <map>
#include <iostream>
#include <set>
bool Solution::unique_occurrences(vector<int> &arr)
{
    map<int, int> num_counter;
    for (int i : arr)
        num_counter[i]++;

    set<int> occurrences;
    for (auto &pair : num_counter)
        occurrences.insert(pair.second);

    return occurrences.size() == num_counter.size();
}