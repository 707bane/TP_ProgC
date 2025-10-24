#include <stdio.h>

int main() {
    printf("Valeurs des types de base en C :\n\n");

    // Types caractères
    signed char c_signed = -100;
    unsigned char c_unsigned = 200;
    printf("char (signed)        : %d\n", c_signed);
    printf("char (unsigned)      : %u\n\n", c_unsigned);

    // Types entiers courts
    signed short s_signed = -32000;
    unsigned short s_unsigned = 65000;
    printf("short (signed)       : %d\n", s_signed);
    printf("short (unsigned)     : %u\n\n", s_unsigned);

    // Types entiers
    signed int i_signed = -100000;
    unsigned int i_unsigned = 4000000000U;
    printf("int (signed)         : %d\n", i_signed);
    printf("int (unsigned)       : %u\n\n", i_unsigned);

    // Types long
    signed long l_signed = -1000000000L;
    unsigned long l_unsigned = 3000000000UL;
    printf("long int (signed)    : %ld\n", l_signed);
    printf("long int (unsigned)  : %lu\n\n", l_unsigned);

    // Types long long
    signed long long ll_signed = -9000000000000000000LL;
    unsigned long long ll_unsigned = 18000000000000000000ULL;
    printf("long long (signed)   : %lld\n", ll_signed);
    printf("long long (unsigned) : %llu\n\n", ll_unsigned);

    // Types à virgule flottante
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;
    printf("float                : %f\n", f);
    printf("double               : %lf\n", d);
    printf("long double          : %Lf\n", ld);

    return 0;
}
