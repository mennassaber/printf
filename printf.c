#include "main.h"
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
	int num;
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
					break;
					case'i':
					num =va_arg(arg,int);
					_putchar(num);
					/*write(1, &num, 1);*/
					break;
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
