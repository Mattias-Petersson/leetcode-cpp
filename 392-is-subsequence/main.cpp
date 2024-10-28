#include <iostream>

using namespace std;
bool isSubsequence(const string &s, const string &t)
{
    if (s.size() == 0)
        return true;

    if (t.size() == 0)
        return false;

    int s_idx{0};
    int t_idx{0};
    while (s_idx < s.size() && t_idx < t.size())
    {
        if (s[s_idx] == t[t_idx])
        {
            s_idx++;
        }
        t_idx++;
    }
    return s_idx == s.size();
}

int main()
{
    string test{"abc"};
    string t{"ahbgdc"};
    cout << isSubsequence(test, t);
}