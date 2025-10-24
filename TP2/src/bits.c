#include <stdio.h>

int main(void) {
    unsigned int d = 1048577; // Exemple (binaire : 00000000 00010000 00000000 00000001)

    // Extraction des 4ème et 20ème bits
    int bit4 = (d >> 3) & 1;   // Décalage de 3 car on commence à 0
    int bit20 = (d >> 19) & 1; // Décalage de 19

    printf("Valeur de d = %u\n", d);
    printf("Bit 4  = %d\n", bit4);
    printf("Bit 20 = %d\n", bit20);

    if (bit4 == 1 && bit20 == 1)
        printf("\nRésultat : 1 (les deux bits sont égaux à 1)\n");
    else
        printf("\nRésultat : 0 (au moins un des deux bits n’est pas égal à 1)\n");

    return 0;
}
