#include <stdio.h>

int main(void) {
    printf("Tailles des types de base (en octets) :\n\n");

    printf("signed char : %d\n", (int)sizeof(signed char));
    printf("unsigned char : %d\n\n", (int)sizeof(unsigned char));

    printf("short : %d\n", (int)sizeof(short));
    printf("unsigned short : %d\n\n", (int)sizeof(unsigned short));

    printf("int : %d\n", (int)sizeof(int));
    printf("unsigned int : %d\n\n", (int)sizeof(unsigned int));

    printf("long int : %d\n", (int)sizeof(long int));
    printf("unsigned long int : %d\n\n", (int)sizeof(unsigned long int));

    printf("long long int : %d\n", (int)sizeof(long long int));
    printf("unsigned long long int : %d\n\n", (int)sizeof(unsigned long long int));

    printf("float : %d\n", (int)sizeof(float));
    printf("double : %d\n", (int)sizeof(double));
    printf("long double : %d\n", (int)sizeof(long double));

    return 0;
}
