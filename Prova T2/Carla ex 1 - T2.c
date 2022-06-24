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
  	
  	//Estrutura de repetição par fazer a contagem dos espaços
  	
    while(pt_vet[i] != '\n' && pt_vet[i] != '\0'){  // Enquanto o ponteiro i diferente de /n e /0 ele ira repetir
    
		while(pt_vet[i] == ' '){ // Enquanto tiver um espaço ira contar os espaços
		
			// Variavel contadora espaços
    		i++;
    	}
    	if(pt_vet[i]!='\n' && pt_vet[i]!='\0'){ // Se ponteiro i for /n e /0 ira contar a palavra 
    		
    		// Variavel contdora palavras
			cont++;
			
			while(pt_vet[i]!= ' ' && pt_vet[i]!= '\n' && pt_vet[i]!= '\0'){ //
			
				i++;
			}	
    	}

    }

	printf("\nNumero de palavras = %d\n", cont);
    return 0;
}

