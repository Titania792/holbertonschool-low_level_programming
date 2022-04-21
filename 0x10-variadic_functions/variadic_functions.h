#ifndef VAR_H
#define VAR_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
*struct print - aaa
*@print: aa
*@ty: aa
*/
typedef struct pr
{
  char ty;
  void (*f)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_string(va_list s);
void print_float(va_list f);
void print_int(va_list i);
void print_char(va_list c);

#endif
