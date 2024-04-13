#include "Merge.h"

void swap(std::vector<int> &nums1, int idx, std::vector<int> &nums2, int jdx)
{
}

void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
{
    // Handle base cases, if n or m is empty:
    if (n == 0)
        return;
    if (m == 0)
    {
        for (int i = 0; i < n; i++)
        {
            nums1[i] = nums2[i];
        }
    }
    // Otherwise sort the two lists
    while (m > 0 && n > 0)
    {
        if (nums1[m - 1] >= nums2[n - 1])
        {
            nums1[m + n - 1] = nums1[m - 1];
            m--;
        }
        else
        {
            nums1[m + n - 1] = nums2[n - 1];
            n--;
        }
    }
}