#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
* _printf - Prints formated text.
* @format: String with format of parameters.
* Return: Length of text printed.
*/
int _printf(const char *format, ...)
{
	int i = 0, c = 0;
	va_list list;

	if (format)
	{
		va_start(list, format);
		while (format[i])
		{
			if (format[i] == '%')
			{
				i++;
				if (!format[i])
				{
					return (-1);
				}
				if (conv(format, &i, &c, &list))
				{
					i++;
					continue;
				}
			}
			write(1, format + i++, 1);
			c++;
		}
		return (c);
	}
	return (-1);
}
