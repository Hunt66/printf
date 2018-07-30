#include<stdarg.h>
#include"holberton.h"


int int_pow(int x, int y);
void print_number(int n);
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
