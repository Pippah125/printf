#include"main.h"
#include<stdarg.h>
#include<stddef.h>
int _printf(const char *format, ...)
{
	int x;
	int y = 0;
	va_list print;
	va_start(print, format);
	if(format == NULL)
	{
		return(-1);
	}
	for (x = 0; format[x] != '\0'; x++)
	{
		if(format[x] != '%')
		{
			_putchar(format[x]);
		}
		else if (format[x] == '%')
		{
			x++;
		}
		else if(format[x +1] == 'c')
		{
			_putchar(va_arg(print, int));
			x++;
		}
		else if(format[x +1] == 's')
		{
			int v = _puts(va_arg(print, char *));
			x++;
			y += (v - 1);
		}
		else if(format[x + 1] == '%')
		{
			_putchar('%');
			x++;
		}

		y++;
	}
	va_end(print);
	return (y);
}
