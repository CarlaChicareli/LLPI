/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Carla Heloisa e Carolina Fonseca (11/05) 
//LPI exercício 2

#include <stdio.h>



int main()
{
    //declara viariáveis
    int var;
    int *pt_var;
  
    scanf("%d", &var);
    
    pt_var = &var;

    printf("Conteudo do ponteiro: %d \n", *pt_var );
    
    
    
    
    

    return 0;
}
