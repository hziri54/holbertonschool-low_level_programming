#include "variadic_functions.h"

/**
 * print_char - Prints a char
 *
 * @pr: pointer
 */
void print_char(va_list  pr)
{
	printf("%c", va_arg(pr, int));
}

/**
 * print_int - Print int
 *
 * @pr: pointer
 */
void print_int(va_list pr)
{
	printf("%d", va_arg(pr, int));
}

/**
 * print_float - Prints a float
 *
 * @pr: pointer
 */
void print_float(va_list pr)
{
	printf("%f", va_arg(pr, double));
}

/**
 * print_string - Prints a string
 * @pr: pointer
 */
void print_string(va_list pr)
{
	char *s = va_arg(pr, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, a = 0;
	char *sep = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(list, format);

	while (format && (*(format + i)))
	{
		a = 0;

		while (a < 4 && (*(format + i) != *(funcs[a].t)))
			a++;

		if (a < 4)
		{
			printf("%s", sep);
			funcs[a].print(list);
			sep = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(list);
}
