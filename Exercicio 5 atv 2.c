// Atividade 2 Carla - Exercicio 5
#include <stdio.h>
#include <conio.h>
int main()
{
	char *pt_vet;
	char vet[60];
    int i=0;
  
	pt_vet = &vet;
  
  	printf("Digite uma frase: ");
  	gets(pt_vet);
  	
  	while(pt_vet[i] != '\0'){
  		printf("%c\n", pt_vet[i]);
  		i++;
  	}
  	printf("\n");

  	return(0);
}
