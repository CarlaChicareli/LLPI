#include <stdio.h>
#include <string.h>

int main() {
    
    //Declara as variaveis
    int tamanho;
    char frase[50];
    char *p;
   
    //Atribui o endereço da variável frase ao ponteiro
    p = frase;
   
    //Insere uma frase
    printf("Insira uma frase: ");
    gets(frase);
   
    tamanho = strlen(p);
   
    printf("Sua frase tem %d caracteres", tamanho, "\n");
    
    return 0;
}
