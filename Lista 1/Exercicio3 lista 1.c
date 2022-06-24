/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Carla Heloisa e Carolina Fonseca (11/05) 
//LPI exercício 3

#include <stdio.h>

int main()
{
    //declara viariáveis
    char var ;
    char *pt_var;
    
    scanf("%c", & var);
    
    pt_var = &var;

    printf("Valor da variavel: %c \n", var);
    printf("Endereço da variavel: %p\n", &var);
    
    printf("Endereço da ponteiro: %p\n", &pt_var);
    printf("Conteudo do ponteiro: %c \n", *pt_var);
    
    
    
    

    return 0;
}
