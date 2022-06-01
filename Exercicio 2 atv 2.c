// Atividade 2 Carla e Atila - Exercicio 2

#include <stdio.h>

int main()
{
    int *pt_vet, *pt_maior, *pt_menor;
    int vet[4];
    int i; 
    
    pt_vet = &vet[0];

    for(i = 0; i < 4; i++){
        scanf("%d", pt_vet);
        pt_vet++;
    }


    pt_vet = &vet[0];
    
    for(i = 0; i < 4; i++){
        printf("\nEndereco: %p | Conteudo %d: %d", &vet[i], i, *pt_vet);
        pt_vet++;
    }
    
    pt_vet = &vet[0];
    
    for(i = 0; i < 4; i++){
        if(i == 0){
            *pt_maior = &vet[i];
            *pt_menor = &vet[i];
        }
        // maior
        if(*pt_vet >= *pt_maior){
            *pt_maior = &vet[i];
        }
        // menor
        if(*pt_vet <= *pt_menor){
            *pt_menor = &vet[i];
        }
    }
    
    

    return 0;
}
