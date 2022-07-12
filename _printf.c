#include <stdarg.h>
#include "main.h"
#include <stdio.h>

<<<<<<< HEAD
int _printf(const char *format, ...){
  int count = 0, i;
  
  va_list data;
  va_start(data, format);

  /* _printf("%s", 'Hello') */
  
  for (i = 0; format[i] != '\0'; ){
    
    /* count the number of characters */
    /* print to the screen each character counted */
    if (format[i] != '%'){
      count += _putchar(format[i]);
      i++;
    }
    else if (format[i] == '%' && format[i+1] !=' '){
      switch (format[i + 1]){
        case 'c':
            /* print the character from the va_arguments */
            count += _putchar(va_arg(data, int));
            break;
        case 's':
            count += print_string(va_arg(data, char *));
            break;
        case '%':
            /* print the character from the va_arguments */
            count += _putchar('%');
            break;
        case 'd':
            count += print_decimal(va_arg(data, int));
            break;
        case 'i':
            count += print_decimal(va_arg(data, int));
            break;
        case 'b':
            count += print_binary(va_arg(data, int));
            break;
        case 'u':
            count += print_unsigned(va_arg(data, unsigned int));
            break;
        default:
            break;
      }
      
      i += 2;
    }
    
    
  }
  

  return (count);
=======
/**
 * _printf - prints anything according to a format
 * @format: the format string
 *
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	int sum = 0;
	va_list ap;
	char *p, *start;
	params_t params = PARAMS_INIT;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = (char *)format; *p; p++)
	{
		init_params(&params, ap);
		if (*p != '%')
		{
			sum += _putchar(*p);
			continue;
		}
		start = p;
		p++;
		while (get_flag(p, &params)) /* while char at p is flag char */
		{
			p++; /* next char */
		}
		p = get_width(p, &params, ap);
		p = get_precision(p, &params, ap);
		if (get_modifier(p, &params))
			p++;
		if (!get_specifier(p))
			sum += print_from_to(start, p,
				params.l_modifier || params.h_modifier ? p - 1 : 0);
		else
			sum += get_print_func(p, ap, &params);
	}
	_putchar(BUF_FLUSH);
	va_end(ap);
	return (sum);
>>>>>>> dd9a74beceb3bb7f4b573d3c5f5d02bd43342c54
}
