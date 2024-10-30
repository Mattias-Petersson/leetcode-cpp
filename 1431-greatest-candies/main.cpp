#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int biggestElement = *max_element(candies.begin(), candies.end());
    vector<bool> res(size(candies));
    for (int i = 0; i < candies.size(); i++)
    {
        res[i] = candies[i] + extraCandies >= biggestElement ? true : false;
    }
    return res;
}
