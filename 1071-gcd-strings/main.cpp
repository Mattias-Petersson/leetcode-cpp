#include "Solution.h"
#include <cassert>

using namespace std;
int main()
{
    Solution s;
    assert("str1 is str2 repeating" && s.gcdOfStrings("ABCABC", "ABC") == "ABC");
    assert("No pattern" && s.gcdOfStrings("ABC", "XYZ") == "");
    assert("Empty input string works" && s.gcdOfStrings("", "XYZ") == "");
}