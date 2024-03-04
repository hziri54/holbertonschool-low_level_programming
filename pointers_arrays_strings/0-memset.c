#include "main.h"

char *_memset(char *s, char b, unsigned int n);
{
    unsigned char memoire[10]; // Exemple d'une zone mémoire de 10 octets

    remplir_memoire(memoire, sizeof(memoire), 0xFF); // Remplit la mémoire avec l'octet 0xFF

    // Affichage de la mémoire pour vérification
    printf("Contenu de la mémoire remplie :\n");
    for (int i = 0; i < sizeof(memoire); ++i) {
        printf("%02X ", memoire[i]);
    }
    printf("\n");

    return 0;
}
