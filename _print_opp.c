#include"holberton.h"
#include <stdarg.h>
#include <unistd.h>

int _strlen(char *s);
int _putchar(char c);

/**
 *_printfc - prints an input char
 *@args: the input char
 *Return: 0 if does not fail
 */


int _printfc(va_list args)
{
	_putchar((char)va_arg(args, int));
	return (1);
}


/**
 *_printfs- prints an input string
 *@args: input string
 *Return: 0 if does not fail
 */


int _printfs(va_list args)
{
	int i;
	char *str = (char *)va_arg(args, char *);

	if (str)
	  {



	    for (i = 0 ; str[i] ; i++)
	      {
		_putchar(str[i]);
	      }
	  
	    return ( _strlen(str));
	  }
	return (0);
}


/**
 *_printfp- prints % char
 */


int _printfp(va_list args)
{
  (void) args;
	_putchar('%');
	return (1);
}



/**
 *  _putchar - writes the character c to stdout
 *  @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  	return (write(1, &c, 1));
}


/**
 *_strlen- finds stringlength
 *@s: input string
 *Return: string length int
 */


int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;

	return (len);
}
