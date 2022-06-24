#include <stdio.h>

//Carla Heloisa e Atila Melo (18/05) 
//LPI exercicio 4 - lista 1
int main()
{
    //declara viariaveis
    int var = 5;
    
    int *pt_var;

    pt_var = &var;

	printf("Valor da variavel: %d\n", var);
    printf("Endereco da variavel: %p\n", &var);
    printf("Ponteiro da variavel: %d\n", *pt_var);
	printf("Conteudo ponteiro: %p\n\n", pt_var);

	int var1 = 7;
	
	pt_var = &var1;
	
	printf("Valor da variavel: %d\n", var1);
	printf("Conteudo ponteiro: %p\n\n", pt_var);
	
	pt_var = 13;
	
	printf("Valor da variavel: %d\n", var1);
	printf("Conteudo ponteiro: %p\n", pt_var);
	
    return 0;
}
