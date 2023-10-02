#include "str.h"

std::string itc_three_str(std::string str1, std::string str2, std::string str3)
{
	while(str1.find(str2) != -1)
	{
		int a = str1.find(str2);
		str1.replace(a, itc_len(str2), str3);
	}
	return str1;
}