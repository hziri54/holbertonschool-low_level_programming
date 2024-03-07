#include "main.h"
/**
 
print_chessboard - Write a function that prints the chessboard.*
Return: void
*
@a: char
*/
void print_chessboard(char (*a)[8])
{
    int b, c;

    for (b = 0; a[b][7]; b++)
    {
        for (c = 0; c < 8; c++)
            _putchar(a[b][c]);
        _putchar('\n');
    }
}

