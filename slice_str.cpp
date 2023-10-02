#include "str.h"

std::string itc_slice_str(std::string str, int start, int end)
{
	std::string res;
	if (start > itc_len(str))
		return str;
	else if(end > itc_len(str))
	{
		for (int i = start; i <= itc_len(str); i++)
		{
			res.push_back(str[i]);
		}
		return res;
	}
	else
	{
		for (int i = start; i <= end; i++)
		{
			res.push_back(str[i]);
		}
		return res;
	}
}