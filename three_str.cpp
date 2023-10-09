#include "str_easy.h"

std::string itc_three_str(std::string str1, std::string str2, std::string str3) {
    int pos = itc_find_str(str1, str2);
    while (pos != -1) 
    {
        std::string hz = "";
        for (int i = 0; i < pos; i++)
            hz += str1[i];
        hz += str3;
        for (int i = pos + itc_len(str2); i < itc_len(str1); i++)
            hz += str1[i];
        str1 = hz;
        pos = itc_find_str(str1, str2);
    }
    return str1;
}
