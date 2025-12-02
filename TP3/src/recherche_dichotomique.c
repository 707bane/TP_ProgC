#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int t[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
        t[i] = rand() % 200 - 100;

    for (int i = 0; i < 99; i++)
        for (int j = 0; j < 99 - i; j++)
            if (t[j] > t[j + 1]) {
                int tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
            }

    printf("Tableau trie :\n");
    for (int i = 0; i < 100; i++)
        printf("%d ", t[i]);
    printf("\n");

    int n;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &n);

    int debut = 0;
    int fin = 99;
    int present = 0;

    while (debut <= fin) {
        int mid = (debut + fin) / 2;
        if (t[mid] == n) {
            present = 1;
            break;
        }
        if (n < t[mid])
            fin = mid - 1;
        else
            debut = mid + 1;
    }

    if (present)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}
