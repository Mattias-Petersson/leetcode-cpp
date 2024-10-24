#include "Solution.h"
#include <vector>

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
           (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
string Solution::reverseVowels(string s)
{
    vector<pair<char, int>> vowelPositions;
    for (int i = 0; i <= s.size(); i++)
    {
        if (isVowel(s[i]))
        {
            vowelPositions.push_back({s[i], i});
        }
    }
    int n = vowelPositions.size();
    for (int i = 0; i < n; i++)
    {
        s[vowelPositions[i].second] = vowelPositions[n - i - 1].first;
    }
    return s;
}