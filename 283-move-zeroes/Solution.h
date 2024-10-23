#include <vector>
#include <iostream>

using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int *next_non_zero = &nums[0];
        int *iterator_ptr = &nums[0];
        for (int i : nums)
        {
            if (*iterator_ptr != 0)
            {
                std::swap(*next_non_zero, *iterator_ptr);
                next_non_zero++;
            }
            iterator_ptr++;
        }
    }
};