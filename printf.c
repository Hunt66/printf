#include <stdarg.h>
#include "holberton.h"

int int_pow(int x, int y);
int print_number(int n);
int _printf(const char *format, ...);
int _printfd(va_list args);


#define STRUCT_SIZE 5

/**
 * _printf - prints data and formats it
 * @format: input string to print
 *
 * Description: Function takes a string and prints it. Its able to parse
 * through format specifiers and prints variables datas accordingly
 * Return: 0 upon success
 */
int _printf(const char *format, ...)
{
	int i, j = 0, str_size = 0, count = 0, string = 0;
	char byte = '\0';
	char specifier = '\0';
	va_list args;

	fm_t list[] = {{'d', _printfd}, {'i', _printfd}, {'c', _printfc},
	  {'s', _printfs}, {'%', _printfp}};

	for (str_size = 0; format[str_size]; str_size++)
		;

	va_start(args, format);

	for (i = 0; i < str_size; i++)
	{
		byte = format[i];

		if (byte == '%')
		{
			specifier = format[++i];

			j = 0;

			while (j < STRUCT_SIZE)
			{
				if (specifier == list[j].b)
				{
					count += list[j].func(args);
					string = 1;
				}

				j++;
			}

		}

		else
			count++;

		if (!string)
			_putchar(byte);

		string = 0;
	}

	va_end(args);
	return (count);
}



/**
 *print_number- prints an intiger
 *@n: intiger to be printed
 *Return: void
 */


int print_number(int n)
{
  int hold, cnt, prt, out;
	unsigned int prt2;

	prt2 = 1;
	prt = 1;
	hold = n;
	cnt = 0;
	if (n < 0)
	{
		_putchar('-');
	}
	while (1)
	{
		hold = hold / 10;
		if (hold == 0)
			break;
		cnt++;
	}
	out = cnt;
	if (n >= 0 && cnt > 0)
	{
		prt = (n / int_pow(10, cnt));
		_putchar(prt + '0');
	}
	else if (cnt > 0)
	{
		prt = (n / int_pow(10, cnt));
		prt2 = prt * -1;
		_putchar(prt2 + '0');
	}
	cnt = cnt - 1;
	if (n >= 0)
	{
		for (cnt = cnt ; cnt > 0 ; cnt--)
		{
			prt = ((n / int_pow(10, cnt)) % 10);
			_putchar(prt + '0');
		}
	}
	else
	{
		for (cnt = cnt ; cnt > 0 ; cnt--)
		{
			prt = ((n / int_pow(10, cnt)) % 10);
			prt2 = prt * -1;
			_putchar(prt2 + '0');
		}
	}
	if (n != 0)
	{
		if (n >= 0)
		{
			prt = n % 10;
			_putchar(prt + '0');
		}
		else
		{
			prt = n % 10;
			prt2 = prt * -1;
			_putchar(prt2 + '0');
		}
	}
	if (n == 0)
		_putchar('0');
	return (out);
}


/**
 *int_pow- gets the power of two ints
 *@x: base
 *@y: power of this number
 *Return: power of these nums in int form
 */

int int_pow(int x, int y)
{
	int p;

	for (p = 1 ; y > 0 ; --y)
		p = p * x;
	return (p);
}

/**
 *_printfd - prints an int
 *@args: the int to be printed
 *Return: 0 if not fail
 */

int _printfd(va_list args)
{
  int count;
  int i = va_arg(args, int);

	count = print_number(i);
	return (count);
}
