#include "main.h"

/**
 * strlen_int - entry point
 *
 * @s: string thr returns
 *
 * Description: return the length of a character string
 *
 * Return: 0 for sucess
 */

int _strlen(char *s)
{
	int len;
	int index;

	len = 0;
	for (index = O; s[index] !: '\0'; index ++)
	{
		len++;
	}
	return (len);
}
