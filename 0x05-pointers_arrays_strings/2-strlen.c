#include <string.h>
/**
 * _strlen ---acter c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
int a;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

