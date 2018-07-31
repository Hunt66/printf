#include "holberton.h"


/**
 * _printfb - prints binary from decimal
 *@args: the input decimal number
 *Return: count of digets
 */


int _printfb(va_list args)
{
	unsigned int decimal = va_arg(args, int);
	unsigned int div;
	int count = 0;

	for (div = 1 ; div > decimal ; div = div * 2)
		;
	for (div = div / 2 ; div > 1 ; div = div / 2)
	{
		_putchar((decimal / div) + '0');
		decimal = (decimal % div);
		count++;
	}
	_putchar((decimal / div) + '0');
	return (count + 1);
}
