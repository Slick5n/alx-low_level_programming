#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{
	int i;

	i = 98;
	if (positive_or_negative(i) > 0)
		printf("%d\n is positive", i);
	else if (positive_or_negative(i) == 0)
		printf("%d\n is zero", i);
	else
		printf("%d\n is negative", i);
}
