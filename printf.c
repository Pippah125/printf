#include"main.h"
#include<stdarg.h>
int _printf(const char *format, ...)
{
	va_list print
	va_start(print,format)
	va_arg(print, char *s)
	int x;
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '\0')
		{
			return;
		}
		if(format[x] == %)
			switch(format[x])
			{
				case d:
				(int result = va_arg(print,int))
					_putchar('0' + result);
				break;
				}
	}

