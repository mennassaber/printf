#include "main.h"
/**
 *print_int-format inputted iteger
 *@num:inputted number
 *@num_base:base of the given number 
 *Return:count of printed numbers
 **/
int format_num(long num, int num_base)
{
	int count = 0;
	char *nums = "0123456789abcdef";

	if (num < 0)
	{
	_putchar('-');
	num = -1 * num;
	return (format_num(num, num_base));
	}
	else if (num < num_base)
	{
		num = nums[num];
		_putchar(num);
		return (count);
	}
	else {
		count = format_num(num / num_base, num_base);
		_putchar(format_num(num % num_base, num_base));
		return (count);
	}
}
