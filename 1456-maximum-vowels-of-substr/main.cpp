#include <vector>
#include <iostream>

using namespace std;

bool is_vowel(const char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int maxVowels(string s, int k)
{
    int curr_vowels{0};

    for (int i = 0; i < k; i++)
        curr_vowels += is_vowel(s[i]);

    int max_vowels{curr_vowels};

    for (int i = k; i < s.size(); i++)
    {
        curr_vowels += is_vowel(s[i]);
        curr_vowels -= is_vowel(s[i - k]);
        max_vowels = max(max_vowels, curr_vowels);
    }
    return max_vowels;
}

int main()
{
    string s{"weallloveyou"};
    cout << maxVowels(s, 3);
}
