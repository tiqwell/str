#include "str.h"

double itc_percent_lower_uppercase(std::string str)
{
	double upper = 0, lower = 0;

	for(int i = 0; i < itc_len(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			upper++;
		if (str[i] >= 'a' && str[i] <= 'z')
			lower++;
	}
	return upper / lower;
}
