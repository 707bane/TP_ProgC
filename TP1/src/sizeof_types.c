#include <stdio.h>

int main(void) {
    printf("Tailles des principaux types de base :\n\n");

    printf("char : %d octet(s)\n", (int)sizeof(char));
    printf("short : %d octet(s)\n", (int)sizeof(short));
    printf("int : %d octet(s)\n", (int)sizeof(int));
    printf("long : %d octet(s)\n", (int)sizeof(long));
    printf("long long : %d octet(s)\n", (int)sizeof(long long));
    printf("float : %d octet(s)\n", (int)sizeof(float));
    printf("double : %d octet(s)\n", (int)sizeof(double));
    printf("long double : %d octet(s)\n", (int)sizeof(long double));

    return 0;
}
