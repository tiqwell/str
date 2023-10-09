#include "str_easy.h"

std::string itc_reverse_str(std::string str)
{
	if (str == "")
		return "";
	std::string a;
	for (int i = itc_len(str); i >= 0; i--)
		a += (str[i] - 1);
	return a;
}
