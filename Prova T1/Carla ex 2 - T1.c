#include <stdio.h>

void Troca (int *a,int *b);

void main (void) {
	
	//Declara as variaveis
	int a, b;
	
	a = 13;
	b = 32;
	
	Troca (&a, &b);
	
	printf ("\n\nAgora A = %d e B = %d\n",a,b); //A variável a e b foi modificada na função Troca
}

void Troca (int *a, int *b) {
	
	//Declara a variavel
	int temp;
	
	temp = 0;
	
	*a = temp;
	*b = temp;
}
