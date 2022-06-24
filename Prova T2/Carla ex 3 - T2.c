// Prova T2 Carla - Exercicio 3
#include <string.h>
#include <stdio.h>

float PesoIdeal(float *alt, int *sexo, float *peso){
	
    if(*sexo == 1){
    	
    	*peso = 62.1 * (*alt) - 44.7;
    	
    }
    
    else if(*sexo == 2) {
    	
    	*peso = 72.7 * (*alt) - 58;
    	
    }
    
    return *peso;

}

int main()
{
	float alt, peso;
	int sexo;

	printf("\nEscreva sua altura \n"); 
	scanf("%f", &alt);
	
	printf("\nEscreva seu sexo (1 - Feminino) (2 - Masculino)\n"); 
	scanf("%d", &sexo);
	
    PesoIdeal(&alt, &sexo, &peso);
    
    printf("\nSeu peso ideal eh: %0.f \n", peso); 
    
    return 0;
   
}

