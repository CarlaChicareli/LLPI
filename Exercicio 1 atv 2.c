// Atividade 2 Carla e Atila - Exercicio 1

#include <stdio.h>

int main()
{
    int *pt_vet;
    int vet[6];
    int i; 
    
    
    pt_vet = &vet[0];
    
    printf("%p\n", pt_vet);

    for(i = 0; i < 6; i++){
        scanf("%d", pt_vet);
        if(i == 5){
            printf("%p\n", pt_vet);
        }
        pt_vet++;
    }


    pt_vet = &vet[0];
    
    for(i = 0; i < 6; i++){
        printf("\nEndereço: %p | Conteudo %d: %d", &vet[i], i, *pt_vet);
        pt_vet++;
    }

    return 0;
}
