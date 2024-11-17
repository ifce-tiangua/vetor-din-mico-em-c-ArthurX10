#include<stdio.h>
#include<stdlib.h>

int main(){
    int tam, *vet, i;

    scanf("%d", &tam);

    vet = malloc(tam * sizeof(int));

    if (vet) {
        for (i = 0; i < tam; i++) {
            scanf("%d", &vet[i]);
        }

        for (i = 0; i < tam; i++) {
            printf("%d ", vet[i]);
        }
        printf("\n");

        free(vet);
    }

    return 0;
}
