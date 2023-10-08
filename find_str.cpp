#include "str.h"

int itc_find_str(std::string str1, std::string str2) {
    int len1 = itc_len(str1);
    int len2 = itc_len(str2);
    std::string a;
    for (int i = 0; i <= len1 - len2; i++)
    {
        for (int h = 0; h < len2; h++)
            a += str1[i + h];
        if (a == str2)
            return i;
        a = "";
    }
    return -1;
}
