#include "Solution.h"

vector<vector<int>> Solution::findDifference(vector<int> &nums1, vector<int> &nums2)
{
    remove_dupes(nums1);
    remove_dupes(nums2);
    return {return_uniques(nums1, nums2), return_uniques(nums2, nums1)};
}

/**
 * My compiler said that unordered_set to vector to sort was fastest.
 * Submitting on Leetcode said that sorting a vector and erasing was
 * faster. Went for solution with sorting and erasing instead.
 */
void Solution::remove_dupes(vector<int> &vec)
{
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

vector<int> Solution::return_uniques(vector<int> &vec1, vector<int> &vec2)
{
    vector<int> res{};
    for (int e : vec1)
    {
        if (find(vec2.begin(), vec2.end(), e) == vec2.end())
        {
            res.push_back(e);
        }
    }
    return res;
}