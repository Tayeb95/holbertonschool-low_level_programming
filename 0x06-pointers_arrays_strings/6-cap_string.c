#include "holberton.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */
char *cap_string(char *s)
{
	int i;
	char j[] = ",;.!?\" (){}\t\n";
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			for (k = 0; k < 14; k++)
			{
				if (s[i - 1] == j[k])
				{
					s[i] = s[i] - 32;
				}
			}
		}
	}
	return (s);
}
