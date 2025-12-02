#include "operator.h"

int somme(int a, int b) { return a + b; }
int difference(int a, int b) { return a - b; }
int produit(int a, int b) { return a * b; }
int quotient(int a, int b) { return b == 0 ? 0 : a / b; }
int modulo(int a, int b) { return b == 0 ? 0 : a % b; }
int et(int a, int b) { return a & b; }
int ou(int a, int b) { return a | b; }
int negation(int a) { return ~a; }

int operateur(int a, int b, char op) {
    switch(op) {
        case '+': return somme(a, b);
        case '-': return difference(a, b);
        case '*': return produit(a, b);
        case '/': return quotient(a, b);
        case '%': return modulo(a, b);
        case '&': return et(a, b);
        case '|': return ou(a, b);
        case '~': return negation(a);
        default: return 0;
    }
}
