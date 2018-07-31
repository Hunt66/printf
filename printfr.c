#include <stdarg.h>
#include "holberton.h"

/**
 * _printfr - reverse string
 * @args: string argument
 *
 * Description: Function takes a string and reverses it
 * Return: number of chars printed
 */
int _printfr(va_list args)
{
	char *s = va_arg(args, char *);
	int i, len = 0;


	if (!s)
		s = "(null);

	i = _strlen(s) - 1;
	len = i;

	for (; i >= 0; i--)
		_putchar(s[i]);

	return (len);
}
