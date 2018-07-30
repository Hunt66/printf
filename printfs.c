#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>


int _printfs(va_list args)
{
	char *s = va_arg(args, char *);
	int i;

	if (s)
 	{
		for (i = 0; s[i]; i++)
			_putchar(s[i]);

		return (0);
	}

	return (1);
}
	//CHECK PRINTF OUTPUT FOR NULL STRINGS	  
