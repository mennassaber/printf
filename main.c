#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
	return count;
}
int _constlen(const char *con)
{
	int len = 0;

	while(*con != '\0')

	{
		len += 1; 
		con++;
	} 
	return len;}
