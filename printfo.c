#include <stdarg.h>

#include <stdlib.h>

#include "holberton.h"



int _printfo(va_list args)
{

	int count, i;
	long unsigned int num = va_arg(args, unsigned int);
	long unsigned int eight = 8;
	int *hold_num = malloc((4) * 30);


	for (i = 0; num > 0; num /= eight, i++)
	{
		printf("%lu\n", num);
		hold_num[i] = (num % eight);
	}

	for (count = i - 1; count >= 0; count--)
		_putchar(hold_num[count] + '0');
	free(hold_num);
	return (i);

}
