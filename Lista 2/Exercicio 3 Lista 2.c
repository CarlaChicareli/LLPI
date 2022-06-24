// Atividade 2 Carla - Exercicio 3
#include <string.h>
#include <stdio.h>

int main()
{
    char *pt_vet;
    char vet[50];
    int i, tamanho; 
    
    
    pt_vet = &vet[0];

	printf("Digite uma frase: ");
  	gets(pt_vet);
  	
    tamanho = strlen(pt_vet);
	
	printf("\nTotal de caracteres: %d",tamanho);
    printf("\n\n");
    
    return 0;
}
