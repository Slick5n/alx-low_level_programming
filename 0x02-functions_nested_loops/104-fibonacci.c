#include <stdio.h>
/**
 * main -Entry point
 * Description: prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long x = 0, y = 1, z, a, b, c, d;

	for (count = 1; count <= 90; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}
	a = x % 1000;
	x = x / 1000;
	b = y % 1000;
	y = y / 1000;

	while (count <= 98)
	{
		d = (a + b) / 1000;
		c = (a + b) - d * 1000;
		z = (x + y) + d;
		x = y;
		y = z;
		a = b;
		b = c;
		if (c >= 100)
		{
			printf("%lu%lu", z, c);
		}
		else
		{
			printf("%lu0%lu", z, c);
		}
		if (count < 98)
		{
			printf(", ");
		}
		count++;
	}
	putchar('\n');
	return (0);
}
