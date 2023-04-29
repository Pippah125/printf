#include"main.h"
int callback(int num)
{
	int count = 0;
	int n;
	if(num == 0)
	{
		return (0);
	}
	else
	{
		n = num % 10;
	}
	callback(n);
	_putchar(num % 10);
	count++;
	return(0);
}
