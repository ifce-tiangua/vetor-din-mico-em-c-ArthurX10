#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam, *vet, i;

    scanf("%d", &tam);

    vet = malloc(tam * sizeof(int));

    if (vet) {
        for (i = 0; i < tam; i++) {
            scanf("%d", &vet[i]);
        }

        printf("[");
        for (i = 0; i < tam; i++) {
            printf("%d", vet[i]);
            if (i < tam - 1) {
                printf(", ");
            }
        }
        printf("]\n");

        free(vet);
    }

    return 0;
}
