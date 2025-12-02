#include <stdio.h>

int main() {

    short s = 0x0302;
    int i = 0x04030201;
    long l = 0x0807060504030201;
    float f = 12.34f;
    double d = 56.78;
    long double ld = 90.12;

    unsigned char *ps = (unsigned char*)&s;
    unsigned char *pi = (unsigned char*)&i;
    unsigned char *pl = (unsigned char*)&l;
    unsigned char *pf = (unsigned char*)&f;
    unsigned char *pd = (unsigned char*)&d;
    unsigned char *pld = (unsigned char*)&ld;

    printf("Octets de short :\n");
    for (size_t k = 0; k < sizeof(short); k++)
        printf("%02x ", ps[k]);
    printf("\n\n");

    printf("Octets de int :\n");
    for (size_t k = 0; k < sizeof(int); k++)
        printf("%02x ", pi[k]);
    printf("\n\n");

    printf("Octets de long int :\n");
    for (size_t k = 0; k < sizeof(long); k++)
        printf("%02x ", pl[k]);
    printf("\n\n");

    printf("Octets de float :\n");
    for (size_t k = 0; k < sizeof(float); k++)
        printf("%02x ", pf[k]);
    printf("\n\n");

    printf("Octets de double :\n");
    for (size_t k = 0; k < sizeof(double); k++)
        printf("%02x ", pd[k]);
    printf("\n\n");

    printf("Octets de long double :\n");
    for (size_t k = 0; k < sizeof(long double); k++)
        printf("%02x ", pld[k]);
    printf("\n");

    return 0;
}
