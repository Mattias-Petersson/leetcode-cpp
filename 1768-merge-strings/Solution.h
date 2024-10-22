#include <iostream>

class Solution
{
public:
    std::string mergeAlternately(std::string word1, std::string word2)
    {
        const char *ptr_word_1 = word1.c_str();
        const char *ptr_word_2 = word2.c_str();
        std::string res{""};
        char esc_char = '\0';
        auto concatenateChar = [&](const char *&ptr)
        {
            if (*ptr != esc_char)
            {
                res += *ptr;
                ptr++;
            }
        };

        while (*ptr_word_1 != esc_char || *ptr_word_2 != esc_char)
        {
            concatenateChar(ptr_word_1);
            concatenateChar(ptr_word_2);
        }
        return res;
    }
};