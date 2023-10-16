#include "main.h"
int _putchar(char c)
{return (write(1, &c, 1));}

int _strlen(char *str)
{int count = 0;
while (*str != '\0')
{count +=1; str++;}
return count;}

int _constlen(const char *con)
{int len = 0;
while(*con != '\0')
{len+=1; con++;} return len;}

/**
 *_printf-a function that produces output according to a format
 *@format:input by user
 *Return:number of characters printed
 **/
int _printf(const char *format, ...)
{
	va_list arg;
	int i;
	char c;
	char *str;

	if (format == NULL)
	{
		return(-1);
	}
	else
	{va_start(arg, format);
		
		for (i = 0; i < _constlen(format); i++)
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'c':
					c = va_arg(arg, int);
					write(1, &c, 1);
					break;
					case 's':
					str = va_arg(arg, char*);
					write(1, str, _strlen(str));
					
					break;
					case '%':
					c = '%';
					write(1, &c, 1);
					
					default:
					break;
				}
			}
			if ((format[i] != '%') && (format[i] != '\0'))
			{
				if(i != 0 && format[i-1] == '%')
				{continue;}
				_putchar(format[i]);
			}
		}
	}
	va_end(arg);
	return (0);
}
