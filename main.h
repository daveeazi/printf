#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
unsigned int print_number(int n, short sign);
short conv(const char *format, int *i, int *c, va_list *list);
int print_base(unsigned int number, short base, short upper);
int print_rev(char *s);
int rot13(char *cypher);
int case_p(unsigned long int ptr);
int spchr(char *s);
int flags(const char *format, int *i, va_list *list);
int flags2(const char *, int *, va_list *, int, int, int, int);

#endif /* MAIN_H */
