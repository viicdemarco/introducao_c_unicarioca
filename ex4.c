#include <stdio.h>

int main() {
    int n, a1, a2, a3, a4, a5, r;
    printf("\nDigite o primeiro termo (a1): ");
    scanf("%i", &a1);
    printf("\nDigite a razao (r): ");
    scanf("%i", &r);
    a2 = a1 + 2 * r; 
    a3 = a2 + 2 * r;
    a4 = a3 + 2 * r;
    a5 = a4 + 2 * r;
    
    printf("a1 = %i\n", a1);
    printf("a2 = %i\n", a2);
    printf("a3 = %i\n", a3);
    printf("a4 = %i\n", a4);
    printf("a5 = %i\n", a5);
    return 0;
}

