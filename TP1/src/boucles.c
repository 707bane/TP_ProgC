#include <stdio.h>

int main(void) {
    int compteur = 5; // < 10

    if (compteur <= 0 || compteur >= 10) return 0;

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }
    return 0;
}
