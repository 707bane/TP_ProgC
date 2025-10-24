#include <stdio.h>

int main(void) {
    int num1 = 12;
    int num2 = 4;
    char op = '+'; 

    printf("num1 = %d, num2 = %d, op = %c\n\n", num1, num2, op);
    printf("Résultat de l'opération : ");

    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("Erreur : division par zéro\n");
            break;
        case '%':
            if (num2 != 0)
                printf("%d\n", num1 % num2);
            else
                printf("Erreur : modulo par zéro\n");
            break;
        case '&':
            printf("%d\n", num1 & num2); 
            break;
        case '|':
            printf("%d\n", num1 | num2); 
            break;
        case '~':
            printf("~num1 = %d, ~num2 = %d\n", ~num1, ~num2); 
            break;
        default:
            printf("Opérateur non reconnu.\n");
    }

    return 0;
}


