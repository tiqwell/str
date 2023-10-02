#include "str.h"

std::string itc_reverse_str(std::string str)
{
	std::string a;
	for(int i = itc_len(str); i >= 0; i--)
		a.push_back(str[i]);
	return a;
}