#include <stdio.h>

int main(void) {
    char chaine1[100] = "Hello";
    char chaine2[100] = " World!";
    char copie[100];
    char concat[200];
    int i, j;

    // 1️⃣ Calcul de la longueur de chaine1
    int longueur = 0;
    while (chaine1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de la première chaîne : %d\n", longueur);

    // 2️⃣ Copie de chaine1 dans copie
    for (i = 0; chaine1[i] != '\0'; i++) {
        copie[i] = chaine1[i];
    }
    copie[i] = '\0'; // fin de chaîne
    printf("Copie de la première chaîne : %s\n", copie);

    // 3️⃣ Concaténation de chaine1 et chaine2
    // Copie d’abord chaine1 dans concat
    for (i = 0; chaine1[i] != '\0'; i++) {
        concat[i] = chaine1[i];
    }

    // Puis ajout de chaine2 à la suite
    for (j = 0; chaine2[j] != '\0'; j++) {
        concat[i + j] = chaine2[j];
    }
    concat[i + j] = '\0'; // fin de chaîne

    printf("Concaténation des deux chaînes : %s\n", concat);

    return 0;
}
