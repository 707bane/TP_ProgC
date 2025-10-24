#include <stdio.h>

int main(void) {
    int n = 5; // Hauteur de la pyramide (modifiable)
    int i, j;

    printf("Génération d'une pyramide de hauteur %d :\n\n", n);

    // Boucle principale : une ligne par niveau
    for (i = 1; i <= n; i++) {

        // 1. Afficher les espaces avant les nombres
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // 2. Afficher les nombres croissants
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Afficher les nombres décroissants (sans répéter le dernier)
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4. Saut de ligne après chaque niveau
        printf("\n");
    }

    printf("\nPyramide terminée !\n");

    return 0;
}
