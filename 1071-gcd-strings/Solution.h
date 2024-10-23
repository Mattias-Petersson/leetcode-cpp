#include <iostream>
#include <numeric>
using namespace std;
class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (str1 == str2)
        {
            return str1;
        }
        // If they are not commutative, there's no gcd of strings
        if (str1 + str2 != str2 + str1)
        {
            return "";
        }
        int gcd_words = gcd(size(str1), size(str2));
        return str1.substr(0, gcd_words);
    }
};