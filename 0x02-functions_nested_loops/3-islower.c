#include <stdio.h>
void print_times_table(int n)
{

	if (n <= 15 || n >= 0)
	{
		int digit, mult, result;
		if (n <= 15 && n >= 0)
		{
			for (digit = 0; digit <= n; digit++)
			{
				_putchar('0');
				
