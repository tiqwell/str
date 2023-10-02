#include "str.h"
std::string itc_cmp_str(std::string str1, std::string str2, int num)
{
	std::string res;
	for (int i = 0; i < num; i++)
		res.push_back(str1[i]);
	res += str2;
	for (int i = num; i <= itc_len(str1); i++)
		res.push_back(str1[i]);
	return res;
}