#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
*/
int main(void)
{
	int t = 0;

	while (t < 10)
	{
		putchar(t + '0');
		if (t < 9)
		{
			putchar(44);
			putchar(32);
		}
		t++;
	}
	putchar('\n');

	return (0);
}
