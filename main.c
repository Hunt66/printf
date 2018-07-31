#include "holberton.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int ui;

	  ui = (unsigned int)INT_MAX +1024;
	  _printf("ui is: %d\n", ui);
	  /*_printf("%b\n", 98);*/
	  printf("testing negative with real: %u\n", -10284);
	  _printf("testing negative: %b\n", 0);
     _printf("testing ui: %b\n", ui);
    return (0);
}
