#include <map>
#include "TwoSum.h"

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    std::map<int, int> map;
    for (int i = 0; i < nums.size(); ++i)
    {
        int val = nums[i];
        int difference = target - val;
        if (map.count(difference))
        {
            return {map[difference], i};
        }
        else
        {
            map[val] = i;
        }
    }
    return {0, 0};
}