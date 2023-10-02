#include "str.h"
std::string itc_cmp_str(std::string str1, std::string str2, int num)
{
	if (itc_len(str2) == 0)
		return str1;
	std::string res = "";
	for (int i = 0; i < num; i++)
		res += str1[i];
	std::string res2 = res;
	if(num < itc_len(str1))
	{
		for (int i = num; i < itc_len(str1) && itc_len(res) != itc_len(str2) + itc_len(res2); i++)
		{
			res += str2[i - num];
		}
	}
	if(itc_len(res) < itc_len(str1))
	{
		for (int i = num + itc_len(str2); i <= itc_len(str1); i++)
			res += str1[i - itc_len(str2)];
	}
	return res;
}
