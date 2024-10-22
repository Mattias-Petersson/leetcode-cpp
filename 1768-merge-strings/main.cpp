#include "Solution.h"
#include <iostream>
#include <cassert>

using namespace std;

int main()
{

    Solution s;
    std::string same_length = s.mergeAlternately(string{"Hey"}, string{"Dar"});
    assert("Same length strings work" && s.mergeAlternately(string{"Hey"}, string{"Dar"}) == "HDeayr");
    assert("Longer first string working" && s.mergeAlternately(string{"Hello"}, string("tea")) == "Hteelalo");
    assert("Longer second string working" && s.mergeAlternately(string("tea"), string("Hello")) == "tHeeallo");
    assert("Empty string working" && s.mergeAlternately(string{""}, string("Hello")) == "Hello");
}