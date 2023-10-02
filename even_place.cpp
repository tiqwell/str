#include "str.h"

std::string itc_even_place(std::string str)
{
	std::string a;
	if (itc_len(str) > 1)
	{
		for (int i = 1; i < itc_len(str) + 1; i++)
		{
			if (i % 2 == 0)
				a.push_back(str[i - 1]);
		}
		return(a);
	}
	return "-1";
}