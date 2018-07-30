#include "holberton.h"
#include "stdarg.h"

int _printfc(va_list args)
{
	_putchar(va_arg(args, int));
	return (0);
}
