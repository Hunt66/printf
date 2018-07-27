#ifndef HOLBERTON_H
#define HOLBERTON_H

typedef struct format
{
	char b;
	void (*func)(va_list);
} fm_t

int _printf(const char *format, ...);
int _putchar(char c);
void printfc(va_list);
void printfs(va_list);
void printp(va_list);

#endif
