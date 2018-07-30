#include <stdarg.h>
#include "holberton.h"

#define STRUCT_SIZE 5

int _printf(const char *format, ...)
{
	int i, j = 0, str_size = 0, string = 0;
	char byte = '\0';
	char specifier = '\0';
	va_list args;
	//fm_t list[] = {{'c', _printfc}, {'s', _printfs}, {'%', _printfp}, 
		//{'d', _printfd}, {'i', _printdi}};
	fm_t list[] = {{'c', _printfc}, {'s', _printfs}, {'p', _printfp}, 
		{'d', _printfd}, {'i', _printfd}};

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
					list[j].func(args);
					string = 1;
				}
				
			  	/*
				if (specifier == list.b)
				{
			  		list.func(args);
					string = 1;
				}
				*/
				j++;
			}

		}
		
		if (!string)
			_putchar(byte);

		string = 0;
	}
	
	va_end(args);
	return (str_size);
}
