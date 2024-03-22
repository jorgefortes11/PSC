#include <stdio.h>
#include <stdlib.h>

int main() {
    // Endereço hexadecimal da porta serial
    int *p = (int *)0x3F8;
    // O valor em decimal é convertido para seu valor hexadecimal: 0x5DC
    int *p1 = (int *)1500;

    printf("Endereco em p: %p \n", p);
    printf("Endereco em p1: %p \n", p1);

    system("pause");
    return 0;
}
