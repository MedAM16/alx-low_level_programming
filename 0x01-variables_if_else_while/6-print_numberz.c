#include <stdio.h>

/**
 *  main - entry point
 *
 *  Description: false or true validation
 *
 *  Return: 0 (success)
*/

int main(void)
{
	int m = 0;

	while (m >= 0 && m <= 9)
	{
		putchar(m);
		m++;
	}
	putchar(\n);
	return (0);
}

