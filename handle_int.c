#include "main.h"
/**
 * *print_int-format inputted iteger
 * *@num:inputted number
 * *Return:count of printed numbers
 * **/
int print_int(int num)
{
	int res = 0;
	int index,number;

	if (num<0)
	{ res++;
	_putchar('-');
	}
	for (index = 10; index <= num; index *= 10)
	{
		number = (num/index) %10;
		res++;
		_putchar('0'+ number);
	}
	
	return (1);
}
