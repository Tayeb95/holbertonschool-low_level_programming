#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use putchar, and only 3 times.
 * Return: 0
 */
int main(void)
{
	char t;
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (t = 'a'; t < 'g'; t++)
	{
		putchar(t);
	}
	putchar('\n');

	return (0);
}

