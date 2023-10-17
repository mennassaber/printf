#include "main.h"
/**
 *_strlen-measures the length of given string
 *@str:given input
 *Return:length of input
 **/
int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count += 1;
		str++;
	}
	return (count);
}
/**
 * _constlen-measure length of constant
 * @con:given const
 * Return:length of input
 **/
int _constlen(const char *con)
{
	int len = 0;

	while (*con != '\0')

	{
		len += 1;
		con++;
	}
	return (len);
}
