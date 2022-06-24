/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Carla Heloisa e Carolina Fonseca (11/05) 
//LPI exercício 1

#include <stdio.h>



int main()
{
    //declara viariáveis
    float var1 = 1;
    float var2 = 2;
    float *pt_var1 = &var1;
    float *pt_var2 = &var2;
    
    printf("Endereço da variavel 1: %p\n", &var1);
    printf("Endereço da variavel 2: %p\n\n", &var2);
    
    printf("Endereço do ponteiro 1: %p \n", &pt_var1 );
    printf("Endereço do ponteiro 2: %p \n", &pt_var2 );
    
    
    
    
    

    return 0;
}
