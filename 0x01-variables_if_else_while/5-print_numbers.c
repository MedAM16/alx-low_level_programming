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
	int s = '0';

	while (s >= '0' && s <= '9')
	{
		printf("%d", s);
		s++;
	}
	printf("\n");
	return (0);
}


