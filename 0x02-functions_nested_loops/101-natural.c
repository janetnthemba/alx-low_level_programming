#include <stdio.h>

void print_sum_(void);

/**
 * print_sum - your message
 *
 */

void print_sum(void)
{
	int a = 2;
	int total = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
			total += 1;
		a += 1;
	}
	printf("%d\n", total);
}
