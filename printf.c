#include "main.h"
int _printf(const char *format, ...)
{va_list arg;int i;
	char c;char *str;
if (format == NULL)
{return(-1);
	}
	else
	{va_start(arg, format);
		for (i = 0; i < _constlen(format); i++)
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{case 'c':
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
					default:
					break;
				}
			}if ((format[i] != '%') && (format[i] != '\0'))
			{
				if(i != 0 && format[i-1] == '%')
				{
					continue;}
				_putchar(format[i]);
			}
		}
	}
	va_end(arg);
	return (0);}
