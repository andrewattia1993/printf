#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct format
{
	char *id;
	int (*f)();
} match;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int print_string(va_list va);
int _strlen(char *s);
int _strlenc(const char *s);
int print_percentage(void);
int print_dec(va_list args);
int print_int(va_list args);
int print_oct(va_list val);
int print_hexa(va_list val);
int print_HEXA(va_list val);
int print_spe_string(va_list val);
int print_HEXA_spe(unsigned int num);
int print_reverse(va_list val);



#endif
