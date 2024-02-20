#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the variable n
 * and print the last digit of n along with specific messages.
 *
 * Return: Always 0 for success.
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Le dernier chiffre de %d est ", n);

    // Obtenez le dernier chiffre de n en prenant le reste de la division par 10
    int lastDigit = n % 10;

    // Affiche le dernier chiffre de n
    printf("%d ", lastDigit);

    printf("et est ");

    // Applique les conditions demandées
    if (lastDigit > 5)
    {
        printf("supérieur à 5");
    }
    else if (lastDigit == 0)
    {
        printf("0");
    }
    else
    {
        printf("inférieur à 6 et différent de 0");
    }

    printf("\n");

    return (0);
} 
