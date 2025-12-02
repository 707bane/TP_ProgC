#include <stdio.h>
#include "operator.h"

int main() {

    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    int result = operateur(num1, num2, op);

    printf("Resultat : %d\n", result);

    return 0;
}
