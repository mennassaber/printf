#include "main.h"
/**
 *format_int-format inputted iteger
 *@input:inputted number
 *@num_base:base of the given number
 *Return:count of printed numbers
 **/
int format_int(long int input, int num_base)
{
	unsigned long int num, res = 0, ctn = 0, ptr, count = 0;
	char *nums = "0123456789abcdef";

	if (input == 0)
	{write(1, "0", 1);
	count = 1;
	}
	if (input < 0)
	{
	_putchar('-');
	count += 1;
	input = -1 * input;
	}
	num = (unsigned long int)input;
	while (num)
	{
		res = (res * num_base) + (num % num_base);
		if (res == 0)
		{
			ctn++;
		}
	count += 1;
	num = num / num_base;
	}
	while (res)
	{
		ptr = (res % num_base);
		_putchar(nums[ptr]);
		res = res / num_base;
	}
	while (ctn)
	{
		_putchar('0');
		ctn--;
	}
	return (count);
}
