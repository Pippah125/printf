#include"main.h"
#include<stdarg.h>
int _printf(const char *format, ...)
{
	int x;
	int y = 0;
	va_list print;
	va_start(print, format);
	for (x = 0; format[x] != '\0'; x++)
	{
		if(format[x] != '%')
		{
			_putchar(format[x]);
		}
		else if(format[x +1] == 'c')
		{
			_putchar(va_arg(print, int));
		}
		else if(format[x +1] == 's')
		{
			_put(va_arg(print, char s []));
		}
		y++;
	}
	va_end(print);
	return (y);
}
