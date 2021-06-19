//O fatorial de um valor inteiro, consiste no produto de todos os inteiros entre um e o valor fatorial. O 
//fatorial de 5 é 1*2*3*4*5 = 120. Fazer um programa para desenvolver este cálculo (fatorial) usando o 
//while.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int numero, contador, fatorial;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Digite um numero: ");
	scanf("%d",&numero);
while(numero  != contador ){
		contador++;
		  fatorial *= contador;}
//Saída:
    printf("%d! é: %d",numero, fatorial);
	
return 0;	
}

