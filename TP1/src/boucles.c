#include <stdio.h>

int main() {
    int compteur = 5; 

    printf("Affichage d'un triangle rectangle avec des boucles (compteur = %d)\n\n", compteur);


    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
