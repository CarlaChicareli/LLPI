// Carla Heloisa, INFO 2, Retorna sempre ao calculo1
#include <stdio.h>

int analisarTempoEstado(float salario, int tempo, char Est_Civil);

int analisarTempoEstado(float s, int x, char y){
	
	float calculo, aum;
	
	if(x > 5 && (y == 'C' || y == 'c')){
		
		aum  = 0.10 * s;
	
		calculo = aum + s;
	
		printf("\nA taxa de aumento foi: %f\nO salario inicial era: %f\nO salario com o aumento e: %f", aum, s, calculo);
	
		return 0;
	}
	else {
		
		aum = 0.08 * s;
	
		calculo = aum + s;
	
		printf("\nA taxa de aumento foi: %f\nO salario inicial era: %f\nO salario com o aumento e: %f", aum, s, calculo);
	
		return 0;
	}

}
int main(){
	
	float salario;
	int tempo, calculo;
	char Est_Civil;
	
	printf("Escreva o seu salario bruto: ");
	scanf("%f", &salario);
	
	printf("Escreva por quanto tempo esta na empresa: ");
	scanf("%d", &tempo);
	
	printf("Escreva o seu estado civil(C - casado ou S - solteiro): ");
	scanf("%s", &Est_Civil);
	
	
	analisarTempoEstado(salario, tempo, Est_Civil);

	
	return 0;
	
}

