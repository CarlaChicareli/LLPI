//Carla Heloisa 
//LPI exercicio 6

#include <stdio.h>

int main()
{
    //declara viariaveis
    
    int var1;
    int var2;
    int var3;
    
    int *pt_var1 = &var1;
    int *pt_var2 = &var2;
    int *pt_var3 = &var3;
    
    scanf("%d", pt_var1);
    scanf("%d", pt_var2);
    scanf("%d", pt_var3);
    
    pt_var1 = &var1;
    pt_var2 = &var2;
    pt_var2 = &var2;
    
    if(var1 > var2){
    	
    	int x = var2;
    	var2 = var1;
    	var1 = x;
    }
    
    if(var1 > var3){
    	
    	int x = var3;
    	var3 = var1;
    	var1 = x;
    }
    
    if(var3 > var2){
    	
    	int x = var2;
    	var2 = var3;
    	var3 = x;
    }
    
   	printf("\n%d,%d,%d", *pt_var1, *pt_var3, *pt_var2);
    
    printf("\n\nEndereco do ponteiro 1: %p \n", &pt_var1 );
    printf("Endereco do ponteiro 2: %p \n", &pt_var2 );
    printf("Endereco do ponteiro 3: %p \n", &pt_var3 );

    return 0;
}
