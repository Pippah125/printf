#include"main.h"
#include<stdarg.h>
int _printf(const char *format, ...)
{
	int x;
	int y = 0;

	va_list print;
	va_start(print,format);
	va_arg(print, int)
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '\0')
		{
			return;
		}
		if(format[x] != '%')
		{
			_putchar('format[x]');
				y++;
		}
		return (y);
	}
	va_end(print);
}

