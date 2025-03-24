#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);

/**
* struct format - Struct format
*
* @type: The format
*
* @print: The function associated
*/
typedef struct format
{
	char *type;

	void (*print)(va_list *);
} f_t;

void print_char(va_list *args);
void print_string(va_list *args);
void print_int(va_list *args);
void print_unsigned(va_list *args);

#endif
