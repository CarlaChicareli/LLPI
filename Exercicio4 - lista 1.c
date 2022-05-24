#include <stdio.h>

//Carla Heloisa e Atila Melo (18/05) 
//LPI exercicio 4 - lista 1
int main()
{
    //declara viariaveis
    int var1;
    int var2;
    
    int *pt_var1;
    int *pt_var2;

    pt_var1 = &var1;
    pt_var2 = &var2;


    scanf("%d", pt_var1);
    scanf("%d", pt_var2);

    printf("%d + %d = %d\n", *pt_var1, *pt_var2, (*pt_var1) + (*pt_var2));
    printf("%d * %d = %d\n", *pt_var1, *pt_var2, (*pt_var1) * (*pt_var2));
    printf("%d / %d = %d\n", *pt_var1, *pt_var2, (*pt_var1) / (*pt_var2));
    printf("%d - %d = %d\n", *pt_var1, *pt_var2, (*pt_var1) - (*pt_var2));

    return 0;
}
