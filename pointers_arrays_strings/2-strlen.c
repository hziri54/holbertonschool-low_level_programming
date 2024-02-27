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
    char Str[1000];
    int i;
 
    printf("Enter the String: ");
    scanf("%s", Str);
 
    for (i = 0; Str[i] != '\0'; ++i);
 
    printf("Length of Str is %d", i);
 
    return 0;
}
