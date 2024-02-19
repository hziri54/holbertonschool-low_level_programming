#include <stdio.h> 

/* *
 *main - main function
 *
 *Description: This function prints a phrase using puts.
 *
 *Return: Always returns 0 for success
 */

int main(void)
{	
	printf("\n %d octets pour variable de type char ",sizeof(char));
	printf("\n %d octets pour variable de type int ",sizeof(int));
	printf("\n %d octets pour variable de type long int ",sizeof(long int));
	printf("\n %d octets pour variable de type float ",sizeof(float))
	printf("\n %d octets pour variable de type float ",sizeof(long long int));
	return (0);
}
