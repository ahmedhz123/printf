#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct format - data type that represent the format
 *
 * @id: the placeholder
 * @f: the function that holds the placeholders
 *
*/

typedef struct format
{
	char *id;
	int (*f)();
} match;


int print_string(va_list val);
int print_char(va_list val);
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_oct(va_list val);
int print_HEX_extra(va_list val);
int print_exc_string(va_list val);
int print_pointer(va_list val);
int print_hex_extra(va_list val);
int print_rot13(va_list val);
int print_revs(va_list val);

#endif
