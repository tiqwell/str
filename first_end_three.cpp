#include "str.h"

void itc_first_end_three(std::string str)
{
	if (itc_len(str) > 5)
	{
		for (int i = 0; i < 3; i++)
			std::cout << str[i];
		for (int i = itc_len(str) - 3; i < itc_len(str); i++)
			std::cout << str[i];
	}
	else
	{
		for (int i = itc_len(str); i > 0; i--)
			std::cout << str[0];
	}
}