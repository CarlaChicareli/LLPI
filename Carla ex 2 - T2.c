// Prova T2 Carla - Exercicio 2
#include <string.h>
#include <stdio.h>
#define TAMANHO 05

void lerVetor(int *vet, int dimensao); // Prototipo vetor void

void lerVetor(int *vet, int dimensao){
	
    int i;
    
    printf("Escreva os %d numeros do vetor: ", dimensao);
    for (i = 0 ; i < dimensao ; i++){
    	
    	scanf("%d", (vet+i));
    }

}

int main()
{
	int i;
    int vet[TAMANHO];
	
	lerVetor(vet, TAMANHO);

	printf("\nOs numeros digitados foram \n"); 
	
    for (i = 0; i < TAMANHO; i++) {
    	
    	 printf("%d ", vet[i]);
    }
   
}

