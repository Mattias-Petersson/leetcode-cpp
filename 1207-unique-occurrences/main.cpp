#include "Solution.h"
#include <iostream>
#include <cassert>

int main()
{
    Solution s;
    vector<int> unique_elements{1, 2, 2, 1, 1, 3};
    assert("Three ones, two twos, one three should be true" && s.unique_occurrences(unique_elements));
    vector<int> one_of_each{1, 2, 3};
    assert("One one, one two, one three should be false" && !s.unique_occurrences(one_of_each));
    vector<int> empty_string{};
    assert("Empty string should be true" && s.unique_occurrences(empty_string));
    vector<int> one_one{1};
    assert("One one should be true" && s.unique_occurrences(one_one));
}