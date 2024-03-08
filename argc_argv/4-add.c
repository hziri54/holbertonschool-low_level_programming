#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Write a program that adds positive numbers.
 *
 * @argc: int
 *
 * @argv: char
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	unsigned int ub, uc = 0;
	char *d;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			d = argv[a];

			for (ub = 0; ub < strlen(d); ub++)
			{
				if (d[ub] < 48 || d[ub] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			uc += atoi(d);
			d++;
		}
		printf("%d\n", uc);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
