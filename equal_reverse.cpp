#include "str.h"

bool itc_equal_reverse(std::string str)
{
	if(str == itc_reverse_str(str))
		return 1;
	return 0;
}