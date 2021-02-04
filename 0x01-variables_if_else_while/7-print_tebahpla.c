#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0
 */
int main(void)
{
	char t;

	for (t = 'z'; t >= 'a'; t--)
	{
		putchar(t);
	}
	putchar('\n');

	return (0);
}
