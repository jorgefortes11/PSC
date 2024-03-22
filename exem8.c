#include <stdio.h>
#include <stdlib.h>

int main() {
    void *pp;
    int *p1, p2 = 10;
    p1 = &p2;

    // Recebe o endereço de um inteiro
    pp = (void *)&p2;
    printf("Endereco em pp: %p \n", pp);

    // Recebe o endereço de um ponteiro para inteiro
    pp = (void *)&p1;
    printf("Endereco em pp: %p \n", pp);

    // Recebe o endereço guardado em p1 (endereço de p2)
    pp = (void *)p1;
    printf("Endereco em pp: %p \n", pp);

    system("pause");
    return 0;
}
