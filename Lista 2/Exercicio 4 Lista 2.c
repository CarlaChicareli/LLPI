// Atividade 2 Carla - Exercicio 4
#include <string.h>
#include <stdio.h>

int main()
{
    char *pt_vet;
    char vet[50];
    int i=0,cont=0; 
    
    pt_vet = &vet[0];

	printf("Digite uma frase: ");
  	gets(pt_vet);
  	
    while(pt_vet[i] != '\n' && pt_vet[i] != '\0'){
    	while(pt_vet[i] == ' '){
    		i++;
    	}
    	if(pt_vet[i]!='\n' && pt_vet[i]!='\0'){
    		
			cont++;
			while(pt_vet[i]!= ' ' && pt_vet[i]!= '\n' && pt_vet[i]!= '\0'){
				i++;
			}	
    	}

    }

	printf("\nNumero de palavras = %d\n", cont);
    return 0;
}
