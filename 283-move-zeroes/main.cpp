#include "Solution.h"
#include <vector>
#include <cassert>

using namespace std;
int main()
{
    Solution s;
    std::vector<int> first_element_zero{0, 5, 6, 7};
    s.moveZeroes(first_element_zero);
    vector<int> last_element_zero{5, 6, 7, 0};
    assert("Works with first element zero" && first_element_zero == last_element_zero);
    vector<int> last_element_copy = last_element_zero;
    s.moveZeroes(last_element_zero);
    assert("Works with last element zero" && last_element_zero == last_element_copy);
}