#include "Merge.h"

void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
{
    int i_m = m - 1;
    int i_n = n - 1;
    int i_mn = m + n - 1;

    while (i_n >= 0)
    {
        if (i_m >= 0 && nums1[i_m] > nums2[i_n])
        {
            nums1[i_mn] = nums1[i_m];
            i_mn--;
            i_m--;
        }
        else
        {
            nums1[i_mn] = nums2[i_n];
            i_mn--;
            i_n--;
        }
    }
}