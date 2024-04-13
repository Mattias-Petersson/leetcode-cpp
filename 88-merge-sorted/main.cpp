#include <iostream>
#include "Merge.h"

void print(std::vector<int> &arr)
{
    for (int i : arr)
    {
        std::cout << i << "\n";
    }
    std::cout << "----"
              << "\n";
}

void example1()
{
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;
    merge(nums1, m, nums2, n);
    print(nums1);
}

void example2()
{
    std::vector<int> nums1 = {1};
    int m = 1;
    std::vector<int> nums2 = {};
    int n = 0;
    merge(nums1, m, nums2, n);
    print(nums1);
}

void example3()
{
    std::vector<int> nums1 = {0};
    int m = 0;
    std::vector<int> nums2 = {1};
    int n = 1;
    merge(nums1, m, nums2, n);
    print(nums1);
}

int main()
{
    example1();
    example2();
    example3();
    return 0;
}