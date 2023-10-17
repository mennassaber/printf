#include "main.h"
/**
 *_printf-produce output according to a format
 *@format:input string
 *Return:letter count
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i;
	int count = 0;

va_start(arg, format);
if (format == NULL)
{
	return (-1);
	}
else
{
	va_start(arg, format);
		for (i = 0; i < _constlen(format); i++)
		{
			if (format[i] == '%')
			{
				handle_holder(format[i + 1], arg);
			}
			if ((format[i] != '%') && (format[i] != '\0'))
			{
				if (i != 0 && format[i - 1] == '%')
				{
					continue;
				}
				_putchar(format[i]);
			}
		}
	}
	va_end(arg);
	return (count);
}
