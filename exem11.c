#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;
    int *p = &x;
    int **p2 = &p;

    // Endereço em p2
    printf("Endereco em p2: %p\n", (void *)p2);

    // Conteudo do endereço
    printf("Conteudo em *p2: %p\n", (void *)*p2);

    // Conteudo do endereço do endereço
    printf("Conteudo em **p2: %d\n", **p2);

    getchar(); // Espera que o usuário pressione Enter
    return 0;
}
