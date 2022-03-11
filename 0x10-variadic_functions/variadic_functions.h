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
typedef struct print
{
  char print;
  void(*f)(va_list ty);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
