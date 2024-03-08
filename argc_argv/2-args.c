#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 *
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
		return (0);
}
