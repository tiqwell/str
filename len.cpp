#include "str.h"

long long itc_len(std::string str)
{
	int a = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		a++;
	}
	return a;
}
