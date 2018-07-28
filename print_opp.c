#include"holberton.h"
#include <unistd.h>
#include <stdarg.h>
/**
 *_printfc - prints an input char
 *@args: the input char
 *Return: void
 */


int _printfc(va_list args)
{
	_putchar((char)va_arg(args, int));
}


/**
 *_printfs- prints an input string
 *@args: input string
 *Return: void
 */


int _printfs(va_list args)
{
	int i;
	char c = 'a';
	/*make test for is string maby or maby not
	 I am testing with printfd and will test later*/
	while (1)
	{
		c = (char)va_arg(args, int);
		if (c == '\0')
			break;
		_putchar(c);
	}
	return (0);
}


/**
 *_printfp- prints % char
 */


void _printfp(void)
{
	_putchar('%');
}




/**
 *_printfi - prin
