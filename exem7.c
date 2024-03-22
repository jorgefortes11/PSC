#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, x = 10;
    p = &x;

    printf("Conteudo apontado por p: %d \n", *p);

    (*p)++; // Incrementa o valor apontado por p

    printf("Conteudo apontado por p: %d \n", *p);

    *p = (*p) * 10; // Multiplica o valor apontado por p por 10

    printf("Conteudo apontado por p: %d \n", *p);

    system("pause");
    return 0;
}
