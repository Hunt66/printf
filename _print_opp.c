#include"holberton.h"
#include <stdarg.h>



/**
 *_printfc - prints an input char
 *@args: the input char
 *Return: 0 if does not fail
 */


int _printfc(va_list args)
{
	_putchar((char)va_arg(args, int));
	return (0);
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
	  
	    return (0);
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
	return (0);
}
