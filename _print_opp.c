#include"holberton.h"
#include <stdarg.h>
#include <unistd.h>


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

	/*I get a gcc error when I run printf on an int and it is
	 also true when I do it on strlen so this might work*/
	/*if (!strlen(str))
	  return (-1);*/


	    for (i = 0 ; str[i] ; i++)
	      {
		_putchar(str[i]);
	      }
	  
	    return (i - 1);
	  }
	return (1);
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

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;

	return (len);
}
