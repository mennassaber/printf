#include "main.h"
/**
 *format_int-format inputted iteger
 *@num:inputted number
 *@num_base:base of the given number
 *Return:count of printed numbers
 **/
int format_int(int num, int num_base)
{
	int count = 0;
	char *nums = "0123456789abcdef";

	if (num < 0)
	{
	_putchar('-');
	return (format_int(-num, num_base) + 1);
	}
	else if (num < num_base)
	{
		_putchar(nums[num]);
		count += 1;
		return (count);
	}
	else
	{
		count = format_int(num / num_base, num_base);
		_putchar(format_int(num % num_base, num_base));
		count += 1;
		return (count);
	}
}
