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

	int (*print)(va_list *);
} f_t;

int print_char(va_list *args);
int print_string(va_list *args);
int print_int(va_list *args);
int print_unsigned(va_list *args);
int print_octal(va_list *args);
int print_lower_hexadecimal(va_list *args);
int print_upper_hexadecimal(va_list *args);

#endif
