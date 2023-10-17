#include "main.h"
/**
 * *print_str-format inputted string
 * *@str:inputted string
 * *Return:count of printed numbers
 * **/
int print_str(char *str)
{
	int count = 0;

	while(*str != '\0')
	{
	write(1,&str,1);
	count++;
	str++;
	}
	return (count);
}
