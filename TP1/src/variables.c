#include <stdio.h>

int main(void) {
    printf("Affichage des valeurs des types de base :\n\n");

    // --- char ---
    signed char c1 = -100;
    unsigned char c2 = 200;
    printf("signed char : %d\n", c1);
    printf("unsigned char : %u\n\n", c2);

    // --- short ---
    short s1 = -32000;
    unsigned short s2 = 65000;
    printf("short : %d\n", s1);
    printf("unsigned short : %u\n\n", s2);

    // --- int ---
    int i1 = -100000;
    unsigned int i2 = 4000000000U;
    printf("int : %d\n", i1);
    printf("unsigned int : %u\n\n", i2);

    // --- long ---
    long l1 = -1000000000L;
    unsigned long l2 = 3000000000UL;
    printf("long : %ld\n", l1);
    printf("unsigned long : %lu\n\n", l2);

    // --- long long ---
    long long ll1 = -9000000000000000000LL;
    unsigned long long ll2 = 18000000000000000000ULL;
    printf("long long : %lld\n", ll1);
    printf("unsigned long long : %llu\n\n", ll2);

    // --- flottants ---
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
