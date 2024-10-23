
#ifndef SOLUTION
#define SOLUTION

#include <vector>
#include <unordered_set>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2);

private:
    void remove_dupes(vector<int> &vec);
    vector<int> return_uniques(vector<int> &vec1, vector<int> &vec2);
};

#endif