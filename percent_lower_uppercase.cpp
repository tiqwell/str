#include "str.h"

double itc_percent_lower_uppercase(std::string str)
{
	double upper = 0, lower = 0;

	for(int i = 0; i < itc_len(str); i++)
	{
		if (isupper(str[i]))
			upper++;
		if (islower(str[i]))
			lower++;
	}
	return upper / lower;
}