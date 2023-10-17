#include "main.h"
/**
 *handle_holder-check specifier to output correct string
 *@h:specifier
 *@arg:argument list
 *Return:count of printed letters
 **/
int handle_holder(char h, va_list arg)
{
	char c;
	char *str;
	int count = 0;
	int num;

	switch (h)
	{
		case'c':
			c = va_arg(arg, int);
			write(1, &c, 1);
			count += 1;
			break;
		case 's':
			str = va_arg(arg, char*);
			write(1, str, _strlen(str));
			print_str(str);
			count += 1;
			break;
		case '%':
			write(1, "%", 1);
			count += 1;
			break;
		case 'i':
			num = va_arg(arg, int);
			print_int(num);
			break;
		default:
			break;
	}
	return (count);
}
