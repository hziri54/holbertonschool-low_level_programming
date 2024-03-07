#include "main.h"

/**
 
_strchr - locate c*
Return: NULL
*
@s: char
*
@c: char
*/
char _strchr(chars, char c)
{
    int a, b;

    for (a = 0; s[a]; a++)
    {
    }
    for (b = 0; b <= a; b++)
    {
        if (c == s[b])
        {
            s += b;
            return (s);
        }
    }

    return ('\0');
}
